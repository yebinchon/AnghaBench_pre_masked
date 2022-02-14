
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2_packet_data {void (* rx_callback ) (void*,int const*,int const*,size_t) ;int l2_hdr; int fd; void* rx_callback_ctx; int ifname; } ;


 int FUNC_0 (int,int ,struct l2_packet_data*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;
 struct l2_packet_data* FUNC_2 (int) ;

struct l2_packet_data * FUNC_3(
 const char *VAR_1, const u8 *VAR_2, unsigned short VAR_3,
 void (*VAR_4)(void *VAR_5, const u8 *VAR_6,
       const u8 *VAR_7, size_t VAR_8),
 void *VAR_9, int VAR_10)
{
 struct l2_packet_data *VAR_11;

 VAR_11 = FUNC_2(sizeof(struct l2_packet_data));
 if (VAR_11 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_11->ifname, VAR_1, sizeof(VAR_11->ifname));
 VAR_11->rx_callback = VAR_4;
 VAR_11->rx_callback_ctx = VAR_9;
 VAR_11->l2_hdr = VAR_10;




 VAR_11->fd = -1;
 if (VAR_11->fd >= 0)
  FUNC_0(VAR_11->fd, VAR_0, VAR_11, ((void*)0));

 return VAR_11;
}
