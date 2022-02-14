
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vacm_view {scalar_t__* viewname; int subtree; } ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct vacm_view *VAR_0, struct vacm_view *VAR_1)
{
 uint32_t VAR_2;

 if (FUNC_1(VAR_0->viewname) < FUNC_1(VAR_1->viewname))
  return (-1);
 if (FUNC_1(VAR_0->viewname) > FUNC_1(VAR_1->viewname))
  return (1);

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->viewname); VAR_2++) {
  if (VAR_0->viewname[VAR_2] < VAR_1->viewname[VAR_2])
   return (-1);
  if (VAR_0->viewname[VAR_2] > VAR_1->viewname[VAR_2])
   return (1);
 }

 return (FUNC_0(&VAR_0->subtree, &VAR_1->subtree));
}
