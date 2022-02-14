
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* digest; int md_data; } ;
struct TYPE_8__ {int flags; int (* final ) (TYPE_2__*,unsigned char*) ;int ctx_size; int (* cleanup ) (TYPE_2__*) ;scalar_t__ (* md_ctrl ) (TYPE_2__*,int ,int,int *) ;} ;
typedef TYPE_2__ EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int,int *) ;
 int FUNC_4 (TYPE_2__*,unsigned char*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(EVP_MD_CTX *VAR_6, unsigned char *VAR_7, size_t VAR_8)
{
    int VAR_9 = 0;

    if (VAR_6->digest->flags & VAR_3
        && VAR_8 <= VAR_5
        && VAR_6->digest->md_ctrl(VAR_6, VAR_1, (int)VAR_8, ((void*)0))) {
        VAR_9 = VAR_6->digest->final(VAR_6, VAR_7);

        if (VAR_6->digest->cleanup != ((void*)0)) {
            VAR_6->digest->cleanup(VAR_6);
            FUNC_0(VAR_6, VAR_2);
        }
        FUNC_2(VAR_6->md_data, VAR_6->digest->ctx_size);
    } else {
        FUNC_1(VAR_0, VAR_4);
    }

    return VAR_9;
}
