
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_gcflag; } ;
struct filedescent {struct file* fde_file; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct unpcb* FUNC_0 (struct file*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct filedescent **VAR_3, int VAR_4)
{
 struct unpcb *VAR_5;
 struct file *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = VAR_3[VAR_7]->fde_file;
  if ((VAR_5 = FUNC_0(VAR_6)) == ((void*)0))
   continue;
  if (VAR_5->unp_gcflag & VAR_1)
   continue;
  VAR_5->unp_gcflag &= ~VAR_0;
  VAR_5->unp_gcflag |= VAR_1;
  VAR_2++;
 }
}
