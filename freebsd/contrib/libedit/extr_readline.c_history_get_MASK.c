
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int line; int data; } ;
struct TYPE_5__ {int num; int str; } ;
typedef TYPE_1__ HistEvent ;
typedef TYPE_2__ HIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,...) ;
 int VAR_6 ;
 int FUNC_1 () ;

HIST_ENTRY *
FUNC_2(int VAR_7)
{
 static HIST_ENTRY VAR_8;
 HistEvent VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0))
  FUNC_1();

 if (VAR_7 < VAR_6)
  return ((void*)0);


 if (FUNC_0(VAR_5, &VAR_9, VAR_0) != 0)
  return ((void*)0);
 VAR_10 = VAR_9.num;





 if (FUNC_0(VAR_5, &VAR_9, VAR_1, VAR_7 - VAR_6, (void **)-1) != 0)
  goto out;


 if (FUNC_0(VAR_5, &VAR_9, VAR_0) != 0)
  goto out;
 if (FUNC_0(VAR_5, &VAR_9, VAR_2, VAR_9.num, &VAR_8.data) != 0)
  goto out;
 VAR_8.line = VAR_9.str;


 (void)FUNC_0(VAR_5, &VAR_9, VAR_3, VAR_10);

 return &VAR_8;

out:

 (void)FUNC_0(VAR_5, &VAR_9, VAR_3, VAR_10);
 return ((void*)0);
}
