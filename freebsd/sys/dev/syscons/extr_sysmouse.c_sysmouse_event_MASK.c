
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int id; int value; } ;
struct TYPE_7__ {int buttons; int x; int y; int z; } ;
struct TYPE_9__ {TYPE_2__ event; TYPE_1__ data; } ;
struct TYPE_10__ {int operation; TYPE_3__ u; } ;
typedef TYPE_4__ mouse_info_t ;
struct TYPE_11__ {int button; int dx; int dy; int dz; int flags; int obutton; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_2 (int,int,int,int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(mouse_info_t *VAR_8)
{

 static int VAR_9[8] = {
     130 | 129 | 128,
     129 | 128,
     130 | 128,
     128,
     130 | 129,
     129,
     130,
     0,
 };
 u_char VAR_10[8];
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15 = 0;

 FUNC_3(VAR_7);

 switch (VAR_8->operation) {
 case 133:
         VAR_6.button = VAR_8->u.data.buttons;

 case 131:
  VAR_11 = VAR_8->u.data.x;
  VAR_12 = VAR_8->u.data.y;
  VAR_13 = VAR_8->u.data.z;
  break;
 case 132:
  VAR_11 = VAR_12 = VAR_13 = 0;
  if (VAR_8->u.event.value > 0)
   VAR_6.button |= VAR_8->u.event.id;
  else
   VAR_6.button &= ~VAR_8->u.event.id;
  break;
 default:
  goto done;
 }

 VAR_6.dx += VAR_11;
 VAR_6.dy += VAR_12;
 VAR_6.dz += VAR_13;
 VAR_6.flags |= ((VAR_11 || VAR_12 || VAR_13) ? VAR_2 : 0)
         | (VAR_6.obutton ^ VAR_6.button);
 VAR_15 = VAR_6.flags;
 if (VAR_15 == 0)
  goto done;





 if (!FUNC_4(VAR_7))
  goto done;


 VAR_10[0] = VAR_1
   | VAR_9[VAR_6.button & VAR_3];
 VAR_11 = FUNC_0(FUNC_1(VAR_11, 255), -256);
 VAR_10[1] = VAR_11 >> 1;
 VAR_10[3] = VAR_11 - VAR_10[1];
 VAR_12 = -FUNC_0(FUNC_1(VAR_12, 255), -256);
 VAR_10[2] = VAR_12 >> 1;
 VAR_10[4] = VAR_12 - VAR_10[2];
 for (VAR_14 = 0; VAR_14 < VAR_0; ++VAR_14)
  FUNC_6(VAR_7, VAR_10[VAR_14], 0);
 if (VAR_5 >= 1) {

         VAR_13 = FUNC_0(FUNC_1(VAR_13, 127), -128);
         VAR_10[5] = (VAR_13 >> 1) & 0x7f;
         VAR_10[6] = (VAR_13 - (VAR_13 >> 1)) & 0x7f;

         VAR_10[7] = (~VAR_6.button >> 3) & 0x7f;
         for (VAR_14 = VAR_0; VAR_14 < VAR_4; ++VAR_14)
   FUNC_6(VAR_7, VAR_10[VAR_14], 0);
 }
 FUNC_7(VAR_7);

done: FUNC_5(VAR_7);
 return (VAR_15);
}
