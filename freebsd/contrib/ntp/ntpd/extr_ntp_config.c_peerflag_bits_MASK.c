
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int peerflags; } ;
typedef TYPE_2__ peer_node ;
struct TYPE_6__ {int i; } ;
struct TYPE_8__ {TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(
 peer_node *VAR_8
 )
{
 int VAR_9;
 attr_val *VAR_10;


 VAR_9 = 0;
 VAR_10 = FUNC_0(VAR_8->peerflags);
 for (; VAR_10 != ((void*)0); VAR_10 = VAR_10->link) {
  switch (VAR_10->value.i) {

  default:
   FUNC_1("peerflag_bits: option-token=%d", VAR_10->value.i);

  case 135:
   VAR_9 |= VAR_5;
   break;

  case 134:
   VAR_9 |= VAR_0;
   break;

  case 133:
   VAR_9 |= VAR_1;
   break;

  case 132:
   VAR_9 |= VAR_2;
   break;

  case 131:
   VAR_9 |= VAR_3;
   break;

  case 130:
   VAR_9 |= VAR_4;
   break;

  case 129:
   VAR_9 |= VAR_6;
   break;

  case 128:
   VAR_9 |= VAR_7;
   break;
  }
 }

 return VAR_9;
}
