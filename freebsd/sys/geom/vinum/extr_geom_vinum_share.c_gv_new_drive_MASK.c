
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_drive {int device; int name; int state; } ;


 int FUNC_0 (struct gv_drive*) ;
 struct gv_drive* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

struct gv_drive *
FUNC_7(int VAR_0, char *VAR_1[])
{
 struct gv_drive *VAR_2;
 int VAR_3, VAR_4;
 char *VAR_5;

 if (VAR_1[1] == ((void*)0) || *VAR_1[1] == '\0')
  return (((void*)0));
 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_4 = 0;
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_3(VAR_1[VAR_3], "state")) {
   VAR_3++;
   if (VAR_3 >= VAR_0) {
    VAR_4++;
    break;
   }
   VAR_2->state = FUNC_2(VAR_1[VAR_3]);
  } else if (!FUNC_3(VAR_1[VAR_3], "device")) {
   VAR_3++;
   if (VAR_3 >= VAR_0) {
    VAR_4++;
    break;
   }
   VAR_5 = VAR_1[VAR_3];

   if (FUNC_6(VAR_5, "/dev/", 5) == 0)
    VAR_5 += 5;
   FUNC_4(VAR_2->device, VAR_5, sizeof(VAR_2->device));
  } else {

   FUNC_4(VAR_2->name, VAR_1[VAR_3], sizeof(VAR_2->name));
  }
 }

 if (FUNC_5(VAR_2->name) == 0 || FUNC_5(VAR_2->device) == 0)
  VAR_4++;

 if (VAR_4) {
  FUNC_0(VAR_2);
  return (((void*)0));
 }

 return (VAR_2);
}
