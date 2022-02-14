
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_ikev2_data {scalar_t__ state; scalar_t__ keymat; int keymat_ok; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_3, void *VAR_4, size_t *VAR_5)
{
 struct eap_ikev2_data *VAR_6 = VAR_4;
 u8 *VAR_7;

 if (VAR_6->state != VAR_0 || !VAR_6->keymat_ok)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_7, VAR_6->keymat + VAR_2, VAR_1);
  *VAR_5 = VAR_1;
 }

 return VAR_7;
}
