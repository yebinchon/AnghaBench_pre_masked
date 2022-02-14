
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {scalar_t__ mlx_lastevent; scalar_t__ mlx_currevent; int mlx_flags; int mlx_dev; } ;
struct mlx_eventlog_entry {int el_type; int el_sensekey; int el_asc; size_t el_asq; int el_csi; int el_information; int el_target; int el_channel; } ;
struct mlx_command {scalar_t__ mc_status; scalar_t__ mc_data; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;

 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct mlx_command*) ;
 int FUNC_5 (struct mlx_softc*) ;
 int FUNC_6 (struct mlx_command*) ;
 char** VAR_2 ;
 size_t FUNC_7 (char**) ;

__attribute__((used)) static void
FUNC_8(struct mlx_command *VAR_3)
{
    struct mlx_softc *VAR_4 = VAR_3->mc_sc;
    struct mlx_eventlog_entry *VAR_5 = (struct mlx_eventlog_entry *)VAR_3->mc_data;
    char *VAR_6;

    FUNC_1(1);
    FUNC_0(VAR_4);

    VAR_4->mlx_lastevent++;
    if (VAR_3->mc_status == 0) {


 switch(VAR_5->el_type) {




 case 128:

     if ((VAR_5->el_sensekey == 9) &&
  (VAR_5->el_asc == 0x80)) {
  if (VAR_5->el_asq < FUNC_7(VAR_2)) {
      VAR_6 = VAR_2[VAR_5->el_asq];
  } else {
      VAR_6 = "for unknown reason";
  }
  FUNC_2(VAR_4->mlx_dev, "physical drive %d:%d killed %s\n",
         VAR_5->el_channel, VAR_5->el_target, VAR_6);
     }

     if ((VAR_5->el_sensekey == 6) && (VAR_5->el_asc == 0x29)) {
  FUNC_2(VAR_4->mlx_dev, "physical drive %d:%d reset\n",
         VAR_5->el_channel, VAR_5->el_target);
     }

     if (!((VAR_5->el_sensekey == 0) ||
    ((VAR_5->el_sensekey == 2) &&
     (VAR_5->el_asc == 0x04) &&
     ((VAR_5->el_asq == 0x01) ||
      (VAR_5->el_asq == 0x02))))) {
  FUNC_2(VAR_4->mlx_dev, "physical drive %d:%d error log: sense = %d asc = %x asq = %x\n",
         VAR_5->el_channel, VAR_5->el_target, VAR_5->el_sensekey, VAR_5->el_asc, VAR_5->el_asq);
  FUNC_2(VAR_4->mlx_dev, "  info %4D csi %4D\n", VAR_5->el_information, ":", VAR_5->el_csi, ":");
     }
     break;

 default:
     FUNC_2(VAR_4->mlx_dev, "unknown log message type 0x%x\n", VAR_5->el_type);
     break;
 }
    } else {
 FUNC_2(VAR_4->mlx_dev, "error reading message log - %s\n", FUNC_4(VAR_3));

 VAR_4->mlx_lastevent = VAR_4->mlx_currevent;
    }


    FUNC_3(VAR_3->mc_data, VAR_1);
    FUNC_6(VAR_3);


    if (VAR_4->mlx_lastevent != VAR_4->mlx_currevent) {
 FUNC_5(VAR_4);
    } else {

 VAR_4->mlx_flags &= ~VAR_0;
    }
}
