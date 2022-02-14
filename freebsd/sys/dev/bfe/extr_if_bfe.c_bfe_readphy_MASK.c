
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int bfe_phyaddr; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct bfe_softc*,int ) ;
 int FUNC_1 (struct bfe_softc*,int ,int) ;
 int FUNC_2 (struct bfe_softc*,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct bfe_softc *VAR_11, u_int32_t VAR_12, u_int32_t *VAR_13)
{
 int VAR_14;


 FUNC_1(VAR_11, VAR_1, VAR_0);
 FUNC_1(VAR_11, VAR_2, (VAR_8 |
    (VAR_4 << VAR_5) |
    (VAR_11->bfe_phyaddr << VAR_6) |
    (VAR_12 << VAR_7) |
    (VAR_10 << VAR_9)));
 VAR_14 = FUNC_2(VAR_11, VAR_1, VAR_0, 100, 0);
 *VAR_13 = FUNC_0(VAR_11, VAR_2) & VAR_3;

 return (VAR_14);
}
