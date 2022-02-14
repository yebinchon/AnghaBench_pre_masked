
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mtime; struct TYPE_4__* cmgn; } ;
typedef TYPE_1__ GNode ;



int
FUNC_0(GNode *VAR_0, GNode *VAR_1)
{
    if (VAR_0->cmgn == ((void*)0) || VAR_1->mtime > VAR_0->cmgn->mtime) {
 VAR_0->cmgn = VAR_1;
    }
    return (0);
}
