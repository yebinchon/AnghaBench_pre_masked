
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sge_qstat {int cidx; } ;
struct sge_eq {size_t sidx; int * desc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline uint16_t
FUNC_1(struct sge_eq *VAR_0)
{
 struct sge_qstat *VAR_1 = (void *)&VAR_0->desc[VAR_0->sidx];
 uint16_t VAR_2 = VAR_1->cidx;

 return (FUNC_0(VAR_2));
}
