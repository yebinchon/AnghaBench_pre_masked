
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int modifiers; } ;
struct ukbd_softc {int* sc_buffered_char; TYPE_1__ sc_ndata; } ;
struct TYPE_6__ {int kb_count; struct ukbd_softc* kb_data; } ;
typedef TYPE_2__ keyboard_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ukbd_softc*,int) ;
 int FUNC_4 (struct ukbd_softc*,int,int ,int) ;

__attribute__((used)) static int
FUNC_5(keyboard_t *VAR_5, int VAR_6)
{
 struct ukbd_softc *VAR_7 = VAR_5->kb_data;
 int32_t VAR_8;






 FUNC_1();

 if (!FUNC_0(VAR_5))
  return (-1);
 VAR_8 = FUNC_3(VAR_7, (VAR_6 == VAR_0) ? 0 : 1);
 if (!FUNC_0(VAR_5) || (VAR_8 == -1))
  return (-1);

 ++(VAR_5->kb_count);
 return (VAR_8);

}
