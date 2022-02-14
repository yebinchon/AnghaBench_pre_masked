
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ipmi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct ipmi_softc *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = VAR_4;
 int VAR_10 = VAR_3;

 VAR_8 = FUNC_1(VAR_5, VAR_0);
 while (VAR_4 - VAR_9 < VAR_1 && (VAR_8 & VAR_7) != VAR_6) {




  FUNC_0(VAR_10);
  VAR_8 = FUNC_1(VAR_5, VAR_0);
  if (VAR_10 < VAR_2)
   VAR_10 *= 2;
 }
 return (VAR_8);
}
