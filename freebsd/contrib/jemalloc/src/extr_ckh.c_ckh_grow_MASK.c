
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
typedef int ckhc_t ;
struct TYPE_4__ {unsigned int lg_curbuckets; int * tab; int ngrows; } ;
typedef TYPE_1__ ckh_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int,int) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,int,int *,int,int ) ;
 size_t FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7(tsd_t *VAR_3, ckh_t *VAR_4) {
 bool VAR_5;
 ckhc_t *VAR_6, *VAR_7;
 unsigned VAR_8, VAR_9;
 VAR_8 = VAR_4->lg_curbuckets;
 VAR_9 = VAR_4->lg_curbuckets + VAR_2;
 while (1) {
  size_t VAR_10;

  VAR_9++;
  VAR_10 = FUNC_4(sizeof(ckhc_t) << VAR_9, VAR_0);
  if (FUNC_6(VAR_10 == 0 || VAR_10 > VAR_1)) {
   VAR_5 = 1;
   goto label_return;
  }
  VAR_6 = (ckhc_t *)FUNC_3(FUNC_5(VAR_3), VAR_10, VAR_0,
      1, ((void*)0), 1, FUNC_0(VAR_3, ((void*)0)));
  if (VAR_6 == ((void*)0)) {
   VAR_5 = 1;
   goto label_return;
  }

  VAR_7 = VAR_4->tab;
  VAR_4->tab = VAR_6;
  VAR_6 = VAR_7;
  VAR_4->lg_curbuckets = VAR_9 - VAR_2;

  if (!FUNC_1(VAR_4, VAR_6)) {
   FUNC_2(FUNC_5(VAR_3), VAR_6, ((void*)0), ((void*)0), 1, 1);
   break;
  }


  FUNC_2(FUNC_5(VAR_3), VAR_4->tab, ((void*)0), ((void*)0), 1, 1);
  VAR_4->tab = VAR_6;
  VAR_4->lg_curbuckets = VAR_8;
 }

 VAR_5 = 0;
label_return:
 return VAR_5;
}
