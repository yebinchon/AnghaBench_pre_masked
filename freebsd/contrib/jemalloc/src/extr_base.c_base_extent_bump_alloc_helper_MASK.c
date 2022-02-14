
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_t ;


 uintptr_t FUNC_0 (uintptr_t,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,size_t,int ) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void *
FUNC_6(extent_t *VAR_1, size_t *VAR_2, size_t VAR_3,
    size_t VAR_4) {
 void *VAR_5;

 FUNC_1(VAR_4 == FUNC_0(VAR_4, VAR_0));
 FUNC_1(VAR_3 == FUNC_0(VAR_3, VAR_4));

 *VAR_2 = FUNC_0((uintptr_t)FUNC_2(VAR_1),
     VAR_4) - (uintptr_t)FUNC_2(VAR_1);
 VAR_5 = (void *)((uintptr_t)FUNC_2(VAR_1) + *VAR_2);
 FUNC_1(FUNC_4(VAR_1) >= *VAR_2 + VAR_3);
 FUNC_3(VAR_1, (void *)((uintptr_t)FUNC_2(VAR_1) +
     *VAR_2 + VAR_3), FUNC_4(VAR_1) - *VAR_2 - VAR_3,
     FUNC_5(VAR_1));
 return VAR_5;
}
