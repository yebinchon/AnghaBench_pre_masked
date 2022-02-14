
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ cb; } ;
struct net_device {void const* dev_addr; } ;
struct TYPE_6__ {int dest_addr_type; int src_addr_type; scalar_t__* dest_switch_addr; int reserved; scalar_t__* src_switch_addr; scalar_t__ message_type; scalar_t__ double_wide; scalar_t__ fc; } ;
struct TYPE_5__ {int* oui; int ethertype; int ctrl; void* ssap; void* dsap; } ;
struct TYPE_4__ {void* d2_size; void* fixed; } ;
struct hippi_hdr {TYPE_3__ le; TYPE_2__ snap; TYPE_1__ fp; } ;
struct hippi_cb {scalar_t__ ifield; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (scalar_t__*,void const*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4,
   unsigned short VAR_5,
   const void *VAR_6, const void *VAR_7, unsigned VAR_8)
{
 struct hippi_hdr *VAR_9 = (struct hippi_hdr *)FUNC_5(VAR_3, VAR_1);
 struct hippi_cb *VAR_10 = (struct hippi_cb *) VAR_3->cb;

 if (!VAR_8){
  VAR_8 = VAR_3->len - VAR_1;
  FUNC_4("hippi_header(): length not supplied\n");
 }





 VAR_9->fp.fixed = FUNC_0(0x04800018);
 VAR_9->fp.d2_size = FUNC_0(VAR_8 + 8);
 VAR_9->le.fc = 0;
 VAR_9->le.double_wide = 0;
 VAR_9->le.message_type = 0;

 VAR_9->le.dest_addr_type = 2;
 VAR_9->le.src_addr_type = 2;

 FUNC_2(VAR_9->le.src_switch_addr, VAR_4->dev_addr + 3, 3);
 FUNC_3(&VAR_9->le.reserved, 0, 16);

 VAR_9->snap.dsap = VAR_0;
 VAR_9->snap.ssap = VAR_0;
 VAR_9->snap.ctrl = VAR_2;
 VAR_9->snap.oui[0] = 0x00;
 VAR_9->snap.oui[1] = 0x00;
 VAR_9->snap.oui[2] = 0x00;
 VAR_9->snap.ethertype = FUNC_1(VAR_5);

 if (VAR_6)
 {
  FUNC_2(VAR_9->le.dest_switch_addr, VAR_6 + 3, 3);
  FUNC_2(&VAR_10->ifield, VAR_6 + 2, 4);
  return VAR_1;
 }
 VAR_10->ifield = 0;
 return -((int)VAR_1);
}
