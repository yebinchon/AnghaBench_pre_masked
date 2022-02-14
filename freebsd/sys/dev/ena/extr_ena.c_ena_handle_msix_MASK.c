
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_que {int cleanup_task; int cleanup_tq; struct ena_adapter* adapter; } ;
struct ena_adapter {int ifp; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct ena_que *VAR_4 = VAR_3;
 struct ena_adapter *VAR_5 = VAR_4->adapter;
 if_t VAR_6 = VAR_5->ifp;

 if (FUNC_2((FUNC_0(VAR_6) & VAR_2) == 0))
  return (VAR_1);

 FUNC_1(VAR_4->cleanup_tq, &VAR_4->cleanup_task);

 return (VAR_0);
}
