
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ recno_t ;
typedef int lno ;
struct TYPE_20__ {int (* del ) (TYPE_4__*,TYPE_3__*,int ) ;} ;
struct TYPE_19__ {scalar_t__* data; int size; } ;
struct TYPE_18__ {scalar_t__ c_lno; scalar_t__ c_nlines; TYPE_4__* db; } ;
struct TYPE_17__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;
typedef TYPE_3__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*,int ) ;

int
FUNC_11(
 SCR *VAR_7,
 recno_t VAR_8)
{
 DBT VAR_9;
 EXF *VAR_10;





 if ((VAR_10 = VAR_7->ep) == ((void*)0)) {
  FUNC_3(VAR_7, ((void*)0), VAR_0);
  return (1);
 }


 if (FUNC_6(VAR_7, VAR_3, VAR_8))
  return (1);
 if (FUNC_4(VAR_7, VAR_3, VAR_8))
  return (1);


 FUNC_5(VAR_7, VAR_8, VAR_4);


 VAR_9.data = &VAR_8;
 VAR_9.size = sizeof(VAR_8);
 if (VAR_10->db->del(VAR_10->db, &VAR_9, 0) == 1) {
  FUNC_7(VAR_7, VAR_5,
      "003|unable to delete line %lu", (u_long)VAR_8);
  return (1);
 }


 if (VAR_8 <= VAR_10->c_lno)
  VAR_10->c_lno = VAR_6;
 if (VAR_10->c_nlines != VAR_6)
  --VAR_10->c_nlines;


 if (FUNC_0(VAR_10, VAR_1))
  (void)FUNC_8(VAR_7);
 FUNC_1(VAR_10, VAR_2);


 return (FUNC_9(VAR_7, VAR_8, VAR_3, 1));
}
