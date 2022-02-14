
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ttls_data {int * key_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct eap_ttls_data *VAR_2)
{
 if (VAR_2->key_data) {
  FUNC_0(VAR_2->key_data, VAR_1 + VAR_0);
  VAR_2->key_data = ((void*)0);
 }
}
