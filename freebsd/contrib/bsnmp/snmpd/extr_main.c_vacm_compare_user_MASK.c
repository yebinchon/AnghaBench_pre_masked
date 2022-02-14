
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vacm_user {scalar_t__ sec_model; scalar_t__* secname; } ;


 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct vacm_user *VAR_0, struct vacm_user *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_0->sec_model < VAR_1->sec_model)
  return (-1);
 if (VAR_0->sec_model > VAR_1->sec_model)
  return (1);

 if (FUNC_0(VAR_0->secname) < FUNC_0(VAR_1->secname))
  return (-1);
 if (FUNC_0(VAR_0->secname) > FUNC_0(VAR_1->secname))
  return (1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->secname); VAR_2++) {
  if (VAR_0->secname[VAR_2] < VAR_1->secname[VAR_2])
   return (-1);
  if (VAR_0->secname[VAR_2] > VAR_1->secname[VAR_2])
   return (1);
 }

 return (0);
}
