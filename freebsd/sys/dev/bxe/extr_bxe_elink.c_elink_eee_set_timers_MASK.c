
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_vars {int eee_status; } ;
struct elink_params {int port; int eee_mode; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct elink_params*) ;
 scalar_t__ FUNC_3 (int,int*) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_params *VAR_8,
       struct elink_vars *VAR_9)
{
 uint32_t VAR_10 = 0, VAR_11;
 struct bxe_softc *VAR_12 = VAR_8->sc;

 VAR_10 = FUNC_2(VAR_8);

 if (VAR_10) {
  FUNC_1(VAR_12, VAR_5 + (VAR_8->port << 2),
         VAR_10);
 } else if ((VAR_8->eee_mode & VAR_0) &&
     (VAR_8->eee_mode & VAR_2) &&
     (VAR_8->eee_mode & VAR_1)) {
  FUNC_0(VAR_12, "Error: Tx LPI is enabled with timer 0\n");
  return VAR_3;
 }

 VAR_9->eee_status &= ~(VAR_6 | VAR_7);
 if (VAR_8->eee_mode & VAR_1) {

  VAR_10 >>= 4;
  VAR_9->eee_status |= (VAR_10 & VAR_6) |
        VAR_7;
 } else {
  if (FUNC_3(VAR_10, &VAR_11))
   return VAR_3;
  VAR_9->eee_status |= VAR_11;
 }

 return VAR_4;
}
