
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigcontext {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,int (*) (int,int,struct sigcontext*)) ;

int
FUNC_3(
 int VAR_3,
 int VAR_4,
 struct sigcontext *VAR_5
 )
{
 FUNC_2 (VAR_0, FUNC_3);
 if (FUNC_0(&VAR_1, &VAR_2))
     FUNC_1("adjtime call failed\n");
 if (VAR_2.tv_sec != 0 || VAR_2.tv_usec != 0) {
  FUNC_1("result.u = %d.%06.6d  ", (int) VAR_2.tv_sec,
         (int) VAR_2.tv_usec);
 }
}
