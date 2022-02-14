
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 scalar_t__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

void
FUNC_4(char *VAR_11)
{
 int VAR_12;

 if (VAR_2 == 0)
  return;
 if (VAR_3 == 0) {
  FUNC_2("%s: no I/O\n\n", VAR_11);
  return;
 }
 if (VAR_6.tv_sec == 0)
  VAR_6 = VAR_7;
 FUNC_2("%s: I/O statistics\n", VAR_11);
 FUNC_1();
 VAR_8 += VAR_3;
 VAR_3 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_3(&VAR_10[VAR_12], &VAR_5[VAR_12], &VAR_10[VAR_12]);
  VAR_9[VAR_12] += VAR_4[VAR_12];
  VAR_5[VAR_12].tv_sec = VAR_5[VAR_12].tv_nsec = 0;
  VAR_4[VAR_12] = 0;
 }
 FUNC_0(VAR_1, &VAR_6);
}
