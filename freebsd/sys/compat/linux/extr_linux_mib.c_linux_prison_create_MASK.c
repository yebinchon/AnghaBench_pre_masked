
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct prison {int dummy; } ;
typedef int jsys ;


 int VAR_0 ;
 int FUNC_0 (struct prison*,int *) ;
 scalar_t__ FUNC_1 (struct vfsoptlist*,char*,int*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, void *VAR_2)
{
 struct prison *VAR_3 = VAR_1;
 struct vfsoptlist *VAR_4 = VAR_2;
 int VAR_5;

 if (FUNC_1(VAR_4, "linux", &VAR_5, sizeof(VAR_5)) == 0 &&
     VAR_5 == VAR_0)
  return (0);




 FUNC_0(VAR_3, ((void*)0));
 return (0);
}
