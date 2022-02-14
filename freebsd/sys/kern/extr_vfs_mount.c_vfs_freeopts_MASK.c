
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct vfsopt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vfsoptlist*) ;
 struct vfsopt* FUNC_1 (struct vfsoptlist*) ;
 int FUNC_2 (struct vfsoptlist*,int ) ;
 int FUNC_3 (struct vfsoptlist*,struct vfsopt*) ;

void
FUNC_4(struct vfsoptlist *VAR_1)
{
 struct vfsopt *VAR_2;

 while (!FUNC_0(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_3(VAR_1, VAR_2);
 }
 FUNC_2(VAR_1, VAR_0);
}
