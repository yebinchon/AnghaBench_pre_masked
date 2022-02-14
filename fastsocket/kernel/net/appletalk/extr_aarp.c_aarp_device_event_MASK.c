
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_8, unsigned long VAR_9,
        void *VAR_10)
{
 struct net_device *VAR_11 = VAR_10;
 int VAR_12;

 if (!FUNC_2(FUNC_1(VAR_11), &VAR_4))
  return VAR_2;

 if (VAR_9 == VAR_1) {
  FUNC_3(&VAR_3);

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   FUNC_0(&VAR_6[VAR_12], VAR_11);
   FUNC_0(&VAR_7[VAR_12], VAR_11);
   FUNC_0(&VAR_5[VAR_12], VAR_11);
  }

  FUNC_4(&VAR_3);
 }
 return VAR_2;
}
