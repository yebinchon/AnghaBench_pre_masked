
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__,int *,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_3(&VAR_6, VAR_1);
 VAR_10 = FUNC_4(VAR_7, VAR_4, VAR_3, VAR_8);
 FUNC_0(VAR_3);
 FUNC_1(VAR_5);
 VAR_2 = 0;
 VAR_7 = ((void*)0);
 VAR_3 = ((void*)0);
 VAR_4 = 0;
 if (VAR_9)
  FUNC_2(VAR_0, "Accounting disabled\n");
 return (VAR_10);
}
