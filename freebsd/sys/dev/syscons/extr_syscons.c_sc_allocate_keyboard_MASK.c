
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int keyboard; } ;
typedef TYPE_1__ sc_softc_t ;
typedef int ki ;
struct TYPE_11__ {int kb_unit; int kb_name; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_12__ {int kb_unit; int kb_name; } ;
typedef TYPE_3__ keyboard_info_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*,int,void*,int ,TYPE_1__*) ;
 int FUNC_3 (char*,int,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(sc_softc_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 keyboard_t *VAR_6, *VAR_7;
 keyboard_info_t VAR_8;

 VAR_4 = FUNC_2("kbdmux", -1, (void *)&VAR_2->keyboard, VAR_1, VAR_2);
 if (VAR_4 != -1) {
  VAR_6 = FUNC_4(VAR_4);

  for (VAR_5 = FUNC_3("*", -1, 0);
       VAR_5 != -1;
       VAR_5 = FUNC_3("*", -1, VAR_5 + 1)) {
   VAR_7 = FUNC_4(VAR_5);

   if (VAR_5 == VAR_4 || FUNC_0(VAR_7))
    continue;

   FUNC_1(&VAR_8, sizeof(VAR_8));
   FUNC_6(VAR_8.kb_name, VAR_7->kb_name);
   VAR_8.kb_unit = VAR_7->kb_unit;

   (void)FUNC_5(VAR_6, VAR_0, (caddr_t) &VAR_8);
  }
 } else
  VAR_4 = FUNC_2("*", VAR_3, (void *)&VAR_2->keyboard, VAR_1, VAR_2);

 return (VAR_4);
}
