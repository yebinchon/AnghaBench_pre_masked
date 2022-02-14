
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_6__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_7__ {int * fp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int) ;

void
FUNC_5(
 char *VAR_3
 )
{
 l_fp VAR_4;
 u_long VAR_5;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_4);
 FUNC_1(&VAR_1, VAR_4.l_ui);
 VAR_5 = VAR_4.l_ui / 86400 + VAR_0;
 VAR_4.l_ui %= 86400;
 if (VAR_1.fp != ((void*)0)) {
  FUNC_2(VAR_1.fp, "%lu %d %s\n", VAR_5,
      FUNC_4(&VAR_4, 3), VAR_3);
  FUNC_0(VAR_1.fp);
 }
}
