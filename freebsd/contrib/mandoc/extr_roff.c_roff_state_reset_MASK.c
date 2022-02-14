
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first; } ;
struct roff_man {int roff; int next; int lastnamed; int lastsec; scalar_t__ flags; int * last_es; TYPE_1__ meta; int last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,char) ;

void
FUNC_1(struct roff_man *VAR_2)
{
 VAR_2->last = VAR_2->meta.first;
 VAR_2->last_es = ((void*)0);
 VAR_2->flags = 0;
 VAR_2->lastsec = VAR_2->lastnamed = VAR_1;
 VAR_2->next = VAR_0;
 FUNC_0(VAR_2->roff, "nS", 0, '=');
}
