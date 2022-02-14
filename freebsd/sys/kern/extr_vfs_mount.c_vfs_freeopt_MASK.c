
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct vfsopt {struct vfsopt* value; struct vfsopt* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct vfsoptlist*,struct vfsopt*,int ) ;
 int FUNC_1 (struct vfsopt*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct vfsoptlist *VAR_2, struct vfsopt *VAR_3)
{

 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_1(VAR_3->name, VAR_0);
 if (VAR_3->value != ((void*)0))
  FUNC_1(VAR_3->value, VAR_0);
 FUNC_1(VAR_3, VAR_0);
}
