
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_5__ {int mtx; int * avail; } ;
typedef TYPE_1__ base_t ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;
 int * FUNC_2 (int *,TYPE_1__*,size_t,size_t) ;
 void* FUNC_3 (TYPE_1__*,int *,size_t,size_t) ;
 int * FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 size_t FUNC_8 (size_t) ;

__attribute__((used)) static void *
FUNC_9(tsdn_t *VAR_2, base_t *VAR_3, size_t VAR_4, size_t VAR_5,
    size_t *VAR_6) {
 VAR_5 = FUNC_1(VAR_5);
 size_t VAR_7 = FUNC_0(VAR_4, VAR_5);
 size_t VAR_8 = VAR_7 + VAR_5 - VAR_1;

 extent_t *VAR_9 = ((void*)0);
 FUNC_6(VAR_2, &VAR_3->mtx);
 for (szind_t VAR_10 = FUNC_8(VAR_8); VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = FUNC_4(&VAR_3->avail[VAR_10]);
  if (VAR_9 != ((void*)0)) {

   break;
  }
 }
 if (VAR_9 == ((void*)0)) {

  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_7, VAR_5);
 }
 void *VAR_11;
 if (VAR_9 == ((void*)0)) {
  VAR_11 = ((void*)0);
  goto label_return;
 }

 VAR_11 = FUNC_3(VAR_3, VAR_9, VAR_7, VAR_5);
 if (VAR_6 != ((void*)0)) {
  *VAR_6 = FUNC_5(VAR_9);
 }
label_return:
 FUNC_7(VAR_2, &VAR_3->mtx);
 return VAR_11;
}
