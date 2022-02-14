
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct tcode_info {int hdr_len; int flag; } ;
struct TYPE_10__ {int dev; } ;
struct fwohci_softc {TYPE_5__ fc; } ;
struct TYPE_9__ {int psize; } ;
struct fwohci_dbch {TYPE_4__ xferq; } ;
struct TYPE_7__ {size_t tcode; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_8__ {TYPE_2__ common; TYPE_1__ wreqb; } ;
struct fw_pkt {TYPE_3__ mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct tcode_info* VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct fwohci_softc *VAR_2, struct fwohci_dbch *VAR_3, struct fw_pkt *VAR_4)
{
 struct tcode_info *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_1[VAR_4->mode.common.tcode];
 VAR_6 = VAR_5->hdr_len + sizeof(uint32_t);
 if ((VAR_5->flag & VAR_0) != 0)
  VAR_6 += FUNC_1(VAR_4->mode.wreqb.len, sizeof(uint32_t));

 if (VAR_6 == sizeof(uint32_t)) {

  FUNC_0(VAR_2->fc.dev, "Unknown tcode %d\n",
      VAR_4->mode.common.tcode);
  return (-1);
 }

 if (VAR_6 > VAR_3->xferq.psize) {
  FUNC_0(VAR_2->fc.dev, "Invalid packet length %d\n", VAR_6);
  return (-1);

 }

 return VAR_6;
}
