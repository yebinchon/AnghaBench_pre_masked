
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_kbdmode; } ;
typedef int keyboard_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vt_window *VAR_3, keyboard_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, (caddr_t)&VAR_3->vw_kbdmode);
 if (VAR_5 == VAR_1)
  VAR_5 = VAR_0;

 return (VAR_5);
}
