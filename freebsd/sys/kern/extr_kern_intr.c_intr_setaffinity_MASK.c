
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int dummy; } ;
typedef int cpuset_t ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct intr_event*,int) ;
 int FUNC_3 (struct intr_event*,int) ;
 int FUNC_4 (struct intr_event*,int) ;
 struct intr_event* FUNC_5 (int) ;

int
FUNC_6(int VAR_5, int VAR_6, void *VAR_7)
{
 struct intr_event *VAR_8;
 cpuset_t *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = VAR_7;
 VAR_10 = VAR_3;




 if (FUNC_0(VAR_4, VAR_9)) {
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   if (!FUNC_1(VAR_11, VAR_9))
    continue;
   if (VAR_10 != VAR_3)
    return (VAR_1);
   VAR_10 = VAR_11;
  }
 }
 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 == ((void*)0))
  return (VAR_2);
 switch (VAR_6) {
 case 129:
  return (FUNC_2(VAR_8, VAR_10));
 case 130:
  return (FUNC_3(VAR_8, VAR_10));
 case 128:
  return (FUNC_4(VAR_8, VAR_10));
 default:
  return (VAR_1);
 }
}
