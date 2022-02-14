
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
struct sge_eq {scalar_t__ pidx; int sidx; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct sge_eq*) ;

__attribute__((used)) static inline u_int
FUNC_2(struct sge_eq *VAR_0)
{
 uint16_t VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = VAR_0->pidx;

 if (VAR_2 == VAR_1)
  return (VAR_0->sidx - 1);
 else
  return (FUNC_0(VAR_1, VAR_2, VAR_0->sidx) - 1);
}
