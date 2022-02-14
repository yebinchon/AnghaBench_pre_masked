
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdmi_softc*,int ) ;
 int FUNC_1 (struct hdmi_softc*,int ,int) ;
 int FUNC_2 (struct hdmi_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct hdmi_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_2;


 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, VAR_4);


 if (VAR_4 & VAR_1)
  FUNC_2(VAR_3);
}
