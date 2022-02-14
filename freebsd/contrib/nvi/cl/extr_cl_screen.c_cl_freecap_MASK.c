
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * c; } ;
struct TYPE_6__ {scalar_t__ blen1; TYPE_1__ bp1; } ;
struct TYPE_7__ {TYPE_2__ cw; int * smso; int * rmso; int * cuu1; int * cup; int * el; } ;
typedef TYPE_3__ CL_PRIVATE ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(CL_PRIVATE *VAR_0)
{
 if (VAR_0->el != ((void*)0)) {
  FUNC_0(VAR_0->el);
  VAR_0->el = ((void*)0);
 }
 if (VAR_0->cup != ((void*)0)) {
  FUNC_0(VAR_0->cup);
  VAR_0->cup = ((void*)0);
 }
 if (VAR_0->cuu1 != ((void*)0)) {
  FUNC_0(VAR_0->cuu1);
  VAR_0->cuu1 = ((void*)0);
 }
 if (VAR_0->rmso != ((void*)0)) {
  FUNC_0(VAR_0->rmso);
  VAR_0->rmso = ((void*)0);
 }
 if (VAR_0->smso != ((void*)0)) {
  FUNC_0(VAR_0->smso);
  VAR_0->smso = ((void*)0);
 }

 if (VAR_0->cw.bp1.c != ((void*)0)) {
  FUNC_0(VAR_0->cw.bp1.c);
  VAR_0->cw.bp1.c = ((void*)0);
  VAR_0->cw.blen1 = 0;
 }
}
