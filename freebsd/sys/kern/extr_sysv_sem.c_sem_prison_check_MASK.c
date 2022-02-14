
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct prison {int pr_parent; } ;
typedef int jsys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct prison* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct vfsoptlist*,char*,int*,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4, void *VAR_5)
{
 struct prison *VAR_6 = VAR_4;
 struct prison *VAR_7;
 struct vfsoptlist *VAR_8 = VAR_5;
 int VAR_9, VAR_10;





 VAR_9 = FUNC_3(VAR_8, "sysvsem", &VAR_10, sizeof(VAR_10));
 if (VAR_9 != VAR_1) {
  if (VAR_9 != 0)
   return (VAR_9);
  switch (VAR_10) {
  case 130:
   break;
  case 128:
  case 129:
   FUNC_1(VAR_6->pr_parent);
   VAR_7 = FUNC_0(VAR_6->pr_parent, VAR_3);
   FUNC_2(VAR_6->pr_parent);
   if (VAR_7 == ((void*)0))
    return (VAR_2);
   break;
  default:
   return (VAR_0);
  }
 }

 return (0);
}
