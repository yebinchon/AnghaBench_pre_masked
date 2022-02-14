
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {scalar_t__ req_line_speed; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static elink_status_t FUNC_2(struct elink_phy *VAR_8,
          struct elink_params *VAR_9)
{
 struct bxe_softc *VAR_10 = VAR_9->sc;
 uint16_t VAR_11, VAR_12;
 if (VAR_8->req_line_speed != VAR_0)
  return VAR_1;
 FUNC_0(VAR_10, VAR_8,
     VAR_5,
     VAR_6,
     &VAR_12);
 FUNC_0(VAR_10, VAR_8,
     VAR_5,
     VAR_6,
     &VAR_12);
 if (VAR_12 & VAR_7) {
  FUNC_1(VAR_10, "1G parallel detect link on port %d\n",
    VAR_9->port);
  return 1;
 }

 FUNC_0(VAR_10, VAR_8,
     VAR_4,
     VAR_2,
     &VAR_11);

 if (VAR_11 & VAR_3) {
  FUNC_1(VAR_10, "10G parallel detect link on port %d\n",
    VAR_9->port);
  return 1;
 }
 return VAR_1;
}
