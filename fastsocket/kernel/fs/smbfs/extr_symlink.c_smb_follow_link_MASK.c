
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 char* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct nameidata*,char*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,struct dentry*,char*,scalar_t__) ;

__attribute__((used)) static void *FUNC_8(struct dentry *VAR_2, struct nameidata *VAR_3)
{
 char *VAR_4 = FUNC_3();
 FUNC_0("followlink of %s/%s\n", FUNC_1(VAR_2));

 if (!VAR_4) {
  VAR_4 = FUNC_2(-VAR_0);
 } else {
  int VAR_5 = FUNC_7(FUNC_6(VAR_2),
      VAR_2, VAR_4, VAR_1 - 1);
  if (VAR_5 < 0) {
   FUNC_4(VAR_4);
   VAR_4 = FUNC_2(VAR_5);
  } else {
   VAR_4[VAR_5] = 0;
  }
 }
 FUNC_5(VAR_3, VAR_4);
 return ((void*)0);
}
