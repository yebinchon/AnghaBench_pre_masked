
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int inamp_cap; } ;
struct TYPE_7__ {int config; } ;
struct TYPE_8__ {TYPE_2__ pin; } ;
struct hdaa_widget {TYPE_1__ param; int * connsenable; int enable; TYPE_3__ wclass; int type; } ;
struct hdaa_devinfo {int startnode; int endnode; int quirks; int gpio; int dev; } ;
struct TYPE_9__ {int gpio; int unset; int set; int subsystemid; int id; int model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hdaa_devinfo*) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 struct hdaa_widget* FUNC_4 (struct hdaa_devinfo*,int) ;
 int FUNC_5 (struct hdaa_widget*) ;
 TYPE_4__* VAR_10 ;
 int FUNC_6 (TYPE_4__*) ;

void
FUNC_7(struct hdaa_devinfo *VAR_11)
{
 struct hdaa_widget *VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_13 = FUNC_3(VAR_11);
 VAR_14 = FUNC_2(VAR_11);
 VAR_15 = FUNC_1(VAR_11->dev);




 for (VAR_16 = 0; VAR_16 < FUNC_6(VAR_10); VAR_16++) {
  if (!(FUNC_0(VAR_10[VAR_16].model, VAR_14) &&
      FUNC_0(VAR_10[VAR_16].id, VAR_13) &&
      FUNC_0(VAR_10[VAR_16].subsystemid, VAR_15)))
   continue;
  VAR_11->quirks |= VAR_10[VAR_16].set;
  VAR_11->quirks &= ~(VAR_10[VAR_16].unset);
  VAR_11->gpio = VAR_10[VAR_16].gpio;
 }


 for (VAR_16 = VAR_11->startnode; VAR_16 < VAR_11->endnode; VAR_16++) {
  VAR_12 = FUNC_4(VAR_11, VAR_16);
  if (VAR_12 == ((void*)0))
   continue;
  FUNC_5(VAR_12);
 }

 switch (VAR_13) {
 case 143:





  VAR_12 = FUNC_4(VAR_11, 5);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  VAR_12 = FUNC_4(VAR_11, 6);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  VAR_12 = FUNC_4(VAR_11, 11);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;

  VAR_12 = FUNC_4(VAR_11, 12);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[1] = 0;
  VAR_12 = FUNC_4(VAR_11, 13);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[1] = 0;

  VAR_12 = FUNC_4(VAR_11, 20);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[3] = 0;
  break;
 case 142:





  VAR_12 = FUNC_4(VAR_11, 43);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;

  VAR_12 = FUNC_4(VAR_11, 39);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;
  VAR_12 = FUNC_4(VAR_11, 40);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;
  VAR_12 = FUNC_4(VAR_11, 41);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;
  VAR_12 = FUNC_4(VAR_11, 42);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;

  VAR_12 = FUNC_4(VAR_11, 15);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[3] = 0;

  VAR_12 = FUNC_4(VAR_11, 31);
  if (VAR_12 != ((void*)0)) {
   if ((VAR_12->wclass.pin.config &
       VAR_4) ==
       VAR_5) {
    VAR_12 = FUNC_4(VAR_11, 16);
    if (VAR_12 != ((void*)0))
        VAR_12->connsenable[2] = 0;
   } else {
    VAR_12 = FUNC_4(VAR_11, 15);
    if (VAR_12 != ((void*)0))
        VAR_12->connsenable[0] = 0;
   }
  }
  VAR_12 = FUNC_4(VAR_11, 32);
  if (VAR_12 != ((void*)0)) {
   if ((VAR_12->wclass.pin.config &
       VAR_4) ==
       VAR_5) {
    VAR_12 = FUNC_4(VAR_11, 16);
    if (VAR_12 != ((void*)0))
        VAR_12->connsenable[0] = 0;
   } else {
    VAR_12 = FUNC_4(VAR_11, 15);
    if (VAR_12 != ((void*)0))
        VAR_12->connsenable[1] = 0;
   }
  }

  if (VAR_14 == VAR_0) {





   VAR_12 = FUNC_4(VAR_11, 26);
   if (VAR_12 != ((void*)0) && VAR_12->type ==
       VAR_6 &&
       (VAR_12->wclass.pin.config &
       VAR_2) !=
       VAR_3)
    VAR_11->quirks &=
        ~VAR_1;
  }
  break;
 case 144:





  VAR_12 = FUNC_4(VAR_11, 21);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[3] = 0;

  VAR_12 = FUNC_4(VAR_11, 31);
  if (VAR_12 != ((void*)0))
   VAR_12->enable = 0;

  VAR_12 = FUNC_4(VAR_11, 5);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  VAR_12 = FUNC_4(VAR_11, 6);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  VAR_12 = FUNC_4(VAR_11, 9);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  VAR_12 = FUNC_4(VAR_11, 24);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  break;
 case 141:
  if (VAR_14 == 0x84371043) {
   VAR_12 = FUNC_4(VAR_11, 15);
   if (VAR_12 != ((void*)0))
    VAR_12->param.inamp_cap = 0;
  }
  break;
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:




  VAR_12 = FUNC_4(VAR_11, 20);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[1] = 0;
  VAR_12 = FUNC_4(VAR_11, 21);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[1] = 0;
  VAR_12 = FUNC_4(VAR_11, 22);
  if (VAR_12 != ((void*)0))
   VAR_12->connsenable[0] = 0;
  break;
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:



  VAR_12 = FUNC_4(VAR_11, 26);
  if (VAR_12 != ((void*)0))
   VAR_12->param.inamp_cap =
       (40 << VAR_9) |
       (3 << VAR_7) |
       (0 << VAR_8);
  VAR_12 = FUNC_4(VAR_11, 30);
  if (VAR_12 != ((void*)0))
   VAR_12->param.inamp_cap =
       (40 << VAR_9) |
       (3 << VAR_7) |
       (0 << VAR_8);
  break;
 }
}
