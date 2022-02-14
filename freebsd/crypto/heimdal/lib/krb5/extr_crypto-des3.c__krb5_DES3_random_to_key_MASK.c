
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {unsigned char* data; int length; } ;
struct TYPE_5__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int krb5_context ;
typedef unsigned char DES_cblock ;


 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*) ;
 int FUNC_3 (unsigned char*,int ,int ) ;

void
FUNC_4(krb5_context VAR_0,
    krb5_keyblock *VAR_1,
    const void *VAR_2,
    size_t VAR_3)
{
    unsigned char *VAR_4 = VAR_1->keyvalue.data;
    const u_char *VAR_5 = VAR_2;
    DES_cblock *VAR_6;
    int VAR_7, VAR_8;

    FUNC_3(VAR_1->keyvalue.data, 0, VAR_1->keyvalue.length);
    for (VAR_7 = 0; VAR_7 < 3; ++VAR_7) {
 unsigned char VAR_9;
 for (VAR_8 = 0; VAR_8 < 7; ++VAR_8) {
     unsigned char VAR_10 = VAR_5[7 * VAR_7 + VAR_8];

     VAR_4[8 * VAR_7 + VAR_8] = VAR_10;
 }
 VAR_9 = 0;
 for (VAR_8 = 6; VAR_8 >= 0; --VAR_8) {
     VAR_9 |= VAR_5[7 * VAR_7 + VAR_8] & 1;
     VAR_9 <<= 1;
 }
 VAR_4[8 * VAR_7 + 7] = VAR_9;
    }
    VAR_6 = VAR_1->keyvalue.data;
    for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
 FUNC_1(&VAR_6[VAR_7]);
 if(FUNC_0(&VAR_6[VAR_7]))
     FUNC_2(&VAR_6[VAR_7], (const unsigned char*)"\0\0\0\0\0\0\0\xf0");
    }
}
