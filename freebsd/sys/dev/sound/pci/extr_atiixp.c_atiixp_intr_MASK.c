
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flags; int channel; } ;
struct TYPE_3__ {int flags; int channel; } ;
struct atiixp_info {scalar_t__ polling; int codec_not_ready_bits; TYPE_2__ rch; TYPE_1__ pch; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct atiixp_info*) ;
 int FUNC_1 (struct atiixp_info*,int ) ;
 int FUNC_2 (struct atiixp_info*) ;
 int FUNC_3 (struct atiixp_info*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct atiixp_info*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{
 struct atiixp_info *VAR_9 = VAR_8;
 uint32_t VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13 = 0;

 FUNC_0(VAR_9);
 if (VAR_9->polling != 0) {
  FUNC_2(VAR_9);
  return;
 }
 VAR_10 = FUNC_1(VAR_9, VAR_2);

 if (VAR_10 == 0) {
  FUNC_2(VAR_9);
  return;
 }

 if ((VAR_10 & VAR_5) &&
     (VAR_9->pch.flags & VAR_0))
  VAR_13 |= 1;
 if ((VAR_10 & VAR_3) &&
     (VAR_9->rch.flags & VAR_0))
  VAR_13 |= 2;
 if (VAR_10 & VAR_7) {

  VAR_12 = VAR_10 & VAR_7;
  VAR_9->codec_not_ready_bits |= VAR_12;


  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 &= ~VAR_12;
  FUNC_3(VAR_9, VAR_1, VAR_11);
  FUNC_6(VAR_9);
 }


 FUNC_3(VAR_9, VAR_2, VAR_10);
 FUNC_2(VAR_9);

 if (VAR_13 & 1)
  FUNC_4(VAR_9->pch.channel);
 if (VAR_13 & 2)
  FUNC_4(VAR_9->rch.channel);
}
