
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_softc {int db_link_mask; int fake_db; int force_db; int db_mask; int db_valid_mask; int device; int last_ts; } ;


 int FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (struct ntb_softc*) ;
 scalar_t__ FUNC_2 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct ntb_softc*) ;
 int FUNC_4 (struct ntb_softc*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(struct ntb_softc *VAR_2, uint32_t VAR_3)
{
 uint64_t VAR_4;

 VAR_2->last_ts = VAR_1;
 VAR_4 = FUNC_4(VAR_2, VAR_3);

 if ((VAR_4 & VAR_2->db_link_mask) != 0) {
  if (FUNC_3(VAR_2))
   FUNC_6(VAR_2->device);
 }

 if (FUNC_2(VAR_2, VAR_0) &&
     (VAR_4 & VAR_2->db_link_mask) == 0) {
  FUNC_0(VAR_2);






  VAR_4 &= ~VAR_2->fake_db | VAR_2->force_db;
  VAR_2->force_db &= ~VAR_4;


  VAR_2->fake_db |= VAR_4;


  VAR_4 &= ~VAR_2->db_mask;

  FUNC_1(VAR_2);
 }

 if ((VAR_4 & VAR_2->db_valid_mask) != 0)
  FUNC_5(VAR_2->device, VAR_3);
}
