
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ pin; } ;
struct hdaa_widget {scalar_t__ enable; int bindas; int type; int ossdev; TYPE_2__ wclass; } ;
struct hdaa_devinfo {int startnode; int endnode; struct hdaa_audio_as* as; } ;
struct hdaa_audio_as {scalar_t__ dir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;





 struct hdaa_widget* FUNC_0 (struct hdaa_devinfo*,int) ;

__attribute__((used)) static void
FUNC_1(struct hdaa_devinfo *VAR_5)
{
 struct hdaa_audio_as *VAR_6 = VAR_5->as;
 struct hdaa_widget *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = -1, VAR_11, VAR_12 = 0;
 static const int VAR_13[7][13] = {
     { 138, 137, 136,
       135, -1 },
     { 133, 134, -1 },
     { 134, 133, -1 },
     { 142, -1 },
     { 129, -1 },
     { 141, 140, 139,
       -1 },
     { 138, 137, 136,
       135, 132, 131,
       128, 130, 141,
       140, 139, 133,
       -1 }
 };


 for (VAR_8 = VAR_5->startnode; VAR_8 < VAR_5->endnode; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, VAR_8);
  if (VAR_7 == ((void*)0) || VAR_7->enable == 0)
   continue;
  if (VAR_7->bindas == -1)
   continue;
  VAR_11 = -1;
  switch (VAR_7->type) {
  case 143:
   if (VAR_6[VAR_7->bindas].dir == VAR_0)
    break;
   VAR_10 = -1;
   switch (VAR_7->wclass.pin.config & VAR_3) {
   case 151:
    VAR_10 = 0;
    break;
   case 149:
    if ((VAR_7->wclass.pin.config & VAR_2)
        == VAR_1)
     break;
    VAR_10 = 1;
    break;
   case 155:
    VAR_10 = 3;
    break;
   case 146:
    VAR_10 = 4;
    break;
   case 148:
   case 154:
    VAR_10 = 5;
    break;
   }
   if (VAR_10 == -1)
    break;
   VAR_9 = 0;
   while (VAR_13[VAR_10][VAR_9] >= 0 &&
       (VAR_12 & (1 << VAR_13[VAR_10][VAR_9])) != 0) {
    VAR_9++;
   }
   if (VAR_13[VAR_10][VAR_9] >= 0)
    VAR_11 = VAR_13[VAR_10][VAR_9];
   break;
  case 145:
   VAR_11 = VAR_4;
   break;
  case 144:
   VAR_11 = 129;
   break;
  default:
   break;
  }
  if (VAR_11 >= 0) {
   VAR_7->ossdev = VAR_11;
   VAR_12 |= (1 << VAR_11);
  }
 }

 for (VAR_8 = VAR_5->startnode; VAR_8 < VAR_5->endnode; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, VAR_8);
  if (VAR_7 == ((void*)0) || VAR_7->enable == 0)
   continue;
  if (VAR_7->ossdev >= 0)
   continue;
  if (VAR_7->bindas == -1)
   continue;
  if (VAR_7->type != 143)
   continue;
  if (VAR_6[VAR_7->bindas].dir == VAR_0)
   continue;
  VAR_10 = -1;
  switch (VAR_7->wclass.pin.config & VAR_3) {
  case 150:
  case 146:
  case 152:
  case 156:
   VAR_10 = 0;
   break;
  case 149:
   VAR_10 = 2;
   break;
  case 147:
  case 153:
   VAR_10 = 5;
   break;
  }
  if (VAR_10 == -1)
   break;
  VAR_9 = 0;
  while (VAR_13[VAR_10][VAR_9] >= 0 &&
      (VAR_12 & (1 << VAR_13[VAR_10][VAR_9])) != 0) {
   VAR_9++;
  }
  if (VAR_13[VAR_10][VAR_9] >= 0) {
   VAR_7->ossdev = VAR_13[VAR_10][VAR_9];
   VAR_12 |= (1 << VAR_13[VAR_10][VAR_9]);
  }
 }

 for (VAR_8 = VAR_5->startnode; VAR_8 < VAR_5->endnode; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, VAR_8);
  if (VAR_7 == ((void*)0) || VAR_7->enable == 0)
   continue;
  if (VAR_7->ossdev >= 0)
   continue;
  if (VAR_7->bindas == -1)
   continue;
  if (VAR_7->type != 143)
   continue;
  if (VAR_6[VAR_7->bindas].dir == VAR_0)
   continue;
  VAR_9 = 0;
  while (VAR_13[6][VAR_9] >= 0 &&
      (VAR_12 & (1 << VAR_13[6][VAR_9])) != 0) {
   VAR_9++;
  }
  if (VAR_13[6][VAR_9] >= 0) {
   VAR_7->ossdev = VAR_13[6][VAR_9];
   VAR_12 |= (1 << VAR_13[6][VAR_9]);
  }
 }
}
