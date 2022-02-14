
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (void*,int *,char const*,int,int ) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int ) ;

__attribute__((used)) static int
FUNC_10(void *VAR_7, struct task_struct *VAR_8,
    const char *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;

 FUNC_1((VAR_11 & ~(VAR_6 | VAR_5)) == 0);

 VAR_12 = VAR_3 | ((VAR_11 & VAR_4) != 0 ?
     VAR_2 : 0);

 FUNC_4(VAR_7, ((void*)0), VAR_9, VAR_12, 0);
 if (VAR_10 != 0)
  FUNC_5(VAR_7, VAR_10);

 FUNC_0();
 if ((VAR_11 & VAR_4) != 0) {
  if (VAR_10 == 0)
   VAR_13 = -FUNC_9(VAR_7, 0);
  else
   VAR_13 = -FUNC_7(VAR_7, 0);
 } else {
  if (VAR_10 == 0) {
   FUNC_8(VAR_7, 0);
   VAR_13 = 0;
  } else
   VAR_13 = -FUNC_6(VAR_7, 0);
 }
 FUNC_2();


 if (VAR_13 != 0 && VAR_13 != -VAR_1) {
  FUNC_3(VAR_8, VAR_13);
  VAR_13 = -VAR_0;
 }
 return (VAR_13);
}
