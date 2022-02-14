
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_firstnet; int nr_lastnet; } ;
struct TYPE_3__ {int s_net; } ;
struct atalk_iface {TYPE_2__ nets; TYPE_1__ address; } ;
struct atalk_addr {int s_node; int s_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atalk_iface*,struct atalk_addr*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct atalk_iface *VAR_4,
       struct atalk_addr* VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4->nets.nr_lastnet) -
   FUNC_2(VAR_4->nets.nr_firstnet) + 1;

 int VAR_7 = FUNC_2(VAR_4->address.s_net);
 int VAR_8 = VAR_1;
 int VAR_9, VAR_10;


 if (VAR_7 == VAR_0) {
  VAR_7 = FUNC_2(VAR_4->nets.nr_firstnet);
  if (VAR_6)
   VAR_7 += VAR_3 % VAR_6;
 }

 if (VAR_8 == VAR_1)
  VAR_8 = VAR_3 & 0xFF;


 for (VAR_9 = 0; VAR_9 <= VAR_6; VAR_9++) {

  VAR_5->s_net = FUNC_1(VAR_7);
  for (VAR_10 = 0; VAR_10 < 256; VAR_10++) {
   VAR_5->s_node = (VAR_10 + VAR_8) & 0xFF;
   if (VAR_5->s_node > 0 &&
       VAR_5->s_node < 254) {

    int VAR_11 = FUNC_0(VAR_4,
            VAR_5);

    if (VAR_11 != -VAR_2)
     return VAR_11;
   }
  }
  VAR_7++;
  if (VAR_7 > FUNC_2(VAR_4->nets.nr_lastnet))
   VAR_7 = FUNC_2(VAR_4->nets.nr_firstnet);
 }

 return -VAR_2;
}
