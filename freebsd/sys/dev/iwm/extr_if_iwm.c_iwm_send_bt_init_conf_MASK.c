
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_bt_coex_cmd {void* enabled_modules; void* mode; } ;
typedef int bt_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct iwm_softc*,int ,int ,int,struct iwm_bt_coex_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_3)
{
 struct iwm_bt_coex_cmd VAR_4;

 VAR_4.mode = FUNC_0(VAR_1);
 VAR_4.enabled_modules = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, VAR_2, 0, sizeof(VAR_4),
     &VAR_4);
}
