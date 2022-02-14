
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct nameidata*,char*) ;
 int FUNC_4 (struct dentry*,char*) ;

__attribute__((used)) static void *FUNC_5(struct dentry *VAR_2, struct nameidata *VAR_3)
{
 int VAR_4 = -VAR_0;
 unsigned long VAR_5 = FUNC_2(VAR_1);
 if (VAR_5) {
  VAR_4 = FUNC_4(VAR_2, (char *) VAR_5);
  if (VAR_4 < 0)
   FUNC_1((unsigned long)VAR_5);
 }
 FUNC_3(VAR_3, VAR_4 ? FUNC_0(VAR_4) : (char *)VAR_5);
 return ((void*)0);
}
