
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int dummy; } ;
struct uufsd {struct fs d_fs; } ;


 int FUNC_0 (struct uufsd*) ;
 int FUNC_1 (struct uufsd*,char const*) ;

__attribute__((used)) static struct fs *
FUNC_2(const char *VAR_0)
{
 static struct uufsd VAR_1;
 struct fs *VAR_2;

 if (FUNC_1(&VAR_1, VAR_0) == -1)
  return (((void*)0));
 VAR_2 = &VAR_1.d_fs;
 FUNC_0(&VAR_1);
 return (VAR_2);
}
