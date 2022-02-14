
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ u_int ;
struct arm_gic_softc {int dummy; } ;
typedef int cpuset_t ;


 scalar_t__ FUNC_0 (size_t,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_2 (struct arm_gic_softc*,scalar_t__,size_t) ;
 size_t FUNC_3 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct arm_gic_softc *VAR_4, u_int VAR_5, cpuset_t *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_3, 8);
 for (VAR_7 = VAR_8; VAR_7 < VAR_1; VAR_7++)
  if (FUNC_0(VAR_7, VAR_6))
   return (VAR_0);

 for (VAR_9 = 0, VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (FUNC_0(VAR_7, VAR_6))
   VAR_9 |= VAR_2[VAR_7];

 FUNC_2(VAR_4, FUNC_1(0) + VAR_5, VAR_9);
 return (0);
}
