
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int * tcb; } ;


 int FUNC_0 (char*,struct pthread*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct pthread*,int ) ;
 int FUNC_2 (struct pthread*,int *) ;
 int FUNC_3 (struct pthread*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct pthread*,struct pthread*) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_7(struct pthread *VAR_7, struct pthread *VAR_8)
{
 FUNC_0("Freeing thread %p\n", VAR_8);






 if (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_7, &VAR_4);
  FUNC_4(VAR_8->tcb);
  FUNC_3(VAR_7, &VAR_4);
 } else {
  FUNC_4(VAR_8->tcb);
 }
 VAR_8->tcb = ((void*)0);
 if ((VAR_7 == ((void*)0)) || (VAR_1 >= VAR_0)) {
  FUNC_6(VAR_7, VAR_8);
  FUNC_5(&VAR_6, -1);
 } else {




  FUNC_2(VAR_7, &VAR_2);
  FUNC_1(&VAR_3, VAR_8, VAR_5);
  VAR_1++;
  FUNC_3(VAR_7, &VAR_2);
 }
}
