
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int font_size; TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_5__ {int adp; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0(VAR_0);
 if (VAR_1 < 0 || VAR_1 >= VAR_0->font_size)
  return;

 FUNC_1(VAR_0->sc->adp, VAR_1, VAR_2,
     VAR_0->font_size, VAR_3);
}
