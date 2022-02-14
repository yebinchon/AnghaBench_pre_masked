
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int it_interval; int it_value; } ;
struct itimer {int it_callout; TYPE_1__ it_time; int it_mtx; } ;


 int FUNC_0 (struct itimer*) ;
 int FUNC_1 (struct itimer*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct itimer *VAR_1)
{
 FUNC_3(&VAR_1->it_mtx, VAR_0);





 FUNC_4(&VAR_1->it_time.it_value);
 FUNC_4(&VAR_1->it_time.it_interval);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->it_callout);
 FUNC_0(VAR_1);
 return (0);
}
