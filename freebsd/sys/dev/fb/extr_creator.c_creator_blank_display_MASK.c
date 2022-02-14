
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint32_t ;
struct creator_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct creator_softc*,int ,int ) ;
 int FUNC_1 (struct creator_softc*,int ,int ,int ) ;





__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_5, int VAR_6)
{
 struct creator_softc *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_7 = (struct creator_softc *)VAR_5;
 FUNC_1(VAR_7, VAR_0, VAR_3, VAR_1);
 VAR_8 = FUNC_0(VAR_7, VAR_0, VAR_4);
 switch (VAR_6) {
 case 130:
  VAR_8 |= VAR_2;
  break;
 case 131:
 case 129:
 case 128:
  VAR_8 &= ~VAR_2;
  break;
 }
 FUNC_1(VAR_7, VAR_0, VAR_3, VAR_1);
 FUNC_1(VAR_7, VAR_0, VAR_4, VAR_8);
 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  FUNC_1(VAR_7, VAR_0, VAR_3, VAR_1);
  (void)FUNC_0(VAR_7, VAR_0, VAR_4);
 }
 return (0);
}
