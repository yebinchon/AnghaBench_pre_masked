
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;


 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int,int *,int ) ;

void
FUNC_3(struct pthread *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4, &VAR_2);
 while (VAR_0 != ((void*)0)) {
  VAR_5 = VAR_1;
  VAR_3++;
  FUNC_1(VAR_4, &VAR_2);
  FUNC_2(&VAR_1, VAR_5, ((void*)0), 0);
  FUNC_0(VAR_4, &VAR_2);
  VAR_3--;
 }
 VAR_0 = VAR_4;
 FUNC_1(VAR_4, &VAR_2);
}
