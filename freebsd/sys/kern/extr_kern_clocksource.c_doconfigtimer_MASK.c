
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_state {int handle; int action; } ;
typedef int sbintime_t ;


 struct pcpu_state* FUNC_0 (int ) ;
 int FUNC_1 (struct pcpu_state*) ;
 int FUNC_2 (struct pcpu_state*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_10(void)
{
 sbintime_t VAR_3;
 struct pcpu_state *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 switch (FUNC_3(&VAR_4->action)) {
 case 1:
  VAR_3 = FUNC_9();
  FUNC_1(VAR_4);
  FUNC_8(VAR_3, 1);
  FUNC_2(VAR_4);
  VAR_4->handle = 0;
  FUNC_5(&VAR_4->action, 0);
  return (1);
 case 2:
  FUNC_1(VAR_4);
  FUNC_6(VAR_1);
  FUNC_2(VAR_4);
  VAR_4->handle = 0;
  FUNC_5(&VAR_4->action, 0);
  return (1);
 }
 if (FUNC_4(&VAR_4->handle) && !VAR_0) {
  VAR_3 = FUNC_9();
  FUNC_7(VAR_3, 0);
  return (1);
 }
 return (0);
}
