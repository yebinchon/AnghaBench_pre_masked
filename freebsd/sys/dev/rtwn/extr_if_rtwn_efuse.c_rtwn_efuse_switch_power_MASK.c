
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtwn_softc*,int ) ;
 int FUNC_1 (struct rtwn_softc*,int ,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct rtwn_softc *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_1);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_8 = FUNC_0(VAR_7, VAR_5);
 if (!(VAR_8 & VAR_6)) {
  VAR_9 = FUNC_2(VAR_7, VAR_5,
      VAR_8 | VAR_6);
  if (VAR_9 != 0)
   return (VAR_9);
 }
 VAR_8 = FUNC_0(VAR_7, VAR_2);
 if ((VAR_8 & (VAR_4 | VAR_3)) !=
     (VAR_4 | VAR_3)) {
  VAR_9 = FUNC_2(VAR_7, VAR_2,
      VAR_8 | VAR_4 | VAR_3);
  if (VAR_9 != 0)
   return (VAR_9);
 }

 return (0);
}
