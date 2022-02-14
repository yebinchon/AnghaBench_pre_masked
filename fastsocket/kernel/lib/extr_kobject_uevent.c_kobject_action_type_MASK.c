
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;

int FUNC_2(const char *VAR_2, size_t VAR_3,
   enum kobject_action *VAR_4)
{
 enum kobject_action VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_3 && (VAR_2[VAR_3-1] == '\n' || VAR_2[VAR_3-1] == '\0'))
  VAR_3--;

 if (!VAR_3)
  goto out;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (FUNC_1(VAR_1[VAR_5], VAR_2, VAR_3) != 0)
   continue;
  if (VAR_1[VAR_5][VAR_3] != '\0')
   continue;
  *VAR_4 = VAR_5;
  VAR_6 = 0;
  break;
 }
out:
 return VAR_6;
}
