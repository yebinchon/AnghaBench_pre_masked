
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_ikev2_data {scalar_t__ state; int keymat; int keymat_ok; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_ikev2_data *VAR_5 = VAR_3;
 u8 *VAR_6;

 if (VAR_5->state != VAR_0 || !VAR_5->keymat_ok)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6) {
  FUNC_1(VAR_6, VAR_5->keymat, VAR_1);
  *VAR_4 = VAR_1;
 }

 return VAR_6;
}
