
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int bfe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bfe_softc*,int ) ;
 int FUNC_1 (struct bfe_softc*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct bfe_softc *VAR_8, u_int32_t VAR_9)
{
 u_int32_t VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_8->bfe_dev, VAR_0, 4);
 FUNC_3(VAR_8->bfe_dev, VAR_0, VAR_2, 4);
 VAR_11 = FUNC_0(VAR_8, VAR_3) & VAR_1;

 VAR_12 = FUNC_0(VAR_8, VAR_4);
 VAR_12 |= VAR_9;
 FUNC_1(VAR_8, VAR_4, VAR_12);

 VAR_12 = FUNC_0(VAR_8, VAR_7);
 VAR_12 |= VAR_6 | VAR_5;
 FUNC_1(VAR_8, VAR_7, VAR_12);

 FUNC_3(VAR_8->bfe_dev, VAR_0, VAR_10, 4);
}
