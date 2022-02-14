
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32_t ;
struct TYPE_3__ {int lb; scalar_t__ ai; scalar_t__ lno; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int ARG_CHAR_T ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,...) ;

__attribute__((used)) static void
FUNC_4(SCR *VAR_5, TEXT *VAR_6, ARG_CHAR_T VAR_7, u_int32_t VAR_8)
{

 if (FUNC_0(VAR_3))
  (void)FUNC_3(VAR_5, "%c", VAR_7);


 if (FUNC_0(VAR_2) && FUNC_1(VAR_5, VAR_0))
  (void)FUNC_3(VAR_5, "%6lu  ", (u_long)VAR_6->lno);


 if (FUNC_0(VAR_1))
  (void)FUNC_3(VAR_5, VAR_4, (int)VAR_6->ai, VAR_6->lb);
 (void)FUNC_2(VAR_5);
}
