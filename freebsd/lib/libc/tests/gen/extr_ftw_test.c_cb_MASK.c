
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int level; } ;


 int FUNC_0 (int,char*,char const*,int,int ) ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3, const struct stat *VAR_4, int VAR_5, struct FTW *VAR_6)
{

 switch (VAR_5) {
 case 130:
  if ((VAR_2 & VAR_0) == 0)
   return (0);
  break;
 case 129:
  if ((VAR_2 & VAR_0) != 0)
   return (0);
  break;
 case 128:
  if ((VAR_2 & VAR_1) != 0)
   return (0);
  break;
 }
 FUNC_0(0,
     "unexpected path=%s type=%d f.level=%d\n",
     VAR_3, VAR_5, VAR_6->level);
 return (0);
}
