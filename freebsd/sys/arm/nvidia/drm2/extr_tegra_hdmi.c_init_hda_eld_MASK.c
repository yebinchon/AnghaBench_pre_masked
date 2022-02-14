
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* eld; } ;
struct TYPE_4__ {TYPE_1__ connector; } ;
struct hdmi_softc {TYPE_2__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdmi_softc*,int ,int) ;
 size_t FUNC_1 (int*) ;

__attribute__((used)) static void
FUNC_2(struct hdmi_softc *VAR_5)
{
 size_t VAR_6;
 int VAR_7 ;
 uint32_t VAR_8;

 VAR_6 = FUNC_1(VAR_5->output.connector.eld);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = VAR_7 << 8;
  if (VAR_7 < VAR_6)
   VAR_8 |= VAR_5->output.connector.eld[VAR_7];
  FUNC_0(VAR_5, VAR_1, VAR_8);
 }
 FUNC_0(VAR_5,VAR_2,
     VAR_4 | VAR_3);
}
