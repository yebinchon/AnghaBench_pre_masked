
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct kmi_softc {int dummy; } ;
struct TYPE_4__ {int kb_count; struct kmi_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct kmi_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(keyboard_t *VAR_4, int VAR_5)
{
 struct kmi_softc *VAR_6 = VAR_4->kb_data;
 uint32_t VAR_7, VAR_8;

 FUNC_1();

 if (!FUNC_0(VAR_4))
  return (VAR_3);

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7 & VAR_2) {
  VAR_8 = FUNC_2(VAR_6, VAR_0);
  return (VAR_8);
 }

 ++VAR_4->kb_count;
 return (VAR_3);
}
