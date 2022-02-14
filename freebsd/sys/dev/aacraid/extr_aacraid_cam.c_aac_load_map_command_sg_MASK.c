
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int flags; int aac_buffer_dmat; } ;
struct aac_command {int cm_datalen; int cm_data; int cm_datamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct aac_command*,int ) ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_5, struct aac_command *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_5, VAR_2, "");
 VAR_7 = FUNC_0(VAR_5->aac_buffer_dmat,
    VAR_6->cm_datamap, VAR_6->cm_data, VAR_6->cm_datalen,
    VAR_4, VAR_6, 0);
 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_5, VAR_3, "freezing queue\n");
  VAR_5->flags |= VAR_0;
  VAR_7 = 0;
 } else if (VAR_7 != 0) {
  FUNC_2("aac_load_map_command_sg: unexpected error %d from "
        "busdma", VAR_7);
 }
 return(VAR_7);
}
