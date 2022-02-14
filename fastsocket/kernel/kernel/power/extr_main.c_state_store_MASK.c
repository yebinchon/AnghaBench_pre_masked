
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t suspend_state_t ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,char,size_t) ;
 char** VAR_3 ;
 int FUNC_3 (char const* const) ;
 int FUNC_4 (char const*,char const* const,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_4, struct kobj_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{




 char *VAR_8;
 int VAR_9;
 int VAR_10 = -VAR_0;

 VAR_8 = FUNC_2(VAR_6, '\n', VAR_7);
 VAR_9 = VAR_8 ? VAR_8 - VAR_6 : VAR_7;


 if (VAR_9 == 4 && !FUNC_4(VAR_6, "disk", VAR_9)) {
  VAR_10 = FUNC_1();
  goto Exit;
 }
 Exit:
 return VAR_10 ? VAR_10 : VAR_7;
}
