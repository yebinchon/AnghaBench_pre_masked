
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct ag_info {struct ag_info* ag_fine; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(void)
{
 int VAR_5;
 struct ag_info *VAR_6;


 VAR_3 = sizeof(struct sockaddr_in);
 FUNC_0();
 FUNC_1(&VAR_4, 32);


 VAR_1 = VAR_2;
 for (VAR_6 = VAR_2, VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  VAR_6->ag_fine = VAR_6+1;
  VAR_6++;
 }
}
