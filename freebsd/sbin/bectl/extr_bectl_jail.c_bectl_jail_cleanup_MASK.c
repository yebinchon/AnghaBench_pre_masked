
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {char* f_mntonname; scalar_t__ f_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 size_t FUNC_1 (struct statfs**,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(char *VAR_4, int VAR_5)
{
 struct statfs *VAR_6;
 size_t VAR_7, VAR_8, VAR_9;

 if (VAR_5 >= 0 && FUNC_2(VAR_5) != 0) {
  FUNC_0(VAR_3, "unable to remove jail");
  return (1);
 }

 VAR_8 = FUNC_4(VAR_4, VAR_0);
 VAR_9 = FUNC_1(&VAR_6, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if (FUNC_3(VAR_4, VAR_6[VAR_7].f_mntonname, VAR_8) == 0 &&
      VAR_6[VAR_7].f_type != VAR_1) {

   if (FUNC_5(VAR_6[VAR_7].f_mntonname, 0) != 0) {
    FUNC_0(VAR_3, "bectl jail: unable to unmount filesystem %s",
        VAR_6[VAR_7].f_mntonname);
    return (1);
   }
  }
 }

 return (0);
}
