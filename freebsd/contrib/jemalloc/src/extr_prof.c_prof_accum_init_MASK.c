
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_3__ {scalar_t__ accumbytes; int mtx; } ;
typedef TYPE_1__ prof_accum_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 int VAR_3 ;

bool
FUNC_3(tsdn_t *VAR_4, prof_accum_t *VAR_5) {
 FUNC_1(VAR_2);


 if (FUNC_2(&VAR_5->mtx, "prof_accum",
     VAR_1, VAR_3)) {
  return 1;
 }
 VAR_5->accumbytes = 0;



 return 0;
}
