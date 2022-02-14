
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {struct an_reply* an_dma_vaddr; int an_dma_paddr; } ;
struct an_softc {TYPE_1__ an_rid_buffer; int mpi350; struct ifnet* an_ifp; } ;
struct an_reply {int an_cmd; int an_status; int an_resp2; int an_resp1; int an_resp0; int an_parm0; } ;
struct an_ltv_gen {int an_len; int an_val; int an_type; } ;
struct an_command {int an_cmd; int an_status; int an_resp2; int an_resp1; int an_resp0; int an_parm0; } ;
struct an_card_rid_desc {int an_valid; int an_len; int an_phys; scalar_t__ an_rid; } ;
typedef int reply ;
typedef int cmd ;
typedef int an_rid_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct an_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct an_softc*,scalar_t__,int ) ;
 int FUNC_2 (struct an_softc*,int ) ;
 void* FUNC_3 (struct an_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct an_softc*,int,int ) ;
 scalar_t__ FUNC_5 (struct an_softc*,struct an_reply*,struct an_reply*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct an_softc*,struct an_ltv_gen*,char*) ;
 scalar_t__ FUNC_7 (struct an_softc*,int ,int ,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct an_reply*,int) ;
 int FUNC_10 (struct ifnet*,char*,...) ;

__attribute__((used)) static int
FUNC_11(struct an_softc *VAR_10, struct an_ltv_gen *VAR_11)
{
 struct an_ltv_gen *VAR_12;
 struct an_card_rid_desc VAR_13;
 struct an_command VAR_14;
 struct an_reply VAR_15;
 struct ifnet *VAR_16;
 u_int16_t *VAR_17;
 u_int8_t *VAR_18;
 int VAR_19, VAR_20;

 FUNC_0(VAR_10);
 if (VAR_11->an_len < 4 || VAR_11->an_type == 0)
  return(VAR_7);

 VAR_16 = VAR_10->an_ifp;
 if (!VAR_10->mpi350){

  if (FUNC_4(VAR_10, VAR_2|VAR_0, VAR_11->an_type)) {
   FUNC_10(VAR_16, "RID access failed\n");
   return(VAR_8);
  }


  if (FUNC_7(VAR_10, VAR_11->an_type, 0, VAR_1)) {
   FUNC_10(VAR_16, "seek to record failed\n");
   return(VAR_8);
  }







  VAR_20 = FUNC_3(VAR_10, VAR_4);
  if (VAR_20 > (VAR_11->an_len - 2)) {
   FUNC_10(VAR_16, "record length mismatch -- expected %d, "
          "got %d for Rid %x\n",
          VAR_11->an_len - 2, VAR_20, VAR_11->an_type);
   VAR_20 = VAR_11->an_len - 2;
  } else {
   VAR_11->an_len = VAR_20 + 2;
  }


  VAR_20 -= 2;
  VAR_17 = &VAR_11->an_val;
  for (VAR_19 = VAR_20; VAR_19 > 1; VAR_19 -= 2)
   *VAR_17++ = FUNC_3(VAR_10, VAR_4);
  if (VAR_19) {
   VAR_18 = (u_int8_t *)VAR_17;
   *VAR_18 = FUNC_2(VAR_10, VAR_4);
  }
 } else {
  if (!VAR_10->an_rid_buffer.an_dma_vaddr)
   return(VAR_8);
  VAR_13.an_valid = 1;
  VAR_13.an_len = VAR_6;
  VAR_13.an_rid = 0;
  VAR_13.an_phys = VAR_10->an_rid_buffer.an_dma_paddr;
  FUNC_9(VAR_10->an_rid_buffer.an_dma_vaddr, VAR_6);

  FUNC_9(&VAR_14, sizeof(VAR_14));
  FUNC_9(&VAR_15, sizeof(VAR_15));
  VAR_14.an_cmd = VAR_2|VAR_0;
  VAR_14.an_parm0 = VAR_11->an_type;

  for (VAR_19 = 0; VAR_19 < sizeof(VAR_13) / 4; VAR_19++)
   FUNC_1(VAR_10, VAR_5 + VAR_19 * 4,
       ((u_int32_t *)(void *)&VAR_13)[VAR_19]);

  if (FUNC_5(VAR_10, &VAR_14, &VAR_15)
      || VAR_15.an_status & VAR_3) {
   FUNC_10(VAR_16, "failed to read RID %x %x %x %x %x, %d\n",
          VAR_11->an_type,
          VAR_15.an_status,
          VAR_15.an_resp0,
          VAR_15.an_resp1,
          VAR_15.an_resp2,
          VAR_19);
   return(VAR_8);
  }

  VAR_12 = (struct an_ltv_gen *)VAR_10->an_rid_buffer.an_dma_vaddr;
  if (VAR_12->an_len + 2 < VAR_13.an_len) {
   VAR_13.an_len = VAR_12->an_len;
  }

  VAR_20 = VAR_13.an_len;
  if (VAR_20 > (VAR_11->an_len - 2)) {
   FUNC_10(VAR_16, "record length mismatch -- expected %d, "
          "got %d for Rid %x\n",
          VAR_11->an_len - 2, VAR_20, VAR_11->an_type);
   VAR_20 = VAR_11->an_len - 2;
  } else {
   VAR_11->an_len = VAR_20 + 2;
  }
  FUNC_8(&VAR_12->an_type,
      &VAR_11->an_val,
      VAR_20);
 }

 if (VAR_9)
  FUNC_6(VAR_10, VAR_11, "Read");

 return(0);
}
