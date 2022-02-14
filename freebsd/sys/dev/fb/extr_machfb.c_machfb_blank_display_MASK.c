
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint32_t ;
struct machfb_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct machfb_softc*,int ) ;
 int FUNC_1 (struct machfb_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_6, int VAR_7)
{
 struct machfb_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = (struct machfb_softc *)VAR_6;

 VAR_9 = (FUNC_0(VAR_8, VAR_3) | VAR_2 | VAR_1) &
     ~(VAR_4 | VAR_5 | VAR_0);
 switch (VAR_7) {
 case 130:
  break;
 case 131:
  VAR_9 |= VAR_4 | VAR_5 |
      VAR_0;
  break;
 case 129:
  VAR_9 |= VAR_4 | VAR_0;
  break;
 case 128:
  VAR_9 |= VAR_5 | VAR_0;
  break;
 }
 FUNC_1(VAR_8, VAR_3, VAR_9);

 return (0);
}
