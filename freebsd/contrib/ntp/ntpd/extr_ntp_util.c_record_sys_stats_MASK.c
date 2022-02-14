
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_3__ VAR_14 ;
 int FUNC_5 (TYPE_1__*,int) ;

void
FUNC_6(void)
{
 l_fp VAR_15;
 u_long VAR_16;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_15);
 FUNC_1(&VAR_14, VAR_15.l_ui);
 VAR_16 = VAR_15.l_ui / 86400 + VAR_0;
 VAR_15.l_ui %= 86400;
 if (VAR_14.fp != ((void*)0)) {
  FUNC_2(VAR_14.fp,
      "%lu %d %lu %d %d %d %d %d %d %d %d %d %d\n",
      VAR_16, FUNC_5(&VAR_15, 3), VAR_1 - VAR_13,
      VAR_11, VAR_10, VAR_8,
      VAR_9, VAR_12, VAR_4,
      VAR_3, VAR_5, VAR_7,
      VAR_6);
  FUNC_0(VAR_14.fp);
  FUNC_4();
 }
}
