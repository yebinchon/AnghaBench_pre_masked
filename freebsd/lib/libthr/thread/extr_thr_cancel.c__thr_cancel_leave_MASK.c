
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ cancel_point; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct pthread *VAR_1, int VAR_2)
{
 VAR_1->cancel_point = 0;
 if (FUNC_2(FUNC_0(VAR_1) &&
     !FUNC_1(VAR_1) && VAR_2))
  FUNC_3(VAR_0);
}
