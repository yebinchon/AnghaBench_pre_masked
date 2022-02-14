
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {int dummy; } ;
struct pvscsi_cmd_desc_setup_req_call {int enable; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pvscsi_cmd_desc_setup_req_call*,int) ;
 int FUNC_1 (struct pvscsi_softc*,char*,int ) ;
 int FUNC_2 (struct pvscsi_softc*,int ) ;
 int FUNC_3 (struct pvscsi_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct pvscsi_softc*,int ,struct pvscsi_cmd_desc_setup_req_call*,int) ;

__attribute__((used)) static int FUNC_5(struct pvscsi_softc *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 struct pvscsi_cmd_desc_setup_req_call VAR_7;

 if (!FUNC_1(VAR_4, "pvscsi_use_req_call_threshold",
     VAR_3)) {
  return (0);
 }

 FUNC_3(VAR_4, VAR_1,
     VAR_0);
 VAR_6 = FUNC_2(VAR_4, VAR_2);

 if (VAR_6 != -1) {
  FUNC_0(&VAR_7, sizeof(VAR_7));
  VAR_7.enable = VAR_5;
  FUNC_4(VAR_4, VAR_0,
      &VAR_7, sizeof(VAR_7));
  VAR_6 = FUNC_2(VAR_4, VAR_2);

  return (VAR_6 != 0);
 } else {
  return (0);
 }
}
