
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_umac_scan_abort {int uid; } ;
struct iwm_softc {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int,struct iwm_umac_scan_abort*) ;

__attribute__((used)) static int
FUNC_4(struct iwm_softc *VAR_3)
{
 struct iwm_umac_scan_abort VAR_4 = {};
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_4.uid = FUNC_1(VAR_5);

 FUNC_0(VAR_3, VAR_1, "Sending scan abort, uid %u\n", VAR_5);

 VAR_6 = FUNC_3(VAR_3,
       FUNC_2(VAR_2,
           VAR_0, 0),
       0, sizeof(VAR_4), &VAR_4);

 return VAR_6;
}
