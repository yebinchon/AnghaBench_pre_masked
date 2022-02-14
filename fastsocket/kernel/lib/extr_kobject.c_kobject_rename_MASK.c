
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {char* name; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (scalar_t__,int ) ;
 struct kobject* FUNC_2 (struct kobject*) ;
 char* FUNC_3 (struct kobject*,int ) ;
 int FUNC_4 (struct kobject*) ;
 int FUNC_5 (struct kobject*,int ,char**) ;
 char* FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (struct kobject*,char const*) ;

int FUNC_10(struct kobject *VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 const char *VAR_7 = ((void*)0);
 const char *VAR_8 = ((void*)0), *VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11[2];

 VAR_4 = FUNC_2(VAR_4);
 if (!VAR_4)
  return -VAR_0;
 if (!VAR_4->parent)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto out;
 }
 VAR_10 = FUNC_1(FUNC_8(VAR_7) + 15, VAR_2);
 if (!VAR_10) {
  VAR_6 = -VAR_1;
  goto out;
 }
 FUNC_7(VAR_10, "DEVPATH_OLD=%s", VAR_7);
 VAR_11[0] = VAR_10;
 VAR_11[1] = ((void*)0);

 VAR_9 = VAR_8 = FUNC_6(VAR_5, VAR_2);
 if (!VAR_9) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_9(VAR_4, VAR_5);
 if (VAR_6)
  goto out;


 VAR_8 = VAR_4->name;
 VAR_4->name = VAR_9;




 FUNC_5(VAR_4, VAR_3, VAR_11);

out:
 FUNC_0(VAR_8);
 FUNC_0(VAR_10);
 FUNC_0(VAR_7);
 FUNC_4(VAR_4);

 return VAR_6;
}
