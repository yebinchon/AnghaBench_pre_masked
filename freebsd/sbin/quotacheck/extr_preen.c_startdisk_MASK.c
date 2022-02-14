
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partentry {int p_qfg; int p_qfu; int p_devname; } ;
struct diskentry {scalar_t__ d_pid; int d_part; } ;


 struct partentry* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct diskentry *VAR_0)
{
 struct partentry *VAR_1 = FUNC_0(&VAR_0->d_part);

 VAR_0->d_pid = FUNC_3();
 if (VAR_0->d_pid < 0) {
  FUNC_4("fork");
  return (8);
 }
 if (VAR_0->d_pid == 0)
  FUNC_2(FUNC_1(VAR_1->p_devname, VAR_1->p_qfu, VAR_1->p_qfg));
 return (0);
}
