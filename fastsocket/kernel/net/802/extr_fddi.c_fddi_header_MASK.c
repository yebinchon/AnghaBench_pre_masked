
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {void const* dev_addr; int addr_len; } ;
struct TYPE_3__ {int* oui; int ethertype; int ctrl; void* ssap; void* dsap; } ;
struct TYPE_4__ {TYPE_1__ llc_snap; } ;
struct fddihdr {int daddr; int saddr; TYPE_2__ hdr; int fc; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,void const*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_8, struct net_device *VAR_9,
         unsigned short VAR_10,
         const void *VAR_11, const void *VAR_12, unsigned VAR_13)
{
 int VAR_14 = VAR_6;
 struct fddihdr *VAR_15;

 if(VAR_10 != VAR_1 && VAR_10 != VAR_2 && VAR_10 != VAR_0)
  VAR_14=VAR_5-3;
 VAR_15 = (struct fddihdr *)FUNC_2(VAR_8, VAR_14);
 VAR_15->fc = VAR_4;
 if(VAR_10 == VAR_1 || VAR_10 == VAR_2 || VAR_10 == VAR_0)
 {
  VAR_15->hdr.llc_snap.dsap = VAR_3;
  VAR_15->hdr.llc_snap.ssap = VAR_3;
  VAR_15->hdr.llc_snap.ctrl = VAR_7;
  VAR_15->hdr.llc_snap.oui[0] = 0x00;
  VAR_15->hdr.llc_snap.oui[1] = 0x00;
  VAR_15->hdr.llc_snap.oui[2] = 0x00;
  VAR_15->hdr.llc_snap.ethertype = FUNC_0(VAR_10);
 }



 if (VAR_12 != ((void*)0))
  FUNC_1(VAR_15->saddr, VAR_12, VAR_9->addr_len);
 else
  FUNC_1(VAR_15->saddr, VAR_9->dev_addr, VAR_9->addr_len);

 if (VAR_11 != ((void*)0))
 {
  FUNC_1(VAR_15->daddr, VAR_11, VAR_9->addr_len);
  return(VAR_14);
 }

 return(-VAR_14);
}
