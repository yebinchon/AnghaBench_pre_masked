
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creator_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct creator_softc*,int ,int ) ;
 int FUNC_1 (struct creator_softc*,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct creator_softc *VAR_6)
{
 int VAR_7;
 int VAR_8;

 for (;;) {
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);
  if ((VAR_7 & (VAR_0 | VAR_3)) == 0)
   break;
  VAR_8 = VAR_7 & (VAR_2 | VAR_1);
  if (VAR_8 != 0)
   FUNC_1(VAR_6, VAR_4, VAR_5, VAR_8);
 }
}
