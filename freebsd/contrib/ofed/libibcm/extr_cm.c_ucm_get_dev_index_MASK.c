
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_2)
{
 char *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_0(&VAR_3, "/sys/class/infiniband_cm/ucm%d", VAR_5);
  if (VAR_6 < 0)
   return -1;

  VAR_6 = FUNC_2(VAR_3, "ibdev", VAR_4, sizeof VAR_4);
  if (VAR_6 < 0)
   continue;

  if (!FUNC_3(VAR_2, VAR_4)) {
   FUNC_1(VAR_3);
   return VAR_5;
  }

  FUNC_1(VAR_3);
 }
 return -1;
}
