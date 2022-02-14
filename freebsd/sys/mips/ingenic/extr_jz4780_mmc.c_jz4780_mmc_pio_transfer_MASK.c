
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_data {int flags; int len; scalar_t__ data; } ;
struct jz4780_mmc_softc {int sc_resid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jz4780_mmc_softc*,int ) ;
 int FUNC_1 (struct jz4780_mmc_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_2(struct jz4780_mmc_softc *VAR_9, struct mmc_data *VAR_10)
{
 uint32_t VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = (uint32_t *)VAR_10->data;
 VAR_14 = (VAR_10->flags & VAR_8) ? 1 : 0;
 VAR_11 = VAR_14 ? VAR_1 : VAR_0;
 for (VAR_13 = VAR_9->sc_resid; VAR_13 < (VAR_10->len >> 2); VAR_13++) {
  if ((FUNC_0(VAR_9, VAR_6) & VAR_11))
   return (1);
  if (VAR_14)
   FUNC_1(VAR_9, VAR_7, VAR_12[VAR_13]);
  else
   VAR_12[VAR_13] = FUNC_0(VAR_9, VAR_5);
  VAR_9->sc_resid = VAR_13 + 1;
 }


 VAR_11 = FUNC_0(VAR_9, VAR_4);
 VAR_11 |= (VAR_3 | VAR_2);
 FUNC_1(VAR_9, VAR_4, VAR_11);
 return (0);
}
