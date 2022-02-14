
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_firstnet; int nr_lastnet; } ;
struct TYPE_3__ {int s_node; int s_net; } ;
struct atalk_iface {int status; TYPE_2__ nets; TYPE_1__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atalk_iface*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct atalk_iface *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_6->nets.nr_lastnet) -
   FUNC_2(VAR_6->nets.nr_firstnet) + 1;
 int VAR_8 = FUNC_2(VAR_6->address.s_net);
 int VAR_9 = VAR_6->address.s_node;
 int VAR_10, VAR_11;


 if (VAR_8 == VAR_0) {
  VAR_8 = FUNC_2(VAR_6->nets.nr_firstnet);
  if (VAR_7)
   VAR_8 += VAR_5 % VAR_7;
 }
 if (VAR_9 == VAR_1)
  VAR_9 = VAR_5 & 0xFF;


 VAR_6->status |= VAR_2;
 for (VAR_10 = 0; VAR_10 <= VAR_7; VAR_10++) {

  VAR_6->address.s_net = FUNC_1(VAR_8);
  for (VAR_11 = 0; VAR_11 < 256; VAR_11++) {
   VAR_6->address.s_node = (VAR_11 + VAR_9) & 0xFF;
   if (VAR_6->address.s_node > 0 &&
       VAR_6->address.s_node < 254) {

    FUNC_0(VAR_6);

    if (!(VAR_6->status & VAR_3)) {
     VAR_6->status &= ~VAR_2;
     return 0;
    }
   }
   VAR_6->status &= ~VAR_3;
  }
  VAR_8++;
  if (VAR_8 > FUNC_2(VAR_6->nets.nr_lastnet))
   VAR_8 = FUNC_2(VAR_6->nets.nr_firstnet);
 }
 VAR_6->status &= ~VAR_2;

 return -VAR_4;
}
