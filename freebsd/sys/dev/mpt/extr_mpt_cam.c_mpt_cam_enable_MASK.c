
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {scalar_t__ is_spi; scalar_t__ is_sas; scalar_t__ is_fc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 scalar_t__ FUNC_2 (struct mpt_softc*) ;
 scalar_t__ FUNC_3 (struct mpt_softc*) ;
 scalar_t__ FUNC_4 (struct mpt_softc*) ;
 scalar_t__ FUNC_5 (struct mpt_softc*) ;
 scalar_t__ FUNC_6 (struct mpt_softc*) ;
 scalar_t__ FUNC_7 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_8(struct mpt_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = VAR_0;
 if (VAR_1->is_fc) {
  if (FUNC_2(VAR_1)) {
   goto out;
  }
  if (FUNC_5(VAR_1)) {
   goto out;
  }
 } else if (VAR_1->is_sas) {
  if (FUNC_3(VAR_1)) {
   goto out;
  }
  if (FUNC_6(VAR_1)) {
   goto out;
  }
 } else if (VAR_1->is_spi) {
  if (FUNC_4(VAR_1)) {
   goto out;
  }
  if (FUNC_7(VAR_1)) {
   goto out;
  }
 }
 VAR_2 = 0;

out:
 FUNC_1(VAR_1);
 return (VAR_2);
}
