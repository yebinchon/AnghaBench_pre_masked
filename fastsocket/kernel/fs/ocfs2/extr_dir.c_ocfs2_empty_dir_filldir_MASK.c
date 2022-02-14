
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_empty_dir_priv {int seen_dot; int seen_dot_dot; int seen_other; scalar_t__ dx_dir; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2,
       loff_t VAR_3, u64 VAR_4, unsigned VAR_5)
{
 struct ocfs2_empty_dir_priv *VAR_6 = VAR_0;
 if (VAR_2 == 1 && !FUNC_1(".", VAR_1, 1) && VAR_3 == 0) {
  VAR_6->seen_dot = 1;
  return 0;
 }

 if (VAR_2 == 2 && !FUNC_1("..", VAR_1, 2) &&
     VAR_3 == FUNC_0(1)) {
  VAR_6->seen_dot_dot = 1;

  if (VAR_6->dx_dir && VAR_6->seen_dot)
   return 1;

  return 0;
 }

 VAR_6->seen_other = 1;
 return 1;
}
