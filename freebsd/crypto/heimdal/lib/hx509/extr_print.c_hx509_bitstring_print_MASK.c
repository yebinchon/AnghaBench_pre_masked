
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_vprint_func ;
struct TYPE_3__ {int length; scalar_t__ data; } ;
typedef TYPE_1__ heim_bit_string ;


 int FUNC_0 (int ,void*,char*,unsigned char,...) ;

void
FUNC_1(const heim_bit_string *VAR_0,
        hx509_vprint_func VAR_1, void *VAR_2)
{
    size_t VAR_3;
    FUNC_0(VAR_1, VAR_2, "\tlength: %d\n\t", VAR_0->length);
    for (VAR_3 = 0; VAR_3 < (VAR_0->length + 7) / 8; VAR_3++)
 FUNC_0(VAR_1, VAR_2, "%02x%s%s",
     ((unsigned char *)VAR_0->data)[VAR_3],
     VAR_3 < (VAR_0->length - 7) / 8
     && (VAR_3 == 0 || (VAR_3 % 16) != 15) ? ":" : "",
     VAR_3 != 0 && (VAR_3 % 16) == 15 ?
     (VAR_3 <= ((VAR_0->length + 7) / 8 - 2) ? "\n\t" : "\n"):"");
}
