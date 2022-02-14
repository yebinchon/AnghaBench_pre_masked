
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_2__ {int an_dma_vaddr; int an_dma_paddr; } ;
struct an_softc {int an_ifp; TYPE_1__ an_rid_buffer; int mpi350; } ;
struct an_reply {int an_cmd; int an_status; int an_resp2; int an_resp1; int an_resp0; int an_parm0; } ;
struct an_ltv_gen {int an_len; int an_type; int an_val; } ;
struct an_command {int an_cmd; int an_status; int an_resp2; int an_resp1; int an_resp0; int an_parm0; } ;
struct an_card_rid_desc {int an_valid; int an_len; int an_phys; int an_rid; } ;
typedef int reply ;
typedef int cmd ;
typedef int an_rid_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_9 ;
 int FUNC_2 (struct an_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct an_softc*,int ) ;
 int FUNC_4 (struct an_softc*,int ,int ) ;
 int FUNC_5 (struct an_softc*,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct an_softc*,int,int ) ;
 int FUNC_8 (struct an_softc*,struct an_reply*,struct an_reply*) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (struct an_softc*,struct an_ltv_gen*,char*) ;
 scalar_t__ FUNC_10 (struct an_softc*,int ,int ,int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct an_reply*,int) ;
 int FUNC_13 (int ,char*,int ,int,int ,int ,int ,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct an_softc *VAR_12, struct an_ltv_gen *VAR_13)
{
 struct an_card_rid_desc VAR_14;
 struct an_command VAR_15;
 struct an_reply VAR_16;
 u_int16_t *VAR_17;
 u_int8_t *VAR_18;
 int VAR_19, VAR_20;

 FUNC_1(VAR_12);
 if (VAR_11)
  FUNC_9(VAR_12, VAR_13, "Write");

 if (!VAR_12->mpi350){
  if (FUNC_7(VAR_12, VAR_3|VAR_0, VAR_13->an_type))
   return(VAR_10);

  if (FUNC_10(VAR_12, VAR_13->an_type, 0, VAR_2))
   return(VAR_10);




  VAR_20 = VAR_13->an_len - 2;
  FUNC_5(VAR_12, VAR_7, VAR_20);

  VAR_20 -= 2;
  VAR_17 = &VAR_13->an_val;
  for (VAR_19 = VAR_20; VAR_19 > 1; VAR_19 -= 2)
   FUNC_5(VAR_12, VAR_7, *VAR_17++);
  if (VAR_19) {
   VAR_18 = (u_int8_t *)VAR_17;
   FUNC_4(VAR_12, VAR_6, *VAR_18);
  }

  if (FUNC_7(VAR_12, VAR_3|VAR_1, VAR_13->an_type))
   return(VAR_10);
 } else {


  for (VAR_19 = 0; VAR_19 != VAR_9; VAR_19++) {
   if (FUNC_3(VAR_12, FUNC_0(VAR_12->mpi350))
       & VAR_4) {
    FUNC_6(10);
   } else
    break;
  }
  if (VAR_19 == VAR_9) {
   FUNC_14("BUSY\n");
  }

  VAR_14.an_valid = 1;
  VAR_14.an_len = VAR_13->an_len - 2;
  VAR_14.an_rid = VAR_13->an_type;
  VAR_14.an_phys = VAR_12->an_rid_buffer.an_dma_paddr;

  FUNC_11(&VAR_13->an_type, VAR_12->an_rid_buffer.an_dma_vaddr,
        VAR_14.an_len);

  FUNC_12(&VAR_15,sizeof(VAR_15));
  FUNC_12(&VAR_16,sizeof(VAR_16));
  VAR_15.an_cmd = VAR_3|VAR_1;
  VAR_15.an_parm0 = VAR_13->an_type;

  for (VAR_19 = 0; VAR_19 < sizeof(VAR_14) / 4; VAR_19++)
   FUNC_2(VAR_12, VAR_8 + VAR_19 * 4,
       ((u_int32_t *)(void *)&VAR_14)[VAR_19]);

  FUNC_6(100000);

  if ((VAR_19 = FUNC_8(VAR_12, &VAR_15, &VAR_16))) {
   FUNC_13(VAR_12->an_ifp,
       "failed to write RID 1 %x %x %x %x %x, %d\n",
       VAR_13->an_type,
       VAR_16.an_status,
       VAR_16.an_resp0,
       VAR_16.an_resp1,
       VAR_16.an_resp2,
       VAR_19);
   return(VAR_10);
  }


  if (VAR_16.an_status & VAR_5) {
   FUNC_13(VAR_12->an_ifp,
       "failed to write RID 2 %x %x %x %x %x, %d\n",
       VAR_13->an_type,
       VAR_16.an_status,
       VAR_16.an_resp0,
       VAR_16.an_resp1,
       VAR_16.an_resp2,
       VAR_19);
   return(VAR_10);
  }
  FUNC_6(100000);
 }

 return(0);
}
