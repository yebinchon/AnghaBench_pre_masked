
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int wmark; scalar_t__ blksize; } ;
struct TYPE_3__ {int channel; int wmark; scalar_t__ blksize; } ;
struct sc_info {int irsz; int playint; int pbuf; int recint; int rbuf; int misc1int; int misc2int; int dev; TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int) ;
 int FUNC_3 (struct sc_info*,int,int) ;
 int FUNC_4 (struct sc_info*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct sc_info *VAR_5 = (struct sc_info *)VAR_4;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_5->irsz);
 if (VAR_6 == 0)
  return;

 if (VAR_6 & VAR_5->playint) {
  VAR_6 &= ~VAR_5->playint;
  VAR_5->pch.wmark += VAR_5->pch.blksize;
  VAR_5->pch.wmark %= VAR_0;
  FUNC_4(VAR_5, VAR_2, VAR_5->pbuf + VAR_5->pch.wmark, 4);

  FUNC_2(VAR_5, VAR_5->playint);
  FUNC_0(VAR_5->pch.channel);
 }
 if (VAR_6 & VAR_5->recint) {
  VAR_6 &= ~VAR_5->recint;
  VAR_5->rch.wmark += VAR_5->rch.blksize;
  VAR_5->rch.wmark %= VAR_0;
  FUNC_4(VAR_5, VAR_3, VAR_5->rbuf + VAR_5->rch.wmark, 4);

  FUNC_2(VAR_5, VAR_5->recint);
  FUNC_0(VAR_5->rch.channel);
 }
 if (VAR_6 & VAR_5->misc1int) {
  VAR_6 &= ~VAR_5->misc1int;
  FUNC_2(VAR_5, VAR_5->misc1int);
  VAR_7 = FUNC_3(VAR_5, 0x400, 1);
  FUNC_4(VAR_5, 0x400, VAR_7 | 2, 1);
   FUNC_1(VAR_5->dev, "misc int 1\n");
 }
 if (VAR_6 & VAR_5->misc2int) {
  VAR_6 &= ~VAR_5->misc2int;
  FUNC_2(VAR_5, VAR_5->misc2int);
  VAR_7 = FUNC_3(VAR_5, 0x400, 1);
  FUNC_4(VAR_5, 0x400, VAR_7 & ~2, 1);
   FUNC_1(VAR_5->dev, "misc int 2\n");
 }
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_6);
   FUNC_1(VAR_5->dev, "unknown int\n");
 }
}
