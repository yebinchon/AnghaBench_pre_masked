
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rtwn_softc {TYPE_1__** vaps; } ;
struct TYPE_2__ {int curr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_2, uint8_t VAR_3, int VAR_4)
{

 FUNC_0(VAR_2, VAR_0, VAR_1 << VAR_4 * 2, VAR_3 << VAR_4 * 2);
 if (VAR_2->vaps[VAR_4] != ((void*)0))
  VAR_2->vaps[VAR_4]->curr_mode = VAR_3;
}
