
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int VI_PRIVATE ;
struct TYPE_8__ {size_t len; size_t sv_len; scalar_t__ owrite; scalar_t__ insert; scalar_t__ lno; int * lb; } ;
typedef int TEXTH ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,char*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,int ) ;

__attribute__((used)) static TEXT *
FUNC_9(SCR *VAR_7, TEXTH *VAR_8, TEXT *VAR_9, u_int32_t *VAR_10)
{
 VI_PRIVATE *VAR_11;
 TEXT *VAR_12;


 if ((VAR_12 = FUNC_3(VAR_9, VAR_5, VAR_6)) == ((void*)0)) {
  if (!FUNC_1(*VAR_10, VAR_4))
   FUNC_6(VAR_7, VAR_2,
       "193|Already at the beginning of the insert");
  return (VAR_9);
 }


 VAR_12->len = VAR_12->sv_len;


 VAR_11 = FUNC_5(VAR_7);
 if (VAR_12->owrite == 0 && VAR_12->insert == 0) {
  VAR_12->lb[VAR_12->len] = VAR_0;
  ++VAR_12->insert;
  ++VAR_12->len;
  FUNC_2(*VAR_10, VAR_3);
 } else
  FUNC_0(*VAR_10, VAR_3);


 FUNC_4(VAR_8, VAR_9, VAR_6);
 FUNC_7(VAR_9);


 if (FUNC_8(VAR_7, VAR_12->lno + 1, VAR_1))
  return (((void*)0));


 return (VAR_12);
}
