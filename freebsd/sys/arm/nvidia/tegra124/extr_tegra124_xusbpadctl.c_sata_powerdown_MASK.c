
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int dummy; } ;
struct padctl_lane {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct padctl_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct padctl_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_3(struct padctl_softc *VAR_10, struct padctl_lane *VAR_11)
{
 uint32_t VAR_12;

 VAR_12 = FUNC_1(VAR_10, VAR_9);
 VAR_12 &= ~VAR_6;
 FUNC_2(VAR_10, VAR_9, VAR_12);

 VAR_12 = FUNC_1(VAR_10, VAR_8);
 VAR_12 &= ~VAR_5;
 FUNC_2(VAR_10, VAR_8, VAR_12);
 FUNC_0(100);

 VAR_12 = FUNC_1(VAR_10, VAR_8);
 VAR_12 &= ~VAR_2;
 FUNC_2(VAR_10, VAR_8, VAR_12);
 FUNC_0(100);

 VAR_12 = FUNC_1(VAR_10, VAR_8);
 VAR_12 |= VAR_4;
 VAR_12 |= VAR_3;
 FUNC_2(VAR_10, VAR_8, VAR_12);
 FUNC_0(100);

 VAR_12 = FUNC_1(VAR_10, VAR_7);
 VAR_12 |= VAR_1;
 VAR_12 |= VAR_0;
 FUNC_2(VAR_10, VAR_7, VAR_12);
 FUNC_0(100);

 return (0);
}
