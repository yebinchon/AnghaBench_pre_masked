
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbcons {int npending; int flush; } ;
struct consdev {struct gdbcons* cn_arg; } ;


 int FUNC_0 (int *,int) ;
 struct gdbcons VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_1)
{
 struct gdbcons *VAR_2 = &VAR_0;


 if (VAR_2->npending == -1) {
  VAR_2->npending = 0;
  FUNC_0(&VAR_2->flush, 1);
  VAR_1->cn_arg = VAR_2;
 }
}
