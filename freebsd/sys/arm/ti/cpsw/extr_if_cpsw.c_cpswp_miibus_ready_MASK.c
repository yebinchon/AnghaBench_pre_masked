
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cpsw_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cpsw_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct cpsw_softc *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6 = VAR_1;

 while (--VAR_6) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if ((VAR_5 & VAR_2) == 0)
   return (1);
  FUNC_0(VAR_0);
 }

 return (0);
}
