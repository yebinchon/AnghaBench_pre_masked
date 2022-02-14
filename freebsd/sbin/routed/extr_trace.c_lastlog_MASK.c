
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* FUNC_1 (scalar_t__) ;

void
FUNC_2(void)
{
 if (VAR_1.tv_sec != VAR_2.tv_sec
     || VAR_1.tv_usec != VAR_2.tv_usec) {
  (void)FUNC_0(VAR_0, "-- %s --\n", FUNC_1(VAR_2.tv_sec));
  VAR_1 = VAR_2;
 }
}
