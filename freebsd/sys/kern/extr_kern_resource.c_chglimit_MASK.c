
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uidinfo {int ui_uid; } ;
typedef long rlim_t ;


 int FUNC_0 (long*,long) ;
 int FUNC_1 (long*,long) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static inline int
FUNC_3(struct uidinfo *VAR_0, long *VAR_1, int VAR_2, rlim_t VAR_3, const char *VAR_4)
{
 long VAR_5;


 VAR_5 = FUNC_0(VAR_1, (long)VAR_2) + VAR_2;
 if (VAR_2 > 0 && VAR_3 != 0) {
  if (VAR_5 < 0 || VAR_5 > VAR_3) {
   FUNC_1(VAR_1, (long)VAR_2);
   return (0);
  }
 } else if (VAR_5 < 0)
  FUNC_2("negative %s for uid = %d\n", VAR_4, VAR_0->ui_uid);
 return (1);
}
