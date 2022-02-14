
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef int recno_t ;
struct TYPE_20__ {int (* put ) (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_19__ {int* data; int size; } ;
struct TYPE_16__ {scalar_t__ lno; } ;
struct TYPE_18__ {int* l_lp; int l_cur; int l_high; TYPE_5__* log; int l_len; TYPE_1__ l_cursor; } ;
struct TYPE_17__ {TYPE_3__* ep; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;
typedef TYPE_4__ DBT ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_2__*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;





 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_2__*,char*,int,int,size_t) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int ,int**,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int*,int*,size_t) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;

int
FUNC_10(
 SCR *VAR_8,
 recno_t VAR_9,
 u_int VAR_10)
{
 DBT VAR_11, VAR_12;
 EXF *VAR_13;
 size_t VAR_14;
 CHAR_T *VAR_15;
 recno_t VAR_16;

 VAR_13 = VAR_8->ep;
 if (FUNC_2(VAR_13, VAR_3))
  return (0);







 FUNC_1(VAR_13, VAR_4);


 if (VAR_13->l_cursor.lno != VAR_7) {
  if (FUNC_7(VAR_8, VAR_5))
   return (1);
  VAR_13->l_cursor.lno = VAR_7;
 }







 if (VAR_10 == 129) {
  if (FUNC_6(VAR_8, VAR_9, VAR_2, &VAR_15, &VAR_14)) {
   if (VAR_9 != 1) {
    FUNC_5(VAR_8, VAR_9);
    return (1);
   }
   VAR_14 = 0;
   VAR_15 = FUNC_3("");
  }
 } else
  if (FUNC_6(VAR_8, VAR_9, VAR_1, &VAR_15, &VAR_14))
   return (1);
 FUNC_0(VAR_8,
     VAR_13->l_lp, VAR_13->l_len,
     VAR_14 * sizeof(CHAR_T) + VAR_0);
 VAR_13->l_lp[0] = VAR_10;
 FUNC_8(VAR_13->l_lp + sizeof(u_char), &VAR_9, sizeof(recno_t));
 FUNC_8(VAR_13->l_lp + VAR_0, VAR_15, VAR_14 * sizeof(CHAR_T));

 VAR_16 = VAR_13->l_cur;
 VAR_12.data = &VAR_16;
 VAR_12.size = sizeof(recno_t);
 VAR_11.data = VAR_13->l_lp;
 VAR_11.size = VAR_14 * sizeof(CHAR_T) + VAR_0;
 if (VAR_13->log->put(VAR_13->log, &VAR_12, &VAR_11, 0) == -1)
  VAR_6;
 VAR_13->l_high = ++VAR_13->l_cur;

 return (0);
}
