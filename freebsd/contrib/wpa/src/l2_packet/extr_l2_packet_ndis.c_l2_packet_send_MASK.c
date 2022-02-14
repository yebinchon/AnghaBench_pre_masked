
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct l2_ethhdr {int h_proto; struct l2_ethhdr const* h_source; struct l2_ethhdr const* h_dest; } const l2_ethhdr ;
typedef struct l2_ethhdr u8 ;
typedef int u16 ;
struct l2_packet_data {struct l2_ethhdr const* own_addr; scalar_t__ l2_hdr; } ;
typedef int overlapped ;
typedef int OVERLAPPED ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct l2_ethhdr const*,size_t,scalar_t__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct l2_ethhdr const*) ;
 struct l2_ethhdr* FUNC_6 (size_t) ;
 int FUNC_7 (struct l2_ethhdr const*,struct l2_ethhdr const*,size_t) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ,char*,...) ;

int FUNC_10(struct l2_packet_data *VAR_4, const u8 *VAR_5, u16 VAR_6,
     const u8 *VAR_7, size_t VAR_8)
{
 BOOL VAR_9;
 DWORD VAR_10;
 struct l2_ethhdr *VAR_11;

 OVERLAPPED VAR_12;

 OVERLAPPED *VAR_13;

 if (VAR_4 == ((void*)0))
  return -1;




 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_13 = &VAR_12;


 if (VAR_4->l2_hdr) {
  VAR_9 = FUNC_2(FUNC_3(), VAR_7, VAR_8,
    &VAR_10, VAR_13);
 } else {
  size_t VAR_14 = sizeof(*VAR_11) + VAR_8;
  VAR_11 = FUNC_6(VAR_14);
  if (VAR_11 == ((void*)0))
   return -1;

  FUNC_7(VAR_11->h_dest, VAR_5, VAR_1);
  FUNC_7(VAR_11->h_source, VAR_4->own_addr, VAR_1);
  VAR_11->h_proto = FUNC_4(VAR_6);
  FUNC_7(VAR_11 + 1, VAR_7, VAR_8);
  VAR_9 = FUNC_2(FUNC_3(), VAR_11, VAR_14,
    &VAR_10, VAR_13);
  FUNC_5(VAR_11);
 }

 if (!VAR_9) {
  DWORD VAR_15 = FUNC_0();

  if (VAR_15 == VAR_0) {
   FUNC_9(VAR_2, "L2(NDISUIO): Wait for pending "
       "write to complete");
   VAR_9 = FUNC_1(
    FUNC_3(), &VAR_12,
    &VAR_10, VAR_3);
   if (!VAR_9) {
    FUNC_9(VAR_2, "L2(NDISUIO): "
        "GetOverlappedResult failed: %d",
        (int) FUNC_0());
    return -1;
   }
   return 0;
  }

  FUNC_9(VAR_2, "L2(NDISUIO): WriteFile failed: %d",
      (int) FUNC_0());
  return -1;
 }

 return 0;
}
