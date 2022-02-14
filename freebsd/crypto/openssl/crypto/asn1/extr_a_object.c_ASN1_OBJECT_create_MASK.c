
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* sn; char const* ln; unsigned char* data; int nid; int length; int flags; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;

ASN1_OBJECT *FUNC_1(int VAR_3, unsigned char *VAR_4, int VAR_5,
                                const char *VAR_6, const char *VAR_7)
{
    ASN1_OBJECT VAR_8;

    VAR_8.sn = VAR_6;
    VAR_8.ln = VAR_7;
    VAR_8.data = VAR_4;
    VAR_8.nid = VAR_3;
    VAR_8.length = VAR_5;
    VAR_8.flags = VAR_0 | VAR_2 |
        VAR_1;
    return FUNC_0(&VAR_8);
}
