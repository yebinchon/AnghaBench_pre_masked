
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,struct proc**,int ,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(int *VAR_6)
{
 int VAR_7;
 struct proc *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4);
 VAR_7 = FUNC_2(VAR_1, (void *)(intptr_t)VAR_9, &VAR_8,
  VAR_0, 0, "aiod%d", VAR_9);
 if (VAR_7 == 0) {



  FUNC_5(&VAR_3);
  FUNC_3(&VAR_2);
  VAR_5++;
  if (VAR_6 != ((void*)0))
   (*VAR_6)--;
  FUNC_4(&VAR_2);
 } else {
  FUNC_1(VAR_4, VAR_9);
 }
 return (VAR_7);
}
