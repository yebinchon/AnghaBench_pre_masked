
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct magic_set* li; } ;
struct TYPE_3__ {struct magic_set* buf; struct magic_set* pbuf; } ;
struct magic_set {TYPE_2__ c; TYPE_1__ o; int * mlist; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct magic_set*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct magic_set *VAR_1)
{
 size_t VAR_2;
 if (VAR_1 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->mlist[VAR_2]);
 FUNC_0(VAR_1->o.pbuf);
 FUNC_0(VAR_1->o.buf);
 FUNC_0(VAR_1->c.li);
 FUNC_0(VAR_1);
}
