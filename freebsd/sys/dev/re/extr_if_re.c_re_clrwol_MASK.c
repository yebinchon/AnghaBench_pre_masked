
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rl_softc {int rl_cfg5; int rl_cfg3; int rl_dev; } ;


 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
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
 int FUNC_2 (struct rl_softc*) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static void
FUNC_4(struct rl_softc *VAR_10)
{
 int VAR_11;
 uint8_t VAR_12;

 FUNC_2(VAR_10);

 if (FUNC_3(VAR_10->rl_dev, VAR_0, &VAR_11) != 0)
  return;


 FUNC_1(VAR_10, VAR_7, VAR_9);

 VAR_12 = FUNC_0(VAR_10, VAR_10->rl_cfg3);
 VAR_12 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_10, VAR_10->rl_cfg3, VAR_12);


 FUNC_1(VAR_10, VAR_7, VAR_8);

 VAR_12 = FUNC_0(VAR_10, VAR_10->rl_cfg5);
 VAR_12 &= ~(VAR_3 | VAR_5 | VAR_6);
 VAR_12 &= ~VAR_4;
 FUNC_1(VAR_10, VAR_10->rl_cfg5, VAR_12);
}
