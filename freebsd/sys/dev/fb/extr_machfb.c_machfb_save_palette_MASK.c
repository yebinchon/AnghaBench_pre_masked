
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int uint8_t ;
typedef void* u_char ;
struct machfb_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct machfb_softc*,int ) ;
 int FUNC_1 (struct machfb_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_4, u_char *VAR_5)
{
 struct machfb_softc *VAR_6;
 int VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10;

 VAR_6 = (struct machfb_softc *)VAR_4;

 VAR_9 = FUNC_0(VAR_6, VAR_2);
 VAR_10 = FUNC_0(VAR_6, VAR_3);
 VAR_8 = FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_1, 0xff);
 FUNC_1(VAR_6, VAR_2, 0x0);
 for (VAR_7 = 0; VAR_7 < 256 * 3; VAR_7++)
  VAR_5[VAR_7] = FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_1, VAR_8);
 FUNC_1(VAR_6, VAR_2, VAR_9);
 FUNC_1(VAR_6, VAR_3, VAR_10);

 return (0);
}
