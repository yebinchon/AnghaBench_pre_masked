
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct l2_packet_data {void (* rx_callback ) (void*,int const*,int const*,size_t) ;int l2_hdr; int * rx_avail; int own_addr; void* rx_callback_ctx; int ifname; } ;
struct TYPE_2__ {unsigned short first_proto; int refcount; int * stop_request; int * rx_thread; int * rx_processed; int * ready_for_read; struct l2_packet_data** l2; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int ,int ,struct l2_packet_data*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (int *,int,int ,struct l2_packet_data*,int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_7 (unsigned short) ;
 int FUNC_8 (struct l2_packet_data*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct l2_packet_data*) ;
 int FUNC_10 (int ,int const*,int ) ;
 int FUNC_11 (int ,char const*,int) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (int ,char*,...) ;

struct l2_packet_data * FUNC_14(
 const char *VAR_9, const u8 *VAR_10, unsigned short VAR_11,
 void (*VAR_12)(void *VAR_13, const u8 *VAR_14,
       const u8 *VAR_15, size_t VAR_16),
 void *VAR_17, int VAR_18)
{
 struct l2_packet_data *VAR_19;

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_12(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0))
   return ((void*)0);
  VAR_6->first_proto = VAR_11;
 }
 if (VAR_6->refcount >= 2) {
  FUNC_13(VAR_3, "L2(NDISUIO): Not more than two "
      "simultaneous connections allowed");
  return ((void*)0);
 }
 VAR_6->refcount++;

 VAR_19 = FUNC_12(sizeof(struct l2_packet_data));
 if (VAR_19 == ((void*)0))
  return ((void*)0);
 VAR_6->l2[VAR_6->refcount - 1] = VAR_19;

 FUNC_11(VAR_19->ifname, VAR_9, sizeof(VAR_19->ifname));
 VAR_19->rx_callback = VAR_12;
 VAR_19->rx_callback_ctx = VAR_17;
 VAR_19->l2_hdr = VAR_18;

 if (VAR_10)
  FUNC_10(VAR_19->own_addr, VAR_10, VAR_0);

 if (FUNC_7(VAR_11) < 0) {
  FUNC_9(VAR_19);
  return ((void*)0);
 }

 if (VAR_6->refcount > 1) {
  FUNC_13(VAR_2, "L2(NDISUIO): Temporarily setting "
      "filtering ethertype to %04x", VAR_11);
  if (VAR_6->l2[0])
   VAR_19->rx_avail = VAR_6->l2[0]->rx_avail;
  return VAR_19;
 }

 VAR_19->rx_avail = FUNC_1(((void*)0), VAR_5, VAR_1, ((void*)0));
 if (VAR_19->rx_avail == ((void*)0)) {
  FUNC_9(VAR_19);
  return ((void*)0);
 }

 FUNC_5(VAR_19->rx_avail, sizeof(VAR_19->rx_avail),
        VAR_7, VAR_19, ((void*)0));
 FUNC_8(VAR_19, 0);


 return VAR_19;
}
