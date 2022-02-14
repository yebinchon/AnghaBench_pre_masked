
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bcm2835_mbox_tag_hdr {scalar_t__ tag; int val_len; int val_buf_size; } ;
struct bcm2835_mbox_hdr {scalar_t__ code; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, bus_addr_t VAR_4, uint32_t VAR_5,
 struct bcm2835_mbox_hdr *VAR_6, size_t VAR_7)
{
 int VAR_8;
 struct bcm2835_mbox_tag_hdr *VAR_9;
 uint8_t *VAR_10;

 if ((uint32_t)VAR_4 != VAR_5) {
  FUNC_0(VAR_3, "response channel mismatch\n");
  return (VAR_2);
 }
 if (VAR_6->code != VAR_0) {
  FUNC_0(VAR_3, "mbox response error\n");
  return (VAR_2);
 }


 VAR_9 = (struct bcm2835_mbox_tag_hdr *)(VAR_6 + 1);
 VAR_10 = (uint8_t *)VAR_6 + VAR_7;
 for (VAR_8 = 0; VAR_9->tag != 0; VAR_8++) {
  if ((VAR_9->val_len & VAR_1) == 0) {
   FUNC_0(VAR_3, "tag %d response error\n", VAR_8);
   return (VAR_2);
  }

  VAR_9->val_len &= ~VAR_1;


  VAR_9 = (struct bcm2835_mbox_tag_hdr *)((uint8_t *)VAR_9 +
      sizeof(*VAR_9) + VAR_9->val_buf_size);

  if ((uint8_t *)VAR_9 > VAR_10) {
   FUNC_0(VAR_3, "mbox buffer size error\n");
   return (VAR_2);
  }
 }

 return (0);
}
