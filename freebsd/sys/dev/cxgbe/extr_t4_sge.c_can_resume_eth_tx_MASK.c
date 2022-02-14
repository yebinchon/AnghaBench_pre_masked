
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sge_eq {int sidx; } ;
struct mp_ring {struct sge_eq* cookie; } ;


 int FUNC_0 (struct sge_eq*) ;

__attribute__((used)) static u_int
FUNC_1(struct mp_ring *VAR_0)
{
 struct sge_eq *VAR_1 = VAR_0->cookie;

 return (FUNC_0(VAR_1) > VAR_1->sidx / 8);
}
