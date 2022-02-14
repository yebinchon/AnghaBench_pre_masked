
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct ikev2_responder_data {int r_spi; int i_spi; } ;
struct ikev2_hdr {int message_id; int flags; void* exchange_type; int version; void* next_payload; int r_spi; int i_spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 struct ikev2_hdr* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_4(struct ikev2_responder_data *VAR_4,
       struct wpabuf *VAR_5, u8 VAR_6,
       u8 VAR_7, u32 VAR_8)
{
 struct ikev2_hdr *VAR_9;

 FUNC_2(VAR_3, "IKEV2: Adding HDR");


 VAR_9 = FUNC_3(VAR_5, sizeof(*VAR_9));
 FUNC_1(VAR_9->i_spi, VAR_4->i_spi, VAR_1);
 FUNC_1(VAR_9->r_spi, VAR_4->r_spi, VAR_1);
 VAR_9->next_payload = VAR_7;
 VAR_9->version = VAR_2;
 VAR_9->exchange_type = VAR_6;
 VAR_9->flags = VAR_0;
 FUNC_0(VAR_9->message_id, VAR_8);
}
