
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
typedef int ZIO ;
struct TYPE_20__ {TYPE_3__* p; } ;
struct TYPE_24__ {TYPE_1__ l; } ;
struct TYPE_23__ {char const* name; int * b; int * Z; TYPE_2__* L; } ;
struct TYPE_22__ {int sizeupvalues; } ;
typedef TYPE_3__ Proto ;
typedef int Mbuffer ;
typedef TYPE_4__ LoadState ;
typedef TYPE_5__ Closure ;


 char const* VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,TYPE_5__*) ;

Closure* FUNC_7 (lua_State* VAR_1, ZIO* VAR_2, Mbuffer* VAR_3, const char* VAR_4)
{
 LoadState VAR_5;
 Closure* VAR_6;
 if (*VAR_4=='@' || *VAR_4=='=')
  VAR_5.name=VAR_4+1;
 else if (*VAR_4==VAR_0[0])
  VAR_5.name="binary string";
 else
  VAR_5.name=VAR_4;
 VAR_5.L=VAR_1;
 VAR_5.Z=VAR_2;
 VAR_5.b=VAR_3;
 FUNC_1(&VAR_5);
 VAR_6=FUNC_3(VAR_1,1);
 FUNC_6(VAR_1,VAR_1->top,VAR_6); FUNC_2(VAR_1);
 VAR_6->l.p=FUNC_4(VAR_1);
 FUNC_0(&VAR_5,VAR_6->l.p);
 if (VAR_6->l.p->sizeupvalues != 1)
 {
  Proto* VAR_7=VAR_6->l.p;
  VAR_6=FUNC_3(VAR_1,VAR_6->l.p->sizeupvalues);
  VAR_6->l.p=VAR_7;
  FUNC_6(VAR_1,VAR_1->top-1,VAR_6);
 }
 FUNC_5(VAR_1,VAR_3,VAR_6->l.p);
 return VAR_6;
}
