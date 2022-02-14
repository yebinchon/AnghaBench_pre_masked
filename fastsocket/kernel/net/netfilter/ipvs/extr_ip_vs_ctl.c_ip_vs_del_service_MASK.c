
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int usecnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ip_vs_service*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ip_vs_service*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ip_vs_service *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return -VAR_0;




 FUNC_4(&VAR_1);

 FUNC_3(VAR_2);




 FUNC_0(FUNC_2(&VAR_2->usecnt) > 1);

 FUNC_1(VAR_2);

 FUNC_5(&VAR_1);

 return 0;
}
