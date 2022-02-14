
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_9__ {TYPE_2__* sc; } ;
typedef TYPE_3__ scr_stat ;
typedef int caddr_t ;
struct TYPE_8__ {TYPE_1__* adp; } ;
struct TYPE_7__ {int va_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (struct tty*) ;
 int VAR_7 ;
 int FUNC_2 (struct tty*,int,int ,struct thread*) ;
 int FUNC_3 (TYPE_3__*,struct tty*,int) ;
 int FUNC_4 (TYPE_3__*,struct tty*,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct tty*,int,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_8, u_long VAR_9, caddr_t VAR_10, struct thread *VAR_11)
{
 scr_stat *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_8);

 switch (VAR_9) {


 case 160: case 159:
 case 158: case 157:
 case 156:
  if (!(VAR_12->sc->adp->va_flags & VAR_7))
   return VAR_0;
  return FUNC_4(VAR_12, VAR_8, VAR_9 & 0xff, 0, 0, 0, 0);


 case 138:
 case 142:
 case 141:
 case 140:
 case 139:
  if (!(VAR_12->sc->adp->va_flags & VAR_7))
   return VAR_0;
  VAR_13 = (VAR_9 & 0xff) + VAR_4;
  return FUNC_4(VAR_12, VAR_8, VAR_13, 0, 0, 0, 0);


 case 151: case 146:
 case 130:

 case 135:

 case 134:
 case 150: case 145:
 case 129:

 case 143: case 133:
 case 149: case 144:
 case 128:

 case 155: case 137:
 case 153: case 148:
 case 132:

 case 154: case 136:
 case 152: case 147:
 case 131:
  if (!(VAR_12->sc->adp->va_flags & VAR_7))
   return VAR_0;
  VAR_13 = (VAR_9 & 0xff) + VAR_4;
  return FUNC_3(VAR_12, VAR_8, VAR_13);
 default:
  if (FUNC_0(VAR_9) == 'V') {
   if (!(VAR_12->sc->adp->va_flags & VAR_7))
    return VAR_0;

   VAR_13 = (VAR_9 & 0xff) + VAR_4;

   if (((VAR_9 & VAR_2) == VAR_3) &&
       (VAR_13 > VAR_5) &&
       (VAR_13 < VAR_6))
    return FUNC_3(VAR_12, VAR_8, VAR_13);
  }
 }

 if (&FUNC_2)
  return FUNC_2)(VAR_8, VAR_9, VAR_10, VAR_11);
 else
  return VAR_1;
}
