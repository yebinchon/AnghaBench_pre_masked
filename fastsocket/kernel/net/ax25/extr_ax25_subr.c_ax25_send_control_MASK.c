
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {scalar_t__ modulus; int vr; TYPE_2__* ax25_dev; } ;
typedef TYPE_3__ ax25_cb ;
struct TYPE_7__ {TYPE_1__* dev; } ;
struct TYPE_6__ {int hard_header_len; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*,int) ;
 unsigned char* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(ax25_cb *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct sk_buff *VAR_10;
 unsigned char *VAR_11;

 if ((VAR_10 = FUNC_0(VAR_6->ax25_dev->dev->hard_header_len + 2, VAR_5)) == ((void*)0))
  return;

 FUNC_3(VAR_10, VAR_6->ax25_dev->dev->hard_header_len);

 FUNC_4(VAR_10);


 if (VAR_6->modulus == VAR_1) {
  VAR_11 = FUNC_2(VAR_10, 1);
  *VAR_11 = VAR_7;
  *VAR_11 |= (VAR_8) ? VAR_2 : 0;
  if ((VAR_7 & VAR_4) == VAR_3)
   *VAR_11 |= (VAR_6->vr << 5);
 } else {
  if ((VAR_7 & VAR_4) == VAR_4) {
   VAR_11 = FUNC_2(VAR_10, 1);
   *VAR_11 = VAR_7;
   *VAR_11 |= (VAR_8) ? VAR_2 : 0;
  } else {
   VAR_11 = FUNC_2(VAR_10, 2);
   VAR_11[0] = VAR_7;
   VAR_11[1] = (VAR_6->vr << 1);
   VAR_11[1] |= (VAR_8) ? VAR_0 : 0;
  }
 }

 FUNC_1(VAR_6, VAR_10, VAR_9);
}
