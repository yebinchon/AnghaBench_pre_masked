
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int initial_symlink_mode; int path; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct tree* FUNC_2 (int,int) ;
 struct tree* FUNC_3 (struct tree*,char const*,int) ;

__attribute__((used)) static struct tree *
FUNC_4(const char *VAR_0, int VAR_1, int VAR_2)
{
 struct tree *VAR_3;

 if ((VAR_3 = FUNC_2(1, sizeof(*VAR_3))) == ((void*)0))
  return (((void*)0));
 FUNC_1(&VAR_3->path);
 FUNC_0(&VAR_3->path, 31);
 VAR_3->initial_symlink_mode = VAR_1;
 return (FUNC_3(VAR_3, VAR_0, VAR_2));
}
