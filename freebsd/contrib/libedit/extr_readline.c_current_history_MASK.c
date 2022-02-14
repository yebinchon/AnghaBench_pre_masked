
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * data; int line; } ;
struct TYPE_6__ {int str; } ;
typedef TYPE_1__ HistEvent ;
typedef TYPE_2__ HIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

HIST_ENTRY *
FUNC_1(void)
{
 HistEvent VAR_4;

 if (FUNC_0(VAR_1, &VAR_4, VAR_0, VAR_2 + 1) != 0)
  return ((void*)0);

 VAR_3.line = VAR_4.str;
 VAR_3.data = ((void*)0);
 return &VAR_3;
}
