
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_id_t ;
typedef int path_id_t ;
typedef int lun_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 size_t VAR_6 ;
 int FUNC_1 (char*,int *,int *,int *,int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(int VAR_7, char **VAR_8, int VAR_9)
{
 static const char VAR_10[] =
     "you must specify \"all\", a bus, a bus:target:lun or periph to %s";
 int VAR_11, VAR_12 = 0;
 path_id_t VAR_13 = VAR_2;
 target_id_t VAR_14 = VAR_4;
 lun_id_t VAR_15 = VAR_3;
 char *VAR_16;

 if (VAR_7 < 3) {
  FUNC_6(VAR_10, VAR_9? "rescan" : "reset");
  return (1);
 }

 VAR_16 = VAR_8[VAR_6];
 while (FUNC_0(*VAR_16) && (*VAR_16 != '\0'))
  VAR_16++;
 if (FUNC_5(VAR_16, "all", FUNC_4("all")) == 0)
  VAR_5 |= VAR_0;
 else {
  VAR_11 = FUNC_1(VAR_8[VAR_6], &VAR_13, &VAR_14, &VAR_15, &VAR_5);
  if (VAR_11 != 1 && VAR_11 != 3) {
   FUNC_6(VAR_10, VAR_9 ? "rescan" : "reset");
   return (1);
  }
 }

 if (VAR_5 & VAR_1)
  VAR_12 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_9);
 else
  VAR_12 = FUNC_2(VAR_13, VAR_9);

 return (VAR_12);
}
