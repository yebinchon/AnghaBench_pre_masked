
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t resp_len; int * resp; } ;
struct TYPE_7__ {TYPE_1__ ocsp; } ;
struct TYPE_8__ {TYPE_2__ ext; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *,size_t*) ;
 size_t FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 unsigned int VAR_6 ;

int FUNC_6(SSL *VAR_7, PACKET *VAR_8)
{
    size_t VAR_9;
    unsigned int VAR_10;

    if (!FUNC_2(VAR_8, &VAR_10)
        || VAR_10 != VAR_6) {
        FUNC_5(VAR_7, VAR_1, VAR_3,
                 VAR_5);
        return 0;
    }
    if (!FUNC_3(VAR_8, &VAR_9)
        || FUNC_4(VAR_8) != VAR_9) {
        FUNC_5(VAR_7, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }
    VAR_7->ext.ocsp.resp = FUNC_0(VAR_9);
    if (VAR_7->ext.ocsp.resp == ((void*)0)) {
        FUNC_5(VAR_7, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }
    if (!FUNC_1(VAR_8, VAR_7->ext.ocsp.resp, VAR_9)) {
        FUNC_5(VAR_7, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }
    VAR_7->ext.ocsp.resp_len = VAR_9;

    return 1;
}
