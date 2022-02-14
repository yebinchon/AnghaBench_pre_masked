
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int16_t ;
struct mbuf {int dummy; } ;
typedef TYPE_1__* ng_hci_unit_p ;
typedef TYPE_2__* ng_hci_unit_con_p ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int state; int buffer; int con_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;

int
FUNC_10(ng_hci_unit_p VAR_3, u_int16_t VAR_4,
  struct mbuf *VAR_5, struct mbuf *VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_4) {
 case 148:
 case 149:
 case 177:
 case 158:
 case 133:
 case 179:
 case 130:
 case 145:
 case 134:
 case 157:
 case 132:
 case 136:
 case 141:
 case 173:
 case 147:
 case 170:
 case 144:
 case 128:
 case 163:
 case 138:
 case 169:
 case 143:
 case 156:
 case 131:
 case 176:
 case 175:
 case 168:
 case 142:
 case 160:
 case 135:
 case 162:
 case 137:
 case 165:
 case 139:
 case 154:
 case 155:
 case 178:
 case 171:
 case 159:
 case 161:
 case 167:
 case 152:
 case 172:
 case 146:
 case 151:
 case 174:
 case 180:
 case 164:
 case 153:
 case 129:
 case 166:
 case 140:

  break;

 case 150: {
  ng_hci_unit_con_p VAR_8 = ((void*)0);
  int VAR_9;
  while (!FUNC_0(&VAR_3->con_list)) {
   VAR_8 = FUNC_1(&VAR_3->con_list);


   if (VAR_8->flags & VAR_1)
    FUNC_7(VAR_8);


   FUNC_9(VAR_8, 0x16);
   FUNC_8(VAR_8);
  }

  FUNC_4(VAR_3->buffer, VAR_9);
  FUNC_3(VAR_3->buffer, VAR_9);

  FUNC_6(VAR_3->buffer, VAR_9);
  FUNC_5(VAR_3->buffer, VAR_9);

  VAR_3->state &= ~VAR_2;
  } break;

 default:
  VAR_7 = VAR_0;
  break;
 }

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 return (VAR_7);
}
