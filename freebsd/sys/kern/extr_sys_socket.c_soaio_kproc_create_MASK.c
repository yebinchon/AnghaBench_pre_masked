
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,struct proc**,int ,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_5(void *VAR_9, int VAR_10)
{
 struct proc *VAR_11;
 int VAR_12, VAR_13;

 FUNC_3(&VAR_1);
 for (;;) {
  if (VAR_5 < VAR_8) {

  } else if (VAR_5 >= VAR_4) {




   break;
  } else if (VAR_6 <= VAR_0 + VAR_7) {




   break;
  }
  VAR_7++;
  FUNC_4(&VAR_1);

  VAR_13 = FUNC_0(VAR_3);
  VAR_12 = FUNC_2(VAR_2, (void *)(intptr_t)VAR_13,
      &VAR_11, 0, 0, "soaiod%d", VAR_13);
  if (VAR_12 != 0) {
   FUNC_1(VAR_3, VAR_13);
   FUNC_3(&VAR_1);
   VAR_7--;
   break;
  }

  FUNC_3(&VAR_1);
  VAR_5++;
 }
 FUNC_4(&VAR_1);
}
