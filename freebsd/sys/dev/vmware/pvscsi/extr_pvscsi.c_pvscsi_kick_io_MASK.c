
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pvscsi_softc {int use_req_call_threshold; struct pvscsi_rings_state* rings_state; } ;
struct pvscsi_rings_state {scalar_t__ req_prod_idx; scalar_t__ req_cons_idx; scalar_t__ req_call_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct pvscsi_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct pvscsi_softc *VAR_10, uint8_t VAR_11)
{
 struct pvscsi_rings_state *VAR_12;

 if (VAR_11 == VAR_5 || VAR_11 == VAR_2 ||
     VAR_11 == VAR_3 || VAR_11 == VAR_4 ||
     VAR_11 == VAR_9 || VAR_11 == VAR_6 ||
     VAR_11 == VAR_7 || VAR_11 == VAR_8) {
  VAR_12 = VAR_10->rings_state;

  if (!VAR_10->use_req_call_threshold ||
      (VAR_12->req_prod_idx - VAR_12->req_cons_idx) >=
       VAR_12->req_call_threshold) {
   FUNC_0(VAR_10, VAR_1, 0);
  }
 } else {
  FUNC_0(VAR_10, VAR_0, 0);
 }
}
