
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32_t ;
typedef scalar_t__ recno_t ;
typedef int lno ;
struct TYPE_24__ {int (* get ) (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;} ;
struct TYPE_23__ {scalar_t__* data; int size; } ;
struct TYPE_22__ {scalar_t__ c_lno; size_t c_len; scalar_t__* c_lp; int c_blen; TYPE_5__* db; } ;
struct TYPE_21__ {int tiq; TYPE_3__* ep; } ;
struct TYPE_20__ {scalar_t__ lno; size_t len; scalar_t__* lb; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;
typedef TYPE_4__ DBT ;
typedef scalar_t__ CHAR_T ;


 int FUNC_0 (TYPE_2__*,scalar_t__*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__*,int,scalar_t__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int *,int ) ;
 int FUNC_12 (TYPE_2__*,int ,char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*,TYPE_4__*,int ) ;

int
FUNC_14(
 SCR *VAR_9,
 recno_t VAR_10,
 u_int32_t VAR_11,
 CHAR_T **VAR_12,
 size_t *VAR_13)
{
 DBT VAR_14, VAR_15;
 EXF *VAR_16;
 TEXT *VAR_17;
 recno_t VAR_18, VAR_19;
 CHAR_T *VAR_20;
 size_t VAR_21;






 if (VAR_10 == 0)
  goto err1;


 if ((VAR_16 = VAR_9->ep) == ((void*)0)) {
  FUNC_11(VAR_9, ((void*)0), VAR_2);
  goto err3;
 }

 if (FUNC_4(VAR_1))
  goto nocache;





 if (FUNC_2(VAR_9, VAR_6)) {
  VAR_18 = ((TEXT *)FUNC_6(VAR_9->tiq))->lno;
  VAR_19 = ((TEXT *)FUNC_7(VAR_9->tiq, VAR_7))->lno;
  if (VAR_18 <= VAR_10 && VAR_19 >= VAR_10) {



   for (VAR_17 = FUNC_6(VAR_9->tiq);
       VAR_17->lno != VAR_10; VAR_17 = FUNC_8(VAR_17, VAR_8));
   if (VAR_13 != ((void*)0))
    *VAR_13 = VAR_17->len;
   if (VAR_12 != ((void*)0))
    *VAR_12 = VAR_17->lb;
   return (0);
  }




  if (VAR_10 > VAR_19)
   VAR_10 -= VAR_19 - VAR_18;
 }


 if (VAR_10 == VAR_16->c_lno) {



  if (VAR_13 != ((void*)0))
   *VAR_13 = VAR_16->c_len;
  if (VAR_12 != ((void*)0))
   *VAR_12 = VAR_16->c_lp;
  return (0);
 }
 VAR_16->c_lno = VAR_4;

nocache:

 VAR_15.data = &VAR_10;
 VAR_15.size = sizeof(VAR_10);
 switch (VAR_16->db->get(VAR_16->db, &VAR_15, &VAR_14, 0)) {
 case -1:
  goto err2;
 case 1:
err1: if (FUNC_4(VAR_0))
err2: FUNC_10(VAR_9, VAR_10);
alloc_err:
err3: if (VAR_13 != ((void*)0))
   *VAR_13 = 0;
  if (VAR_12 != ((void*)0))
   *VAR_12 = ((void*)0);
  return (1);
 }

 if (FUNC_1(VAR_9, VAR_14.data, VAR_14.size, VAR_20, VAR_21)) {
  if (!FUNC_2(VAR_9, VAR_5)) {
   FUNC_3(VAR_9, VAR_5);
   FUNC_12(VAR_9, VAR_3, "324|Conversion error on line %d", VAR_10);
  }
  goto err3;
 }


 if (VAR_20 != VAR_14.data) {
  FUNC_0(VAR_9, VAR_16->c_lp, VAR_16->c_blen, VAR_21);
  FUNC_5(VAR_16->c_lp, VAR_20, VAR_21);
 } else
  VAR_16->c_lp = VAR_14.data;
 VAR_16->c_lno = VAR_10;
 VAR_16->c_len = VAR_21;




 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_21;
 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_16->c_lp;
 return (0);
}
