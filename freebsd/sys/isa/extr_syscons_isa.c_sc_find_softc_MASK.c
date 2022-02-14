
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct video_adapter {int dummy; } ;
struct keyboard {int dummy; } ;
struct TYPE_5__ {struct keyboard* kbd; struct video_adapter* adp; } ;
typedef TYPE_1__ sc_softc_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

sc_softc_t
*FUNC_3(struct video_adapter *VAR_2, struct keyboard *VAR_3)
{
 sc_softc_t *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = &VAR_0;
 if ((VAR_2 == ((void*)0) || VAR_2 == VAR_4->adp) &&
     (VAR_3 == ((void*)0) || VAR_3 == VAR_4->kbd))
  return (VAR_4);
 VAR_6 = FUNC_1(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
         VAR_4 = FUNC_2(FUNC_0(VAR_1, VAR_5));
  if (VAR_4 == ((void*)0))
   continue;
  if ((VAR_2 == ((void*)0) || VAR_2 == VAR_4->adp) &&
      (VAR_3 == ((void*)0) || VAR_3 == VAR_4->kbd))
   return (VAR_4);
 }
 return (((void*)0));
}
