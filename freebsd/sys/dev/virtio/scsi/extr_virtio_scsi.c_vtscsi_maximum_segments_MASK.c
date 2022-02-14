
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct vtscsi_softc *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_4;

 if (VAR_6 > 0) {
  VAR_7 += FUNC_0(VAR_6, VAR_0 / VAR_1 + 1);
  if (VAR_5->vtscsi_flags & VAR_3)
   VAR_7 = FUNC_0(VAR_7, VAR_2);
 } else
  VAR_7 += 1;

 return (VAR_7);
}
