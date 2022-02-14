
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2_packet_data {char* ifname; void (* rx_callback ) (void*,int const*,int const*,size_t) ;int l2_hdr; int own_addr; void* rx_callback_ctx; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (struct l2_packet_data*,unsigned short) ;
 int FUNC_3 (struct l2_packet_data*) ;
 int FUNC_4 (char*,char const*,int) ;
 struct l2_packet_data* FUNC_5 (int) ;
 int VAR_0 ;

struct l2_packet_data * FUNC_6(
 const char *VAR_1, const u8 *VAR_2, unsigned short VAR_3,
 void (*VAR_4)(void *VAR_5, const u8 *VAR_6,
       const u8 *VAR_7, size_t VAR_8),
 void *VAR_9, int VAR_10)
{
 struct l2_packet_data *VAR_11;

 VAR_11 = FUNC_5(sizeof(struct l2_packet_data));
 if (VAR_11 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_11->ifname, VAR_1, sizeof(VAR_11->ifname));
 VAR_11->rx_callback = VAR_4;
 VAR_11->rx_callback_ctx = VAR_9;
 VAR_11->l2_hdr = VAR_10;

 if (FUNC_0(VAR_11->ifname, VAR_11->own_addr) < 0) {
  FUNC_1(VAR_0, "Failed to get link-level address for "
   "interface '%s'.\n", VAR_11->ifname);
  FUNC_3(VAR_11);
  return ((void*)0);
 }

 if (FUNC_2(VAR_11, VAR_3)) {
  FUNC_3(VAR_11);
  return ((void*)0);
 }

 return VAR_11;
}
