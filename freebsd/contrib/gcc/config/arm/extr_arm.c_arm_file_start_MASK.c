
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int string; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_11 ;
 int FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_19;

  if (VAR_1)
    {
      const char *VAR_20;
      if (VAR_10[0].string)
 FUNC_1 (VAR_11, "\t.cpu %s\n", VAR_10[0].string);
      else if (VAR_10[1].string)
 FUNC_1 (VAR_11, "\t.arch %s\n", VAR_10[1].string);
      else
 FUNC_1 (VAR_11, "\t.cpu %s\n",
       VAR_7[VAR_8].name);

      if (VAR_4)
 {
   if (VAR_5)
     VAR_20 = "softvfp";
   else
     VAR_20 = "softfpa";
 }
      else
 {
   switch (VAR_9)
     {
     case 132:
       VAR_20 = "fpa";
       break;
     case 131:
       VAR_20 = "fpe2";
       break;
     case 130:
       VAR_20 = "fpe3";
       break;
     case 129:
       VAR_20 = "maverick";
       break;
     case 128:
       if (VAR_2)
  FUNC_1 (VAR_11, "\t.eabi_attribute 27, 3\n");
       if (VAR_3)
  FUNC_1 (VAR_11, "\t.eabi_attribute 28, 1\n");
       VAR_20 = "vfp";
       break;
     default:
       FUNC_0();
     }
 }
      FUNC_1 (VAR_11, "\t.fpu %s\n", VAR_20);






      FUNC_1 (VAR_11, "\t.eabi_attribute 18, %d\n",
     (int)VAR_6 / VAR_0);


      if (VAR_13)
 FUNC_1 (VAR_11, "\t.eabi_attribute 19, 1\n");
      if (!VAR_16)
 {

   FUNC_1 (VAR_11, "\t.eabi_attribute 20, 1\n");

   FUNC_1 (VAR_11, "\t.eabi_attribute 21, 1\n");
 }

      if (VAR_15)
 FUNC_1 (VAR_11, "\t.eabi_attribute 22, 1\n");

      FUNC_1 (VAR_11, "\t.eabi_attribute 23, %d\n",
     VAR_12 ? 1 : 3);


      FUNC_1 (VAR_11, "\t.eabi_attribute 24, 1\n");

      FUNC_1 (VAR_11, "\t.eabi_attribute 25, 1\n");

      FUNC_1 (VAR_11, "\t.eabi_attribute 26, %d\n",
     VAR_14 ? 1 : 2);


      if (VAR_18)
 VAR_19 = 4;
      else if (VAR_17 >= 2)
 VAR_19 = 2;
      else if (VAR_17)
 VAR_19 = 1;
      else
 VAR_19 = 6;
      FUNC_1 (VAR_11, "\t.eabi_attribute 30, %d\n", VAR_19);
    }
  FUNC_2();
}
