
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int name_continues; int name; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct file_info *VAR_0,
      const unsigned char *VAR_1, int VAR_2)
{
 if (!VAR_0->name_continues)
  FUNC_1(&VAR_0->name);
 VAR_0->name_continues = 0;
 if (VAR_2 < 1)
  return;
 switch(VAR_1[0]) {
 case 0:
  if (VAR_2 < 2)
   return;
  FUNC_2(&VAR_0->name,
      (const char *)VAR_1 + 1, VAR_2 - 1);
  break;
 case 1:
  if (VAR_2 < 2)
   return;
  FUNC_2(&VAR_0->name,
      (const char *)VAR_1 + 1, VAR_2 - 1);
  VAR_0->name_continues = 1;
  break;
 case 2:
  FUNC_0(&VAR_0->name, ".");
  break;
 case 4:
  FUNC_0(&VAR_0->name, "..");
  break;
 default:
  return;
 }

}
