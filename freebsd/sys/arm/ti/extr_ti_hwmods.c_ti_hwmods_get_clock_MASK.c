
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwmod {int clock_id; int * name; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int clk_ident_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,void**) ;
 struct hwmod* VAR_1 ;

clk_ident_t
FUNC_6(device_t VAR_2)
{
 phandle_t VAR_3;
 int VAR_4, VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 struct hwmod *VAR_9;

 if ((VAR_3 = FUNC_2(VAR_2)) == 0)
  return (VAR_0);

 if ((VAR_4 = FUNC_5(VAR_3, (void **)&VAR_6)) <= 0)
  return (VAR_0);

 VAR_7 = VAR_6;

 VAR_8 = VAR_0;
 while ((VAR_4 > 0) && (VAR_8 == VAR_0)) {
  for (VAR_9 = VAR_1; VAR_9->name != ((void*)0); ++VAR_9) {
   if (FUNC_3(VAR_9->name, VAR_6) == 0) {
    VAR_8 = VAR_9->clock_id;
    break;
   }
  }


  VAR_5 = FUNC_4(VAR_6) + 1;
  VAR_6 += VAR_5;
  VAR_4 -= VAR_5;
 }

 if (VAR_4 > 0)
  FUNC_1(VAR_2, "WARNING: more than one ti,hwmod \n");

 FUNC_0(VAR_7);
 return (VAR_8);
}
