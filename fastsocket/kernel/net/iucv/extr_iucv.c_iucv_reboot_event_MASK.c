
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_5,
        unsigned long VAR_6, void *VAR_7)
{
 int VAR_8, VAR_9;

 if (FUNC_0(&VAR_2))
  return VAR_0;

 FUNC_1();
 FUNC_4(&VAR_2, VAR_1, ((void*)0), 1);
 FUNC_5();
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_4[VAR_8])
   VAR_9 = FUNC_3(VAR_8, ((void*)0));
 }
 FUNC_6();
 FUNC_7();
 FUNC_2();
 return VAR_0;
}
