
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;


typedef int u_int32_t ;
struct TYPE_28__ {scalar_t__ lno; size_t cno; } ;
struct TYPE_31__ {scalar_t__ lno; } ;
struct TYPE_29__ {int count; TYPE_14__ m_start; TYPE_5__ m_stop; int buffer; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_30__ {scalar_t__ lno; size_t cno; int showmode; } ;
typedef TYPE_2__ SCR ;
typedef int CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,size_t) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,size_t,size_t) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *,TYPE_14__*,TYPE_5__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__,int **,size_t*,int*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,int ,int **,size_t*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,int *,size_t) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_14__*,TYPE_5__*,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*,scalar_t__,size_t*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,TYPE_5__*,int *,size_t,int ,int ,int,int ) ;

int
FUNC_17(SCR *VAR_15, VICMD *VAR_16)
{
 size_t VAR_17, VAR_18;
 u_int32_t VAR_19;
 int VAR_20, VAR_21, VAR_22;
 CHAR_T *VAR_23;
 CHAR_T *VAR_24;







 FUNC_1(VAR_16, VAR_13);
 FUNC_3(VAR_16, VAR_14);





 if (VAR_16->m_start.lno == VAR_16->m_stop.lno &&
     FUNC_9(VAR_15, VAR_16->m_start.lno, &VAR_24, &VAR_18, &VAR_20)) {
  if (!VAR_20)
   return (1);
  return (FUNC_15(VAR_15, VAR_16));
 }

 VAR_19 = FUNC_14(VAR_15, VAR_16, 0);
 VAR_15->showmode = VAR_5;
 VAR_21 = FUNC_2(VAR_16, VAR_12) ? VAR_0 : 0;
 if (VAR_21) {
  VAR_16->m_start.cno = 0;
  if (FUNC_7(VAR_15, VAR_4)) {
   if (FUNC_13(VAR_15, VAR_16->m_start.lno, &VAR_16->m_start.cno))
    return (1);
   FUNC_5(VAR_6);
  }
 }
 VAR_15->lno = VAR_16->m_start.lno;
 VAR_15->cno = VAR_16->m_start.cno;

 VAR_2;





 if (!VAR_21 && VAR_16->m_start.lno == VAR_16->m_stop.lno) {





  if (FUNC_8(VAR_15,
      FUNC_2(VAR_16, VAR_10) ? &VAR_16->buffer : ((void*)0),
      &VAR_16->m_start, &VAR_16->m_stop, VAR_21))
   return (1);
  if (VAR_18 == 0)
   FUNC_5(VAR_7);
  FUNC_5(VAR_8 | VAR_9);
  return (FUNC_16(VAR_15, VAR_16, &VAR_16->m_stop, VAR_24, VAR_18,
      0, VAR_3, FUNC_2(VAR_16, VAR_11) ? VAR_16->count : 1, VAR_19));
 }
 if (FUNC_8(VAR_15,
     FUNC_2(VAR_16, VAR_10) ? &VAR_16->buffer : ((void*)0),
     &VAR_16->m_start, &VAR_16->m_stop, VAR_21))
  return (1);


 if (VAR_21 && VAR_16->m_start.cno) {




  if (FUNC_10(VAR_15, VAR_16->m_start.lno, VAR_1, &VAR_24, &VAR_18))
   return (1);
  FUNC_4(VAR_15, VAR_23, VAR_17, VAR_16->m_start.cno);
  FUNC_6(VAR_23, VAR_24, VAR_16->m_start.cno);
 } else
  VAR_23 = ((void*)0);


 if (FUNC_12(VAR_15, &VAR_16->m_start, &VAR_16->m_stop, VAR_21))
  return (1);


 if (VAR_21) {
  if (FUNC_11(VAR_15, VAR_16->m_start.lno, VAR_23, VAR_16->m_start.cno))
   return (1);
  VAR_15->lno = VAR_16->m_start.lno;
  VAR_18 = VAR_15->cno = VAR_16->m_start.cno;
 }


 if (FUNC_9(VAR_15, VAR_16->m_start.lno, &VAR_24, &VAR_18, &VAR_20)) {
  if (!VAR_20)
   return (1);
  VAR_18 = 0;
 }


 if (VAR_16->m_start.cno >= VAR_18)
  FUNC_5(VAR_7);

 VAR_22 = FUNC_16(VAR_15, VAR_16, ((void*)0), VAR_24, VAR_18,
     0, VAR_3, FUNC_2(VAR_16, VAR_11) ? VAR_16->count : 1, VAR_19);

 if (VAR_23 != ((void*)0))
  FUNC_0(VAR_15, VAR_23, VAR_17);
 return (VAR_22);
}
