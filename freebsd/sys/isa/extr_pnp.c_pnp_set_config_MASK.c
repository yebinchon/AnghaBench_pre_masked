
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pnp_set_config_arg {int csn; int ldn; } ;
struct isa_config {int ic_nmem; int ic_nport; int ic_nirq; int ic_ndrq; scalar_t__* ic_irqmask; scalar_t__* ic_drqmask; TYPE_2__* ic_port; TYPE_1__* ic_mem; } ;
struct TYPE_4__ {scalar_t__ ir_size; int ir_start; } ;
struct TYPE_3__ {scalar_t__ ir_size; int ir_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (char*,int,int) ;

__attribute__((used)) static void
FUNC_14(void *VAR_9, struct isa_config *VAR_10, int VAR_11)
{
 int VAR_12 = ((struct pnp_set_config_arg *) VAR_9)->csn;
 int VAR_13 = ((struct pnp_set_config_arg *) VAR_9)->ldn;
 int VAR_14;





 FUNC_11();
 FUNC_12(VAR_8, VAR_12);




 FUNC_12(VAR_7, VAR_13);




 if (VAR_10->ic_nmem > VAR_2) {
  FUNC_13("too many ISA memory ranges (%d > %d)\n",
      VAR_10->ic_nmem, VAR_2);
  VAR_10->ic_nmem = VAR_2;
 }
 if (VAR_10->ic_nport > VAR_3) {
  FUNC_13("too many ISA I/O ranges (%d > %d)\n", VAR_10->ic_nport,
      VAR_3);
  VAR_10->ic_nport = VAR_3;
 }
 if (VAR_10->ic_nirq > VAR_1) {
  FUNC_13("too many ISA IRQs (%d > %d)\n", VAR_10->ic_nirq,
      VAR_1);
  VAR_10->ic_nirq = VAR_1;
 }
 if (VAR_10->ic_ndrq > VAR_0) {
  FUNC_13("too many ISA DRQs (%d > %d)\n", VAR_10->ic_ndrq,
      VAR_0);
  VAR_10->ic_ndrq = VAR_0;
 }




 for (VAR_14 = 0; VAR_14 < VAR_10->ic_nmem; VAR_14++) {
  uint32_t VAR_15;
  uint32_t VAR_16;


  if (VAR_10->ic_mem[VAR_14].ir_size == 0) {
   FUNC_12(FUNC_5(VAR_14), 0);
   FUNC_12(FUNC_6(VAR_14), 0);
   FUNC_12(FUNC_7(VAR_14), 0);
   FUNC_12(FUNC_8(VAR_14), 0);
  } else {
   VAR_15 = VAR_10->ic_mem[VAR_14].ir_start;
   VAR_16 = VAR_10->ic_mem[VAR_14].ir_size;
   if (VAR_15 & 0xff)
    FUNC_10("pnp_set_config: bogus memory assignment");
   FUNC_12(FUNC_5(VAR_14), (VAR_15 >> 16) & 0xff);
   FUNC_12(FUNC_6(VAR_14), (VAR_15 >> 8) & 0xff);
   FUNC_12(FUNC_7(VAR_14), (VAR_16 >> 16) & 0xff);
   FUNC_12(FUNC_8(VAR_14), (VAR_16 >> 8) & 0xff);
  }
 }
 for (; VAR_14 < VAR_2; VAR_14++) {
  FUNC_12(FUNC_5(VAR_14), 0);
  FUNC_12(FUNC_6(VAR_14), 0);
  FUNC_12(FUNC_7(VAR_14), 0);
  FUNC_12(FUNC_8(VAR_14), 0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->ic_nport; VAR_14++) {
  uint32_t VAR_17;

  if (VAR_10->ic_port[VAR_14].ir_size == 0) {
   FUNC_12(FUNC_1(VAR_14), 0);
   FUNC_12(FUNC_2(VAR_14), 0);
  } else {
   VAR_17 = VAR_10->ic_port[VAR_14].ir_start;
   FUNC_12(FUNC_1(VAR_14), (VAR_17 >> 8) & 0xff);
   FUNC_12(FUNC_2(VAR_14), (VAR_17 >> 0) & 0xff);
  }
 }
 for (; VAR_14 < VAR_3; VAR_14++) {
  FUNC_12(FUNC_1(VAR_14), 0);
  FUNC_12(FUNC_2(VAR_14), 0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->ic_nirq; VAR_14++) {
  int VAR_18;


  if (VAR_10->ic_irqmask[VAR_14] == 0) {
   FUNC_12(FUNC_3(VAR_14), 0);
   FUNC_12(FUNC_4(VAR_14), 2);
  } else {
   VAR_18 = FUNC_9(VAR_10->ic_irqmask[VAR_14]) - 1;
   FUNC_12(FUNC_3(VAR_14), VAR_18);
   FUNC_12(FUNC_4(VAR_14), 2);
  }
 }
 for (; VAR_14 < VAR_1; VAR_14++) {




  FUNC_12(FUNC_3(VAR_14), 0);
  FUNC_12(FUNC_4(VAR_14), 2);
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->ic_ndrq; VAR_14++) {
  int VAR_19;

  if (VAR_10->ic_drqmask[VAR_14] == 0) {
   FUNC_12(FUNC_0(VAR_14), 4);
  } else {
   VAR_19 = FUNC_9(VAR_10->ic_drqmask[VAR_14]) - 1;
   FUNC_12(FUNC_0(VAR_14), VAR_19);
  }
 }
 for (; VAR_14 < VAR_0; VAR_14++) {




  FUNC_12(FUNC_0(VAR_14), 4);
 }

 FUNC_12(VAR_4, VAR_11 ? 1 : 0);




 FUNC_12(VAR_5, VAR_6);
}
