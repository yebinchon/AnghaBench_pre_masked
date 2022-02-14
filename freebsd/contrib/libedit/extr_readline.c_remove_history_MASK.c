
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int line; int data; } ;
struct TYPE_7__ {int num; int str; } ;
typedef TYPE_1__ HistEvent ;
typedef TYPE_2__ HIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ,...) ;
 int VAR_4 ;
 int FUNC_3 () ;

HIST_ENTRY *
FUNC_4(int VAR_5)
{
 HIST_ENTRY *VAR_6;
 HistEvent VAR_7;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_3();

 if ((VAR_6 = FUNC_1(sizeof(*VAR_6))) == ((void*)0))
  return ((void*)0);

 if (FUNC_2(VAR_3, &VAR_7, VAR_0, VAR_5, &VAR_6->data) != 0) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->line = VAR_7.str;
 if (FUNC_2(VAR_3, &VAR_7, VAR_1) == 0)
  VAR_4 = VAR_7.num;

 return VAR_6;
}
