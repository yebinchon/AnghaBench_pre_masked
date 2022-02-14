
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2_packet_data {int rx_written; int rx_callback_ctx; int (* rx_callback ) (int ,int const*,int const*,size_t) ;scalar_t__ l2_hdr; scalar_t__ rx_buf; } ;
struct l2_ethhdr {int * h_source; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2_packet_data*,int) ;
 int FUNC_1 (int ,int const*,int const*,size_t) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct l2_packet_data *VAR_1)
{
 const u8 *VAR_2, *VAR_3;
 size_t VAR_4;
 struct l2_ethhdr *VAR_5 = (struct l2_ethhdr *) VAR_1->rx_buf;

 FUNC_2(VAR_0, "L2(NDISUIO): Read %d bytes",
     (int) VAR_1->rx_written);

 if (VAR_1->l2_hdr || VAR_1->rx_written < sizeof(*VAR_5)) {
  VAR_2 = (u8 *) VAR_5;
  VAR_4 = VAR_1->rx_written;
 } else {
  VAR_2 = (u8 *) (VAR_5 + 1);
  VAR_4 = VAR_1->rx_written - sizeof(*VAR_5);
 }
 VAR_3 = VAR_5->h_source;

 VAR_1->rx_callback(VAR_1->rx_callback_ctx, VAR_3, VAR_2, VAR_4);

 FUNC_0(VAR_1, 1);

}
