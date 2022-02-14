
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* sname; } ;
struct TYPE_8__ {int flags; } ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_PCTX ;
typedef TYPE_2__ ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int *,int **,int,TYPE_2__ const*,int *,char const*,int ,TYPE_1__ const*) ;
 TYPE_1__ VAR_1 ;

int FUNC_1(BIO *VAR_2, ASN1_VALUE *VAR_3, int VAR_4,
                    const ASN1_ITEM *VAR_5, const ASN1_PCTX *VAR_6)
{
    const char *VAR_7;
    if (VAR_6 == ((void*)0))
        VAR_6 = &VAR_1;
    if (VAR_6->flags & VAR_0)
        VAR_7 = ((void*)0);
    else
        VAR_7 = VAR_5->sname;
    return FUNC_0(VAR_2, &VAR_3, VAR_4, VAR_5, ((void*)0), VAR_7, 0, VAR_6);
}
