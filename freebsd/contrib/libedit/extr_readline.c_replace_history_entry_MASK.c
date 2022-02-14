
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int histdata_t ;
struct TYPE_8__ {int * line; int data; } ;
struct TYPE_7__ {int num; int str; } ;
typedef TYPE_1__ HistEvent ;
typedef TYPE_2__ HIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int * VAR_6 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ,...) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;

HIST_ENTRY *
FUNC_5(int VAR_7, const char *VAR_8, histdata_t VAR_9)
{
 HIST_ENTRY *VAR_10;
 HistEvent VAR_11;
 int VAR_12;

 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
  FUNC_3();


 if (FUNC_2(VAR_6, &VAR_11, VAR_0) != 0)
  return ((void*)0);
 VAR_12 = VAR_11.num;


 if (FUNC_2(VAR_6, &VAR_11, VAR_1) != 0)
  return ((void*)0);

 if ((VAR_10 = FUNC_1(sizeof(*VAR_10))) == ((void*)0))
  return ((void*)0);


 if (FUNC_2(VAR_6, &VAR_11, VAR_2, VAR_7, &VAR_10->data))
  goto out;

 VAR_10->line = FUNC_4(VAR_11.str);
 if (VAR_10->line == ((void*)0))
  goto out;

 if (FUNC_2(VAR_6, &VAR_11, VAR_3, VAR_8, VAR_9))
  goto out;


 if (FUNC_2(VAR_6, &VAR_11, VAR_4, VAR_12))
  goto out;

 return VAR_10;
out:
 FUNC_0(VAR_10);
 return ((void*)0);
}
