
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {int va_end; int va_start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct vmap_area *VAR_3)
{
 VAR_3->flags |= VAR_1;
 FUNC_0((VAR_3->va_end - VAR_3->va_start) >> VAR_0, &VAR_2);
 if (FUNC_4(FUNC_1(&VAR_2) > FUNC_2()))
  FUNC_3();
}
