
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_teap_data {scalar_t__ state; int simck_msk; } ;
struct eap_sm {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_teap_data *VAR_5 = VAR_3;
 u8 *VAR_6;

 if (VAR_5->state != VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_0);
 if (!VAR_6)
  return ((void*)0);



 if (FUNC_0(VAR_5->simck_msk, VAR_6) < 0) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 *VAR_4 = VAR_0;

 return VAR_6;
}
