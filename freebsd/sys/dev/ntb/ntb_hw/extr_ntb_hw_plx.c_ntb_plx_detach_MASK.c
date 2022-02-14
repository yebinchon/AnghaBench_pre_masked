
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {int mw_count; int conf_res; int conf_rid; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {int mw_res; int mw_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct ntb_plx_softc *VAR_2 = FUNC_1(VAR_1);
 struct ntb_plx_mw_info *VAR_3;
 int VAR_4;


 FUNC_3(VAR_1);


 FUNC_2(VAR_1);


 for (VAR_4 = 0; VAR_4 < VAR_2->mw_count; VAR_4++) {
  VAR_3 = &VAR_2->mw_info[VAR_4];
  FUNC_0(VAR_1, VAR_0, VAR_3->mw_rid,
      VAR_3->mw_res);
 }
 FUNC_0(VAR_1, VAR_0, VAR_2->conf_rid, VAR_2->conf_res);
 return (0);
}
