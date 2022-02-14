
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
typedef int lno ;
struct TYPE_18__ {int (* seq ) (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_17__ {scalar_t__* data; int size; } ;
struct TYPE_16__ {scalar_t__ c_nlines; scalar_t__ c_lno; scalar_t__* c_lp; size_t c_len; int c_blen; TYPE_5__* db; } ;
struct TYPE_15__ {int tiq; TYPE_3__* ep; } ;
struct TYPE_14__ {scalar_t__ lno; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;
typedef TYPE_4__ DBT ;
typedef scalar_t__ CHAR_T ;


 int FUNC_0 (TYPE_2__*,scalar_t__*,int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int,scalar_t__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_8 (TYPE_2__*,int ,char*) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;

int
FUNC_10(
 SCR *VAR_6,
 recno_t *VAR_7)
{
 DBT VAR_8, VAR_9;
 EXF *VAR_10;
 recno_t VAR_11;
 CHAR_T *VAR_12;
 size_t VAR_13;


 if ((VAR_10 = VAR_6->ep) == ((void*)0)) {
  FUNC_6(VAR_6, ((void*)0), VAR_0);
  return (1);
 }





 if (VAR_10->c_nlines != VAR_2) {
  *VAR_7 = VAR_10->c_nlines;
  if (FUNC_2(VAR_6, VAR_4))
   *VAR_7 += ((TEXT *)FUNC_5(VAR_6->tiq, VAR_5))->lno -
       ((TEXT *)FUNC_4(VAR_6->tiq))->lno;
  return (0);
 }

 VAR_9.data = &VAR_11;
 VAR_9.size = sizeof(VAR_11);

 switch (VAR_10->db->seq(VAR_10->db, &VAR_9, &VAR_8, VAR_3)) {
 case -1:
alloc_err:
  FUNC_8(VAR_6, VAR_1, "007|unable to get last line");
  *VAR_7 = 0;
  return (1);
 case 1:
  *VAR_7 = 0;
  return (0);
 }

 FUNC_7(&VAR_11, VAR_9.data, sizeof(VAR_11));

 if (VAR_11 != VAR_10->c_lno) {
  FUNC_1(VAR_6, VAR_8.data, VAR_8.size, VAR_12, VAR_13);


  if (VAR_12 != VAR_8.data) {
   FUNC_0(VAR_6, VAR_10->c_lp, VAR_10->c_blen, VAR_13);
   FUNC_3(VAR_10->c_lp, VAR_12, VAR_13);
  } else
   VAR_10->c_lp = VAR_8.data;
  VAR_10->c_lno = VAR_11;
  VAR_10->c_len = VAR_13;
 }
 VAR_10->c_nlines = VAR_11;


 *VAR_7 = (FUNC_2(VAR_6, VAR_4) &&
     ((TEXT *)FUNC_5(VAR_6->tiq, VAR_5))->lno > VAR_11 ?
     ((TEXT *)FUNC_5(VAR_6->tiq, VAR_5))->lno : VAR_11);
 return (0);
}
