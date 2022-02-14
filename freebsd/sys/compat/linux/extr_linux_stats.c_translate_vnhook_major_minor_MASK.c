
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; int * v_rdev; } ;
struct stat {int st_rdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static void
FUNC_2(struct vnode *VAR_1, struct stat *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_1->v_type == VAR_0 && VAR_1->v_rdev != ((void*)0) &&
     FUNC_1(FUNC_0(VAR_1->v_rdev),
     &VAR_3, &VAR_4) == 0) {
  VAR_2->st_rdev = (VAR_3 << 8 | VAR_4);
 }
}
