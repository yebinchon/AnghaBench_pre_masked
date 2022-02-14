
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_softc {int dummy; } ;
struct hn_nvs_datapath {int nvs_active_path; int nvs_type; } ;
typedef int dp ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*,struct hn_nvs_datapath*,int) ;
 int FUNC_1 (struct hn_nvs_datapath*,int ,int) ;

void
FUNC_2(struct hn_softc *VAR_1, uint32_t VAR_2)
{
 struct hn_nvs_datapath VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.nvs_type = VAR_0;
 VAR_3.nvs_active_path = VAR_2;

 FUNC_0(VAR_1, &VAR_3, sizeof(VAR_3));
}
