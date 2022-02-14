
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct padctl_softc*,int ) ;
 int FUNC_2 (struct padctl_softc*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct padctl_softc *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 VAR_5 |= VAR_1;
 FUNC_2(VAR_4, VAR_3, VAR_5);
 FUNC_0(100);

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 VAR_5 |= VAR_0;
 FUNC_2(VAR_4, VAR_3, VAR_5);
 FUNC_0(100);

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 VAR_5 |= VAR_2;
 FUNC_2(VAR_4, VAR_3, VAR_5);
 FUNC_0(100);

 return (0);
}
