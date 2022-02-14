
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_peap_data {size_t phase2_key_len; int * phase2_key; } ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct eap_peap_data *VAR_0,
        u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 FUNC_1(VAR_1, 0, VAR_2);
 if (VAR_0->phase2_key == ((void*)0))
  return;

 VAR_3 = VAR_0->phase2_key_len;
 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;
 FUNC_0(VAR_1, VAR_0->phase2_key, VAR_3);
}
