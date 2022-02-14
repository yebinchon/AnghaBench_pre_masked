
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_context ;
typedef int gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_5__ {int length; char* elements; } ;
struct TYPE_4__ {int length; unsigned char* value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char*,char*,int) ;
 int FUNC_3 (char*,unsigned char*,int) ;
 int FUNC_4 (int *,int ,char*,int *) ;

__attribute__((used)) static OM_uint32
FUNC_5 (OM_uint32 *VAR_4,
      krb5_context VAR_5,
      const gss_buffer_t VAR_6,
      gss_name_t *VAR_7)
{
    unsigned char *VAR_8;
    uint32_t VAR_9;
    OM_uint32 VAR_10;
    char *VAR_11;

    if (VAR_6->length < 10 + VAR_1->length)
 return VAR_2;



    VAR_8 = VAR_6->value;

    if (FUNC_2(&VAR_8[0], "\x04\x01\x00", 3) != 0 ||
 VAR_8[3] != VAR_1->length + 2 ||
 VAR_8[4] != 0x06 ||
 VAR_8[5] != VAR_1->length ||
 FUNC_2(&VAR_8[6], VAR_1->elements,
        VAR_1->length) != 0)
 return VAR_2;

    VAR_8 += 6 + VAR_1->length;

    VAR_9 = VAR_8[0] << 24 | VAR_8[1] << 16 | VAR_8[2] << 8 | VAR_8[3];
    VAR_8 += 4;

    if (VAR_9 > VAR_6->length - 10 - VAR_1->length)
 return VAR_2;

    VAR_11 = FUNC_1(VAR_9 + 1);
    if (VAR_11 == ((void*)0)) {
 *VAR_4 = VAR_0;
 return VAR_3;
    }
    FUNC_3(VAR_11, VAR_8, VAR_9);
    VAR_11[VAR_9] = '\0';

    VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_7);
    FUNC_0(VAR_11);

    return VAR_10;
}
