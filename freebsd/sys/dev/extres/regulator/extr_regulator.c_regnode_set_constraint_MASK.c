
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int boot_on; int always_on; int min_uvolt; int max_uvolt; } ;
struct regnode {TYPE_1__ std_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct regnode*) ;
 char* FUNC_2 (struct regnode*) ;
 int FUNC_3 (struct regnode*,int*) ;
 int FUNC_4 (struct regnode*,int*) ;

int
FUNC_5(struct regnode *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (VAR_3->std_param.boot_on != 1 &&
     VAR_3->std_param.always_on != 1)
  return (0);

 VAR_5 = FUNC_4(VAR_3, &VAR_4);
 if (VAR_5 != 0) {
  if (VAR_2)
   FUNC_0("Cannot get regulator status for %s\n",
       FUNC_2(VAR_3));
  return (VAR_5);
 }

 if (VAR_4 == VAR_1)
  return (0);

 VAR_5 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_5 != 0) {
  if (VAR_2)
   FUNC_0("Cannot get regulator voltage for %s\n",
       FUNC_2(VAR_3));
  return (VAR_5);
 }

 if (VAR_6 < VAR_3->std_param.min_uvolt ||
   VAR_6 > VAR_3->std_param.max_uvolt) {
  if (VAR_2)
   FUNC_0("Regulator %s current voltage %d is not in the"
       " acceptable range : %d<->%d\n",
       FUNC_2(VAR_3),
       VAR_6, VAR_3->std_param.min_uvolt,
       VAR_3->std_param.max_uvolt);
  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 != 0) {
  if (VAR_2)
   FUNC_0("Cannot enable regulator %s\n",
       FUNC_2(VAR_3));
  return (VAR_5);
 }

 return (0);
}
