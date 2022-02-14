
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int cno; size_t ai; size_t offset; int * lb; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(SCR *VAR_1, TEXT *VAR_2, u_int32_t *VAR_3)
{
 size_t VAR_4, VAR_5;
 CHAR_T *VAR_6;


 for (VAR_5 = VAR_2->cno - 1, VAR_6 = VAR_2->lb + VAR_5, VAR_4 = 0;; --VAR_6, --VAR_5) {
  if (FUNC_3(*VAR_6)) {
   ++VAR_6;
   break;
  }
  ++VAR_4;
  if (VAR_5 == VAR_2->ai || VAR_5 == VAR_2->offset)
   break;
 }
 if ((VAR_5 == VAR_2->ai || VAR_5 == VAR_2->offset) && FUNC_2(VAR_6, VAR_4))
  FUNC_0(*VAR_3, VAR_0);
 else
  FUNC_1(*VAR_3, VAR_0);
}
