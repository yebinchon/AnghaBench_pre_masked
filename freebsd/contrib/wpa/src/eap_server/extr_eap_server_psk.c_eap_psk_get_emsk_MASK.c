
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_psk_data {scalar_t__ state; int emsk; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_psk_data *VAR_5 = VAR_3;
 u8 *VAR_6;

 if (VAR_5->state != VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5->emsk, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 *VAR_4 = VAR_0;

 return VAR_6;
}
