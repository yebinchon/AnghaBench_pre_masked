
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int FUNC_2 (struct elink_params const*) ;

void FUNC_3(const struct elink_params *VAR_5, const uint32_t VAR_6,
   const uint32_t VAR_7)
{

 struct bxe_softc *VAR_8 = VAR_5->sc;
 const uint32_t VAR_9 = VAR_6 + VAR_7;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;

 FUNC_0(VAR_8, "ETS enabled BW limit configuration\n");

 if ((!VAR_9) ||
     (!VAR_6) ||
     (!VAR_7)) {
  FUNC_0(VAR_8, "Total BW can't be zero\n");
  return;
 }

 VAR_10 = (VAR_6 * VAR_0)/
  VAR_9;
 VAR_11 = (VAR_7 * VAR_0)/
  VAR_9;

 FUNC_2(VAR_5);

 FUNC_1(VAR_8, VAR_1, VAR_10);
 FUNC_1(VAR_8, VAR_2, VAR_11);

 FUNC_1(VAR_8, VAR_3, VAR_10);
 FUNC_1(VAR_8, VAR_4, VAR_11);
}
