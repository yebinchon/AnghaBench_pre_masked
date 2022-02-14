
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ipw_softc {int sc_dev; int sc_mtx; } ;


 int FUNC_0 (struct ipw_softc*,int ) ;
 int FUNC_1 (struct ipw_softc*,int ,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int VAR_10 ;
 int FUNC_5 (struct ipw_softc*,int,char const*,int ) ;
 int FUNC_6 (struct ipw_softc*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct ipw_softc *VAR_11, const char *VAR_12, int VAR_13)
{
 const uint8_t *VAR_14, *VAR_15;
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18;
 int VAR_19;

 VAR_14 = VAR_12;
 VAR_15 = VAR_12 + VAR_13;
 while (VAR_14 < VAR_15) {
  VAR_17 = FUNC_3(VAR_14); VAR_14 += 4;
  VAR_18 = FUNC_2(VAR_14); VAR_14 += 2;

  FUNC_5(VAR_11, VAR_17, VAR_14, VAR_18);
  VAR_14 += VAR_18;
 }

 FUNC_1(VAR_11, VAR_2, VAR_6 | VAR_8 |
     VAR_9);


 FUNC_1(VAR_11, VAR_1, VAR_5);


 FUNC_1(VAR_11, VAR_3, 0);

 VAR_16 = FUNC_0(VAR_11, VAR_0);
 FUNC_1(VAR_11, VAR_0, VAR_16 | VAR_4);


 if ((VAR_19 = FUNC_6(VAR_11, &VAR_11->sc_mtx, 0, "ipwinit", VAR_10)) != 0) {
  FUNC_4(VAR_11->sc_dev, "timeout waiting for firmware "
      "initialization to complete\n");
  return VAR_19;
 }

 VAR_16 = FUNC_0(VAR_11, VAR_2);
 FUNC_1(VAR_11, VAR_2, VAR_16 | VAR_7 |
     VAR_8);

 return 0;
}
