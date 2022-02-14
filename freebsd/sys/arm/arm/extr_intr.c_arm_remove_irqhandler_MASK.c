
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int ie_handlers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 struct intr_event** VAR_0 ;

int
FUNC_4(int VAR_1, void *VAR_2)
{
 struct intr_event *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0[VAR_1];
 FUNC_1(VAR_1);

 VAR_4 = FUNC_3(VAR_2);

 if (!FUNC_0(&VAR_3->ie_handlers))
  FUNC_2(VAR_1);
 return (VAR_4);
}
