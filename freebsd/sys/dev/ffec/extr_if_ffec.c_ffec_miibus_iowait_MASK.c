
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ffec_softc {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ffec_softc*,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(struct ffec_softc *VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 10000; VAR_3 != 0; --VAR_3)
  if (FUNC_0(VAR_2, VAR_1) & VAR_0)
   return (1);

 return (0);
}
