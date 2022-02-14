
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; int value; } ;
struct TYPE_8__ {int buttons; int x; int y; int z; } ;
struct TYPE_10__ {TYPE_2__ event; TYPE_1__ data; } ;
struct TYPE_11__ {int operation; TYPE_3__ u; } ;
typedef TYPE_4__ mouse_info_t ;
struct TYPE_12__ {int button; int dx; int dy; int dz; int flags; int obutton; } ;
 int const VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_7 (int,int,int,int,int ,int ) ;

void
FUNC_8(mouse_info_t *VAR_8)
{

 static const int VAR_9[8] = {
     130 | 129 | 128,
     129 | 128,
     130 | 128,
     128,
     130 | 129,
     129,
     130,
     0,
 };
 unsigned char VAR_10[VAR_3];
 int VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_4(VAR_8, sizeof *VAR_8, VAR_4);

 FUNC_2(&VAR_6);
 switch (VAR_8->operation) {
 case 133:
  VAR_7.button = VAR_8->u.data.buttons;

 case 131:
  VAR_11 = VAR_8->u.data.x;
  VAR_12 = VAR_8->u.data.y;
  VAR_14 = VAR_8->u.data.z;
  break;
 case 132:
  VAR_11 = VAR_12 = VAR_14 = 0;
  if (VAR_8->u.event.value > 0)
   VAR_7.button |= VAR_8->u.event.id;
  else
   VAR_7.button &= ~VAR_8->u.event.id;
  break;
 default:
  goto done;
 }

 VAR_7.dx += VAR_11;
 VAR_7.dy += VAR_12;
 VAR_7.dz += VAR_14;
 VAR_7.flags |= ((VAR_11 || VAR_12 || VAR_14) ? VAR_1 : 0) |
     (VAR_7.obutton ^ VAR_7.button);
 if (VAR_7.flags == 0)
  goto done;






 VAR_10[0] = VAR_0 |
     VAR_9[VAR_7.button & VAR_2];
 VAR_11 = FUNC_0(FUNC_1(VAR_11, 255), -256);
 VAR_10[1] = VAR_11 >> 1;
 VAR_10[3] = VAR_11 - VAR_10[1];
 VAR_13 = -FUNC_0(FUNC_1(VAR_12, 255), -256);
 VAR_10[2] = VAR_13 >> 1;
 VAR_10[4] = VAR_13 - VAR_10[2];

        VAR_14 = FUNC_0(FUNC_1(VAR_14, 127), -128);
        VAR_10[5] = (VAR_14 >> 1) & 0x7f;
        VAR_10[6] = (VAR_14 - (VAR_14 >> 1)) & 0x7f;

        VAR_10[7] = (~VAR_7.button >> 3) & 0x7f;

 FUNC_5(VAR_10);


 FUNC_3(&VAR_6);
 FUNC_7(VAR_8->operation, VAR_11, VAR_12, VAR_8->u.event.id, VAR_8->u.event.value,
     VAR_5);
 return;


done: FUNC_3(&VAR_6);
}
