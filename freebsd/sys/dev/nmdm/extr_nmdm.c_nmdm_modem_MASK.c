
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct nmdmpart {TYPE_1__* np_other; scalar_t__ np_dcd; } ;
struct TYPE_2__ {int np_dcd; int np_tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nmdmpart* FUNC_0 (struct tty*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_2, int VAR_3, int VAR_4)
{
 struct nmdmpart *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = 0;

 if (VAR_3 || VAR_4) {
  if (VAR_3 & VAR_1)
   VAR_5->np_other->np_dcd = 1;
  if (VAR_4 & VAR_1)
   VAR_5->np_other->np_dcd = 0;

  FUNC_1(VAR_5->np_other->np_tty, VAR_5->np_other->np_dcd);

  return (0);
 } else {
  if (VAR_5->np_dcd)
   VAR_6 |= VAR_0;
  if (VAR_5->np_other->np_dcd)
   VAR_6 |= VAR_1;

  return (VAR_6);
 }
}
