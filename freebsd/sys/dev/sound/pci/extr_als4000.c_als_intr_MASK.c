
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct sc_info {int lock; TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_9)
{
 struct sc_info *VAR_10 = (struct sc_info *)VAR_9;
 u_int8_t VAR_11, VAR_12;

 FUNC_5(VAR_10->lock);
 VAR_11 = FUNC_1(VAR_10);

 if (VAR_11 & 0x80) {
  FUNC_6(VAR_10->lock);
  FUNC_4(VAR_10->pch.channel);
  FUNC_5(VAR_10->lock);
 }

 if (VAR_11 & 0x40) {
  FUNC_6(VAR_10->lock);
  FUNC_4(VAR_10->rch.channel);
  FUNC_5(VAR_10->lock);
 }


 FUNC_2(VAR_10, VAR_11);


 VAR_12 = FUNC_3(VAR_10, VAR_8);

 if (VAR_12 & VAR_6)
  FUNC_0(VAR_10, VAR_2);
 if (VAR_12 & VAR_5)
  FUNC_0(VAR_10, VAR_1);
 if (VAR_12 & VAR_4)
  FUNC_0(VAR_10, VAR_7);
 if (VAR_12 & VAR_3)
  FUNC_0(VAR_10, VAR_0);

 FUNC_6(VAR_10->lock);
 return;
}
