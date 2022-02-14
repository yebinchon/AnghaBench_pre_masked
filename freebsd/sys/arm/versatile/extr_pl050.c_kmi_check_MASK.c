
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct kmi_softc {int dummy; } ;
struct TYPE_4__ {struct kmi_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kmi_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_2)
{
 struct kmi_softc *VAR_3 = VAR_2->kb_data;
 uint32_t VAR_4;

 FUNC_1();

 if (!FUNC_0(VAR_2))
  return (0);

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 return (VAR_4 & VAR_1);
}
