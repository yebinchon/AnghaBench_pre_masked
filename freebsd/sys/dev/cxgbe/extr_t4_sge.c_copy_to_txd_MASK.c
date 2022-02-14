
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_eq {size_t sidx; int * desc; } ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,void*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct sge_eq *VAR_0, caddr_t VAR_1, caddr_t *VAR_2, int VAR_3)
{

 FUNC_0((uintptr_t)(*VAR_2) >= (uintptr_t)&VAR_0->desc[0]);
 FUNC_0((uintptr_t)(*VAR_2) < (uintptr_t)&VAR_0->desc[VAR_0->sidx]);

 if (FUNC_1((uintptr_t)(*VAR_2) + VAR_3 <=
     (uintptr_t)&VAR_0->desc[VAR_0->sidx])) {
  FUNC_2(VAR_1, *VAR_2, VAR_3);
  (*VAR_2) += VAR_3;
 } else {
  int VAR_4 = (uintptr_t)&VAR_0->desc[VAR_0->sidx] - (uintptr_t)(*VAR_2);

  FUNC_2(VAR_1, *VAR_2, VAR_4);
  VAR_1 += VAR_4;
  VAR_4 = VAR_3 - VAR_4;
  FUNC_2(VAR_1, (void *)VAR_0->desc, VAR_4);
  (*VAR_2) = (caddr_t)VAR_0->desc + VAR_4;
 }
}
