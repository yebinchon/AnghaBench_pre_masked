
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct aw_spi_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aw_spi_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct aw_spi_softc*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct aw_spi_softc*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3(struct aw_spi_softc *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3, VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_6);
 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_7);

 if (VAR_3 == VAR_2) {
  VAR_5 = VAR_6;
 } else if (VAR_4 == VAR_2) {
  VAR_5 = VAR_7;
 } else {
  if ((VAR_2 - VAR_3) < (VAR_2 - VAR_4))
   VAR_5 = VAR_6;
  else
   VAR_5 = VAR_7;
 }

 FUNC_0(VAR_1, VAR_0, VAR_5);
}
