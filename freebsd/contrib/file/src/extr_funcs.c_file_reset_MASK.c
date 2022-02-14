
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pbuf; int * buf; } ;
struct magic_set {int error; int event_flags; TYPE_1__ o; int ** mlist; } ;


 int VAR_0 ;
 int FUNC_0 (struct magic_set*,int ,char*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct magic_set *VAR_1, int VAR_2)
{
 if (VAR_2 && VAR_1->mlist[0] == ((void*)0)) {
  FUNC_0(VAR_1, 0, "no magic files loaded");
  return -1;
 }
 if (VAR_1->o.buf) {
  FUNC_1(VAR_1->o.buf);
  VAR_1->o.buf = ((void*)0);
 }
 if (VAR_1->o.pbuf) {
  FUNC_1(VAR_1->o.pbuf);
  VAR_1->o.pbuf = ((void*)0);
 }
 VAR_1->event_flags &= ~VAR_0;
 VAR_1->error = -1;
 return 0;
}
