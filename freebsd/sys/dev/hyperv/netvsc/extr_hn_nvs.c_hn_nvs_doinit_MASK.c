
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmbus_xact {int dummy; } ;
struct hn_softc {int hn_ifp; int hn_xact; } ;
struct hn_nvs_init_resp {scalar_t__ nvs_status; } ;
struct hn_nvs_init {scalar_t__ nvs_ver_max; scalar_t__ nvs_ver_min; int nvs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct hn_nvs_init_resp* FUNC_0 (struct hn_softc*,struct vmbus_xact*,struct hn_nvs_init*,int,size_t*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct vmbus_xact* FUNC_2 (int ,int) ;
 int FUNC_3 (struct vmbus_xact*) ;
 struct hn_nvs_init* FUNC_4 (struct vmbus_xact*) ;

__attribute__((used)) static int
FUNC_5(struct hn_softc *VAR_7, uint32_t VAR_8)
{
 struct vmbus_xact *VAR_9;
 struct hn_nvs_init *VAR_10;
 const struct hn_nvs_init_resp *VAR_11;
 size_t VAR_12;
 uint32_t VAR_13;

 VAR_9 = FUNC_2(VAR_7->hn_xact, sizeof(*VAR_10));
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_7->hn_ifp, "no xact for nvs init\n");
  return (VAR_2);
 }
 VAR_10 = FUNC_4(VAR_9);
 VAR_10->nvs_type = VAR_4;
 VAR_10->nvs_ver_min = VAR_8;
 VAR_10->nvs_ver_max = VAR_8;

 VAR_12 = sizeof(*VAR_11);
 VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10, sizeof(*VAR_10), &VAR_12,
     VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_7->hn_ifp, "exec init failed\n");
  FUNC_3(VAR_9);
  return (VAR_1);
 }

 VAR_13 = VAR_11->nvs_status;
 FUNC_3(VAR_9);

 if (VAR_13 != VAR_3) {
  if (VAR_6) {





   FUNC_1(VAR_7->hn_ifp, "nvs init failed for ver 0x%x\n",
       VAR_8);
  }
  return (VAR_0);
 }
 return (0);
}
