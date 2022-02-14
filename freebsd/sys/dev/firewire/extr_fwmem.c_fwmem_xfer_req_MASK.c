
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int pay_len; } ;
struct TYPE_6__ {int dst; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__ mode; } ;
struct TYPE_9__ {int pay_len; int spd; TYPE_3__ hdr; } ;
struct fw_xfer {TYPE_5__ recv; TYPE_4__ send; int sc; void* hand; int fc; } ;
struct fw_device {int dst; int speed; int fc; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_xfer* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static struct fw_xfer *
FUNC_2(
 struct fw_device *VAR_2,
 caddr_t VAR_3,
 int VAR_4,
 int VAR_5,
 int VAR_6,
 void *VAR_7)
{
 struct fw_xfer *VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->fc = VAR_2->fc;
 VAR_8->send.hdr.mode.hdr.dst = VAR_0 | VAR_2->dst;
 if (VAR_4 < 0)
  VAR_8->send.spd = VAR_2->speed;
 else
  VAR_8->send.spd = FUNC_1(VAR_4, VAR_2->speed);
 VAR_8->hand = VAR_7;
 VAR_8->sc = VAR_3;
 VAR_8->send.pay_len = VAR_5;
 VAR_8->recv.pay_len = VAR_6;

 return VAR_8;
}
