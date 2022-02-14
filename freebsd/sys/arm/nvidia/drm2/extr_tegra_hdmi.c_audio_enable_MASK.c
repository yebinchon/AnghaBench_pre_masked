
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_softc {int hdmi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi_softc*,int ) ;
 int FUNC_1 (struct hdmi_softc*,int ,int ) ;
 int FUNC_2 (struct hdmi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct hdmi_softc *VAR_4) {
 uint32_t VAR_5;

 if (!VAR_4->hdmi_mode)
  FUNC_2(VAR_4);


 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 |= VAR_0;
 FUNC_1(VAR_4, VAR_2, VAR_5);


 VAR_5 = FUNC_0(VAR_4, VAR_3);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_4, VAR_3, VAR_5);
}
