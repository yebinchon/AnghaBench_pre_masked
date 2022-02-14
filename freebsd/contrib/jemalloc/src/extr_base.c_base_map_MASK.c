
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
struct TYPE_5__ {void* (* alloc ) (TYPE_1__*,int *,size_t,size_t,int*,int*,unsigned int) ;} ;
typedef TYPE_1__ extent_hooks_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,size_t,size_t,int*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (TYPE_1__*,int *,size_t,size_t,int*,int*,unsigned int) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void *
FUNC_9(tsdn_t *VAR_2, extent_hooks_t *VAR_3, unsigned VAR_4, size_t VAR_5) {
 void *VAR_6;
 bool VAR_7 = 1;
 bool VAR_8 = 1;


 FUNC_1(VAR_5 == FUNC_0(VAR_5));
 size_t VAR_9 = VAR_0;
 if (VAR_3 == &VAR_1) {
  VAR_6 = FUNC_2(((void*)0), VAR_5, VAR_9, &VAR_7, &VAR_8);
 } else {

  tsd_t *VAR_10 = FUNC_7(VAR_2) ? FUNC_6() : FUNC_8(VAR_2);
  FUNC_4(VAR_10, ((void*)0));
  VAR_6 = VAR_3->alloc(VAR_3, ((void*)0), VAR_5, VAR_9,
      &VAR_7, &VAR_8, VAR_4);
  FUNC_3(VAR_10);
 }

 return VAR_6;
}
