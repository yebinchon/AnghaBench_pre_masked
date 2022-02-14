
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sm_games; } ;
struct TYPE_8__ {int sbmixnum; scalar_t__ model; int * levels; TYPE_1__ sbmo; } ;
typedef TYPE_2__ sb_devc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(sb_devc * VAR_5)
{
 char VAR_6[32];
 int VAR_7;

 FUNC_4(VAR_6, "SB_%d", VAR_5->sbmixnum);

 if (VAR_5->sbmo.sm_games)
  VAR_5->levels = FUNC_1(VAR_6, VAR_4, 1);
 else
  VAR_5->levels = FUNC_1(VAR_6, VAR_3, 1);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_2(VAR_5, VAR_7, VAR_5->levels[VAR_7]);

 if (VAR_5->model != VAR_0 || !FUNC_0 (VAR_5)) {
  FUNC_3(VAR_5, VAR_1);
 };
}
