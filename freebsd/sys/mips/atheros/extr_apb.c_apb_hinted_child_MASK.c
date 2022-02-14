
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char const*,int,char*,int*) ;
 scalar_t__ FUNC_5 (char const*,int,char*,long*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_2, const char *VAR_3, int VAR_4)
{
 device_t VAR_5;
 long VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_5 = FUNC_0(VAR_2, 0, VAR_3, VAR_4);





 VAR_10 = 0;
 if (FUNC_5(VAR_3, VAR_4, "maddr", &VAR_6) == 0)
  VAR_10++;
 if (FUNC_4(VAR_3, VAR_4, "msize", &VAR_7) == 0)
  VAR_10++;


 if ((VAR_10 > 0) && (VAR_10 < 2)) {
  FUNC_3("Either maddr or msize hint is missing for %s%d\n",
      VAR_3, VAR_4);
 } else if (VAR_10) {
  VAR_9 = FUNC_1(VAR_5, VAR_1, 0,
      VAR_6, VAR_7);
  if (VAR_9 != 0)
   FUNC_2(VAR_2,
       "warning: bus_set_resource() failed\n");
 }

 if (FUNC_4(VAR_3, VAR_4, "irq", &VAR_8) == 0) {
  VAR_9 = FUNC_1(VAR_5, VAR_0, 0, VAR_8, 1);
  if (VAR_9 != 0)
   FUNC_2(VAR_2,
       "warning: bus_set_resource() failed\n");
 }
}
