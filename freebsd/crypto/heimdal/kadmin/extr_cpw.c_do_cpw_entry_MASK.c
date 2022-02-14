
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpw_entry_data {int password; scalar_t__ key_data; scalar_t__ random_password; scalar_t__ random_key; } ;
typedef int krb5_principal ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(krb5_principal VAR_0, void *VAR_1)
{
    struct cpw_entry_data *VAR_2 = VAR_1;

    if (VAR_2->random_key)
 return FUNC_2 (VAR_0);
    else if (VAR_2->random_password)
 return FUNC_3 (VAR_0);
    else if (VAR_2->key_data)
 return FUNC_0 (VAR_0, VAR_2->key_data);
    else
 return FUNC_1 (VAR_0, VAR_2->password);
}
