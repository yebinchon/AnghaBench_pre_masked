
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_sake_data {scalar_t__ state; int rand_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*,int *,size_t) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_4, void *VAR_5, size_t *VAR_6)
{
 struct eap_sake_data *VAR_7 = VAR_5;
 u8 *VAR_8;

 if (VAR_7->state != VAR_3)
  return ((void*)0);

 *VAR_6 = 1 + 2 * VAR_0;
 VAR_8 = FUNC_0(*VAR_6);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8[0] = VAR_1;
 FUNC_1(VAR_8 + 1, VAR_7->rand_s, VAR_0);
 FUNC_1(VAR_8 + 1 + VAR_0, VAR_7->rand_s, VAR_0);
 FUNC_2(VAR_2, "EAP-SAKE: Derived Session-Id", VAR_8, *VAR_6);

 return VAR_8;
}
