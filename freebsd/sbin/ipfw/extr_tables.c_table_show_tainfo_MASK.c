
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ta_cldata {int taclass; int itemsize; int itemsize6; int size; int count; } ;
typedef int ipfw_xtable_info ;





 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(ipfw_xtable_info *VAR_0, struct ta_cldata *VAR_1,
    const char *VAR_2, const char *VAR_3)
{

 switch (VAR_1->taclass) {
 case 129:
 case 130:
  FUNC_0(" %salgorithm %s info\n", VAR_2, VAR_3);
  if (VAR_1->itemsize == VAR_1->itemsize6)
   FUNC_0("  size: %u items: %u itemsize: %u\n",
       VAR_1->size, VAR_1->count, VAR_1->itemsize);
  else
   FUNC_0("  size: %u items: %u "
       "itemsize4: %u itemsize6: %u\n",
       VAR_1->size, VAR_1->count,
       VAR_1->itemsize, VAR_1->itemsize6);
  break;
 case 128:
  FUNC_0(" %salgorithm %s info\n", VAR_2, VAR_3);
  if (VAR_1->itemsize == VAR_1->itemsize6)
   FUNC_0("  items: %u itemsize: %u\n",
       VAR_1->count, VAR_1->itemsize);
  else
   FUNC_0("  items: %u "
       "itemsize4: %u itemsize6: %u\n",
       VAR_1->count, VAR_1->itemsize, VAR_1->itemsize6);
  break;
 default:
  FUNC_0(" algo class: %s\n", VAR_3);
 }
}
