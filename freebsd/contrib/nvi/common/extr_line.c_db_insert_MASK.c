
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
 int FUNC_3 (size_t,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ,int ,int *) ;
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
 SCR *VAR_8,
 recno_t VAR_9,
 CHAR_T *VAR_10,
 size_t VAR_11)
{
 DBT VAR_12, VAR_13;
 EXF *VAR_14;
 char *VAR_15;
 size_t VAR_16;
 int VAR_17;






 if ((VAR_14 = VAR_8->ep) == ((void*)0)) {
  FUNC_5(VAR_8, ((void*)0), VAR_0);
  return (1);
 }

 FUNC_2(VAR_8, VAR_10, VAR_11, VAR_15, VAR_16);


 VAR_13.data = &VAR_9;
 VAR_13.size = sizeof(VAR_9);
 VAR_12.data = VAR_15;
 VAR_12.size = VAR_16;
 if (VAR_14->db->put(VAR_14->db, &VAR_13, &VAR_12, VAR_7) == -1) {
  FUNC_9(VAR_8, VAR_5,
      "005|unable to insert at line %lu", (u_long)VAR_9);
  return (1);
 }


 if (VAR_9 >= VAR_14->c_lno)
  VAR_14->c_lno = VAR_6;
 if (VAR_14->c_nlines != VAR_6)
  ++VAR_14->c_nlines;


 if (FUNC_0(VAR_14, VAR_1))
  (void)FUNC_10(VAR_8);
 FUNC_1(VAR_14, VAR_2);


 FUNC_7(VAR_8, VAR_9, VAR_4);


 VAR_17 = 0;
 if (FUNC_8(VAR_8, VAR_3, VAR_9))
  VAR_17 = 1;
 if (FUNC_6(VAR_8, VAR_3, VAR_9))
  VAR_17 = 1;


 return (FUNC_11(VAR_8, VAR_9, VAR_3, 1) || VAR_17);
}
