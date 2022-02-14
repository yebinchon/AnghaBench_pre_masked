
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vnode*,struct mount**) ;
 int VAR_1 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*,int,int) ;
 int FUNC_5 (struct mount*) ;

int
FUNC_6(struct vnode *VAR_2, struct mount **VAR_3, int VAR_4)
{
 struct mount *VAR_5;
 int VAR_6;

 FUNC_0((VAR_4 & VAR_1) == 0 || (*VAR_3 != ((void*)0) && VAR_2 == ((void*)0)),
     ("V_MNTREF requires mp"));

 VAR_6 = 0;




 if (VAR_2 != ((void*)0)) {
  if ((VAR_6 = FUNC_1(VAR_2, VAR_3)) != 0) {
   *VAR_3 = ((void*)0);
   if (VAR_6 != VAR_0)
    return (VAR_6);
   return (0);
  }
 }
 if ((VAR_5 = *VAR_3) == ((void*)0))
  return (0);

 if (!FUNC_5(VAR_5)) {
  if (VAR_2 != ((void*)0) || (VAR_4 & VAR_1) != 0)
   FUNC_3(VAR_5);
  return (0);
 }
 if (VAR_2 == ((void*)0) && (VAR_4 & VAR_1) == 0)
  FUNC_2(VAR_5);

 return (FUNC_4(VAR_5, VAR_4, 0));
}
