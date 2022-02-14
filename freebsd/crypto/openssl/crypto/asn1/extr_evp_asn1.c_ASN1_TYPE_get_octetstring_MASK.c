
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * octet_string; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ ASN1_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

int FUNC_4(const ASN1_TYPE *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    const unsigned char *VAR_8;

    if ((VAR_3->type != VAR_2) || (VAR_3->value.octet_string == ((void*)0))) {
        FUNC_2(VAR_0, VAR_1);
        return -1;
    }
    VAR_8 = FUNC_0(VAR_3->value.octet_string);
    VAR_6 = FUNC_1(VAR_3->value.octet_string);
    if (VAR_6 < VAR_5)
        VAR_7 = VAR_6;
    else
        VAR_7 = VAR_5;
    FUNC_3(VAR_4, VAR_8, VAR_7);
    return VAR_6;
}
