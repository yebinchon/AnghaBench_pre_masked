
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct sge_eq {int sidx; int cidx; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sge_eq*) ;

__attribute__((used)) static inline u_int
FUNC_2(struct sge_eq *VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_1, VAR_0->cidx, VAR_0->sidx));
}
