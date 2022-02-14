
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct kobject {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int ,char const*,int ) ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(struct kobject *VAR_2, const char *VAR_3,
      va_list VAR_4)
{
 const char *VAR_5 = VAR_2->name;
 char *VAR_6;

 if (VAR_2->name && !VAR_3)
  return 0;

 VAR_2->name = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (!VAR_2->name)
  return -VAR_0;


 while ((VAR_6 = FUNC_2(VAR_2->name, '/')))
  VAR_6[0] = '!';

 FUNC_0(VAR_5);
 return 0;
}
