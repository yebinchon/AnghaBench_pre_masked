
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* key_data_contents; int * key_data_length; } ;
typedef TYPE_1__ krb5_key_data ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

void
FUNC_2(void *VAR_0,
      int16_t *VAR_1,
      krb5_key_data *VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < *VAR_1; VAR_3++){
 if(VAR_2[VAR_3].key_data_contents[0]){
     FUNC_1(VAR_2[VAR_3].key_data_contents[0],
     0,
     VAR_2[VAR_3].key_data_length[0]);
     FUNC_0(VAR_2[VAR_3].key_data_contents[0]);
 }
 if(VAR_2[VAR_3].key_data_contents[1])
     FUNC_0(VAR_2[VAR_3].key_data_contents[1]);
    }
    *VAR_1 = 0;
}
