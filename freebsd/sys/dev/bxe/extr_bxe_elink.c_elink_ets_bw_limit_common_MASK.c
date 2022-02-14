
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
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
 int FUNC_1 (struct bxe_softc*,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct elink_params *VAR_10)
{

 struct bxe_softc *VAR_11 = VAR_10->sc;
 FUNC_0(VAR_11, "ETS enabled BW limit configuration\n");




 FUNC_1(VAR_11, VAR_3, 0x18);






 FUNC_1(VAR_11, VAR_1, 0x111A);

 FUNC_1(VAR_11, VAR_4,
        VAR_0);
 FUNC_1(VAR_11, VAR_5,
        VAR_0);


 FUNC_1(VAR_11, VAR_8, 1);


 FUNC_1(VAR_11, VAR_9, 0);







 FUNC_1(VAR_11, VAR_2, 0x7);


 FUNC_1(VAR_11, VAR_6,
        VAR_0);
 FUNC_1(VAR_11, VAR_7,
        VAR_0);
}
