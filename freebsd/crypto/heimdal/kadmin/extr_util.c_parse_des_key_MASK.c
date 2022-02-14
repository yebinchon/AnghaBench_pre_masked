
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key_data_ver; int* key_data_length; int * key_data_type; int ** key_data_contents; scalar_t__ key_data_kvno; } ;
typedef TYPE_1__ krb5_key_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4 (const char *VAR_5, krb5_key_data *VAR_6,
        const char **VAR_7)
{
    const char *VAR_8 = VAR_5;
    unsigned char VAR_9[8];
    int VAR_10;

    if (FUNC_3 (VAR_5) != 16) {
 *VAR_7 = "bad length, should be 16 for DES key";
 return 1;
    }
    for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
 int VAR_11, VAR_12;

 VAR_11 = FUNC_0(VAR_8[2 * VAR_10]);
 VAR_12 = FUNC_0(VAR_8[2 * VAR_10 + 1]);
 if (VAR_11 < 0 || VAR_12 < 0) {
     *VAR_7 = "non-hex character";
     return 1;
 }
 VAR_9[VAR_10] = (VAR_11 << 4) | VAR_12;
    }
    for (VAR_10 = 0; VAR_10 < 3; ++VAR_10) {
 VAR_6[VAR_10].key_data_ver = 2;
 VAR_6[VAR_10].key_data_kvno = 0;

 VAR_6[VAR_10].key_data_type[0] = VAR_1;
 VAR_6[VAR_10].key_data_length[0] = 8;
 VAR_6[VAR_10].key_data_contents[0] = FUNC_1(8);
 if (VAR_6[VAR_10].key_data_contents[0] == ((void*)0)) {
     *VAR_7 = "malloc";
     return VAR_0;
 }
 FUNC_2 (VAR_6[VAR_10].key_data_contents[0], VAR_9, 8);

 VAR_6[VAR_10].key_data_type[1] = VAR_4;
 VAR_6[VAR_10].key_data_length[1] = 0;
 VAR_6[VAR_10].key_data_contents[1] = ((void*)0);
    }
    VAR_6[0].key_data_type[0] = VAR_3;
    VAR_6[1].key_data_type[0] = VAR_2;
    return 0;
}
