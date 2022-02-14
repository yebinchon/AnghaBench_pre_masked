
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_data {int success; int emsk; int simck; int key_data; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct eap_fast_data *VAR_0)
{
 if (FUNC_1(VAR_0->simck, VAR_0->key_data) < 0 ||
     FUNC_0(VAR_0->simck, VAR_0->emsk) < 0)
  return -1;
 VAR_0->success = 1;
 return 0;
}
