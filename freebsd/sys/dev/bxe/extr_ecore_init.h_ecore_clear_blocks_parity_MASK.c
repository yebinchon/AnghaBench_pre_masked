
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_3__ {int name; int sts_clr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bxe_softc*,char*,int,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (struct bxe_softc*,int) ;

__attribute__((used)) static inline void FUNC_5(struct bxe_softc *VAR_12)
{
 int VAR_13;
 uint32_t VAR_14, VAR_15 =
  VAR_0 |
  VAR_1 |
  VAR_2 |
  VAR_3;


 FUNC_3(VAR_12, VAR_10 + VAR_7, 0x1);
 FUNC_3(VAR_12, VAR_8 + VAR_7, 0x1);
 FUNC_3(VAR_12, VAR_9 + VAR_7, 0x1);
 FUNC_3(VAR_12, VAR_4 + VAR_7, 0x1);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11); VAR_13++) {
  uint32_t VAR_16 = FUNC_4(VAR_12, VAR_13);

  if (VAR_16) {
   VAR_14 = FUNC_2(VAR_12, VAR_11[VAR_13].
      sts_clr_addr);
   if (VAR_14 & VAR_16)
    FUNC_1(VAR_12,
        "Parity errors in %s: 0x%x\n",
        VAR_11[VAR_13].name,
        VAR_14 & VAR_16);
  }
 }


 VAR_14 = FUNC_2(VAR_12, VAR_5);
 if (VAR_14 & VAR_15)
  FUNC_1(VAR_12, "Parity error in MCP: 0x%x\n",
      VAR_14 & VAR_15);







 FUNC_3(VAR_12, VAR_6, 0x780);
}
