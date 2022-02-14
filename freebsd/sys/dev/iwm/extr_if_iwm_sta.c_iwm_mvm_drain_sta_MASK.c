
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_vap {int color; int id; } ;
struct iwm_softc {int sc_dev; } ;
struct iwm_mvm_add_sta_cmd {void* station_flags_msk; void* station_flags; int add_modify; int sta_id; void* mac_id_n_color; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*,int ,int ,struct iwm_mvm_add_sta_cmd*,int*) ;

int
FUNC_6(struct iwm_softc *VAR_7, struct iwm_vap *VAR_8, boolean_t VAR_9)
{
 struct iwm_mvm_add_sta_cmd VAR_10 = {};
 int VAR_11;
 uint32_t VAR_12;

 VAR_10.mac_id_n_color =
     FUNC_3(FUNC_1(VAR_8->id, VAR_8->color));
 VAR_10.sta_id = VAR_4;
 VAR_10.add_modify = VAR_6;
 VAR_10.station_flags = VAR_9 ? FUNC_3(VAR_5) : 0;
 VAR_10.station_flags_msk = FUNC_3(VAR_5);

 VAR_12 = 128;
 VAR_11 = FUNC_5(VAR_7, VAR_1,
       FUNC_4(VAR_7),
       &VAR_10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 switch (VAR_12 & VAR_2) {
 case 128:
  FUNC_0(VAR_7, VAR_3,
      "Frames for staid %d will drained in fw\n", VAR_4);
  break;
 default:
  VAR_11 = VAR_0;
  FUNC_2(VAR_7->sc_dev,
      "Couldn't drain frames for staid %d\n", VAR_4);
  break;
 }

 return VAR_11;
}
