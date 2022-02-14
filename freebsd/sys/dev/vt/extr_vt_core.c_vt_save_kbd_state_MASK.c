
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_kbdstate; } ;
typedef int keyboard_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vt_window *VAR_4, keyboard_t *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_7 = FUNC_0(VAR_5, VAR_2, (caddr_t)&VAR_6);
 if (VAR_7 == VAR_1)
  VAR_7 = VAR_0;
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_4->vw_kbdstate &= ~VAR_3;
 VAR_4->vw_kbdstate |= VAR_6 & VAR_3;

 return (0);
}
