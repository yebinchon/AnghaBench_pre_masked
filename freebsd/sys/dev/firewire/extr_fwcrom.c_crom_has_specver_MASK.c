
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct csrreg {scalar_t__ key; scalar_t__ val; } ;
struct crom_context {scalar_t__ depth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct csrreg* FUNC_0 (struct crom_context*) ;
 int FUNC_1 (struct crom_context*,scalar_t__*) ;
 int FUNC_2 (struct crom_context*) ;

int
FUNC_3(uint32_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 struct csrreg *VAR_5;
 struct crom_context VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_7 = &VAR_6;
 FUNC_1(VAR_7, VAR_2);
 while (VAR_7->depth >= 0) {
  VAR_5 = FUNC_0(VAR_7);
  if (VAR_8 == 0) {
   if (VAR_5->key == VAR_0 && VAR_5->val == VAR_3)
    VAR_8 = 1;
   else
    VAR_8 = 0;
  } else {
   if (VAR_5->key == VAR_1 && VAR_5->val == VAR_4)
    return 1;
   else
    VAR_8 = 0;
  }
  FUNC_2(VAR_7);
 }
 return 0;
}
