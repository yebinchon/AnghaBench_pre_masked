
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct gpiobus_ivar {int npins; int* pins; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct gpiobus_ivar *VAR_0, char *VAR_1, size_t VAR_2)
{
 char VAR_3[128];
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_0->npins == 0)
  return;

 VAR_7 = 0;
 VAR_5 = VAR_6 = VAR_0->pins[0];
 for (VAR_4 = 1; VAR_4 < VAR_0->npins; VAR_4++) {
  if (VAR_0->pins[VAR_4] != (VAR_6 + 1)) {
   if (VAR_7)
    FUNC_2(VAR_1, ",", VAR_2);
   FUNC_0(VAR_3, 0, sizeof(VAR_3));
   if (VAR_5 != VAR_6)
    FUNC_1(VAR_3, sizeof(VAR_3) - 1, "%d-%d",
        VAR_5, VAR_6);
   else
    FUNC_1(VAR_3, sizeof(VAR_3) - 1, "%d",
        VAR_5);
   FUNC_2(VAR_1, VAR_3, VAR_2);

   VAR_5 = VAR_6 = VAR_0->pins[VAR_4];
   VAR_7 = 1;
  }
  else
   VAR_6++;
 }

 if (VAR_7)
  FUNC_2(VAR_1, ",", VAR_2);
 FUNC_0(VAR_3, 0, sizeof(VAR_3));
 if (VAR_5 != VAR_6)
  FUNC_1(VAR_3, sizeof(VAR_3) - 1, "%d-%d",
      VAR_5, VAR_6);
 else
  FUNC_1(VAR_3, sizeof(VAR_3) - 1, "%d",
      VAR_5);
 FUNC_2(VAR_1, VAR_3, VAR_2);
}
