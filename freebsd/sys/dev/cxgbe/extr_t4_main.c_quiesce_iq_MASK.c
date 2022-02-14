
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_iq {int state; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_2, struct sge_iq *VAR_3)
{
 (void) VAR_2;


 while (!FUNC_0(&VAR_3->state, VAR_1, VAR_0))
  FUNC_1("iqfree", 1);
}
