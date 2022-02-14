
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ recno_t ;
typedef int lno ;
struct TYPE_22__ {int (* put ) (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;} ;
struct TYPE_21__ {scalar_t__* data; int size; } ;
struct TYPE_20__ {scalar_t__ c_lno; scalar_t__ c_nlines; TYPE_4__* db; } ;
struct TYPE_19__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;
typedef TYPE_3__ DBT ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,size_t,char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (size_t,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__,size_t,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,scalar_t__,int ,int) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;

int
FUNC_13(
 SCR *VAR_9,
 int VAR_10,
 recno_t VAR_11,
 CHAR_T *VAR_12,
 size_t VAR_13)
{
 DBT VAR_14, VAR_15;
 EXF *VAR_16;
 char *VAR_17;
 size_t VAR_18;
 int VAR_19;





 if ((VAR_16 = VAR_9->ep) == ((void*)0)) {
  FUNC_5(VAR_9, ((void*)0), VAR_0);
  return (1);
 }

 FUNC_2(VAR_9, VAR_12, VAR_13, VAR_17, VAR_18);


 VAR_15.data = &VAR_11;
 VAR_15.size = sizeof(VAR_11);
 VAR_14.data = VAR_17;
 VAR_14.size = VAR_18;
 if (VAR_16->db->put(VAR_16->db, &VAR_15, &VAR_14, VAR_8) == -1) {
  FUNC_9(VAR_9, VAR_6,
      "004|unable to append to line %lu", (u_long)VAR_11);
  return (1);
 }


 if (VAR_11 < VAR_16->c_lno)
  VAR_16->c_lno = VAR_7;
 if (VAR_16->c_nlines != VAR_7)
  ++VAR_16->c_nlines;


 if (FUNC_0(VAR_16, VAR_1))
  (void)FUNC_10(VAR_9);
 FUNC_1(VAR_16, VAR_2);


 FUNC_7(VAR_9, VAR_11 + 1, VAR_5);


 VAR_19 = 0;
 if (FUNC_8(VAR_9, VAR_4, VAR_11 + 1))
  VAR_19 = 1;
 if (FUNC_6(VAR_9, VAR_4, VAR_11 + 1))
  VAR_19 = 1;
 return (FUNC_11(VAR_9, VAR_11, VAR_3, VAR_10) || VAR_19);
}
