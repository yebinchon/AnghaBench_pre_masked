
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int prof_tdata_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;

void
FUNC_2(tsd_t *VAR_1) {
 prof_tdata_t *VAR_2;

 if (!VAR_0) {
  return;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_1, VAR_2);
 }
}
