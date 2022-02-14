
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {scalar_t__ use_msg; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pvscsi_softc*) ;
 int FUNC_2 (struct pvscsi_softc*) ;
 int FUNC_3 (struct pvscsi_softc*) ;
 int FUNC_4 (struct pvscsi_softc*,int) ;

__attribute__((used)) static void
FUNC_5(struct pvscsi_softc *VAR_2)
{
 uint32_t VAR_3;

 FUNC_0(&VAR_2->lock, VAR_0);

 VAR_3 = FUNC_3(VAR_2);

 if ((VAR_3 & VAR_1) != 0) {
  FUNC_4(VAR_2, VAR_3 & VAR_1);
  FUNC_1(VAR_2);
  if (VAR_2->use_msg) {
   FUNC_2(VAR_2);
  }
 }
}
