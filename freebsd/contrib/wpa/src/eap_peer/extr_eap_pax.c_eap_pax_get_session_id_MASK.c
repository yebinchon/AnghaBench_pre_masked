
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_pax_data {scalar_t__ state; int mid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_3, void *VAR_4, size_t *VAR_5)
{
 struct eap_pax_data *VAR_6 = VAR_4;
 u8 *VAR_7;

 if (VAR_6->state != VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_0(1 + VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 *VAR_5 = 1 + VAR_0;
 VAR_7[0] = VAR_1;
 FUNC_1(VAR_7 + 1, VAR_6->mid, VAR_0);

 return VAR_7;
}
