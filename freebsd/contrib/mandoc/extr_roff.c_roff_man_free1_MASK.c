
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sodest; int date; int name; int title; int arch; int os; int vol; int msec; int * first; } ;
struct roff_man {TYPE_1__ meta; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct roff_man*,int *) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_0)
{
 if (VAR_0->meta.first != ((void*)0))
  FUNC_1(VAR_0, VAR_0->meta.first);
 FUNC_0(VAR_0->meta.msec);
 FUNC_0(VAR_0->meta.vol);
 FUNC_0(VAR_0->meta.os);
 FUNC_0(VAR_0->meta.arch);
 FUNC_0(VAR_0->meta.title);
 FUNC_0(VAR_0->meta.name);
 FUNC_0(VAR_0->meta.date);
 FUNC_0(VAR_0->meta.sodest);
}
