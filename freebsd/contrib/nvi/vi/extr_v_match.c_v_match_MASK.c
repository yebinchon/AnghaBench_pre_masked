
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {size_t cno; int lno; } ;
struct TYPE_13__ {TYPE_4__ m_start; TYPE_4__ m_stop; TYPE_4__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_12__ {size_t cs_cno; scalar_t__ cs_flags; int cs_ch; int cs_lno; } ;
typedef TYPE_1__ VCS ;
struct TYPE_15__ {int* mcs; } ;
typedef int SCR ;
typedef TYPE_4__ MARK ;
typedef int const CHAR_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int* FUNC_2 (int const*,int) ;
 TYPE_9__* FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int ,int const**,size_t*,int*) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int const**,size_t*) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int *,int ,char*) ;
 scalar_t__ FUNC_11 (int *,int ,size_t*) ;

int
FUNC_12(SCR *VAR_5, VICMD *VAR_6)
{
 VCS VAR_7;
 MARK *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, (*VAR_16)(SCR *, VCS *);
 CHAR_T *VAR_17;
 CHAR_T *VAR_18;
 const CHAR_T *VAR_19;







 VAR_19 = FUNC_3(VAR_5)->mcs;
 if (FUNC_7(VAR_5, VAR_6->m_start.lno, &VAR_17, &VAR_10, &VAR_13)) {
  if (VAR_13)
   goto nomatch;
  return (1);
 }
 for (VAR_11 = VAR_6->m_start.cno;; ++VAR_11) {
  if (VAR_11 >= VAR_10) {
nomatch: FUNC_10(VAR_5, VAR_3, "184|No match character on this line");
   return (1);
  }
  VAR_15 = VAR_17[VAR_11];
  VAR_18 = FUNC_2(VAR_19, VAR_15);
  if (VAR_18 != ((void*)0)) {
   VAR_12 = VAR_18 - VAR_19;
   VAR_14 = VAR_19[VAR_12 ^ 1];
   VAR_16 = VAR_12 & 1 ? FUNC_6 : FUNC_5;
   break;
  }
 }

 VAR_7.cs_lno = VAR_6->m_start.lno;
 VAR_7.cs_cno = VAR_11;
 if (FUNC_4(VAR_5, &VAR_7))
  return (1);
 for (VAR_12 = 1;;) {
  if (VAR_16(VAR_5, &VAR_7))
   return (1);
  if (VAR_7.cs_flags != 0) {
   if (VAR_7.cs_flags == VAR_0 || VAR_7.cs_flags == VAR_1)
    break;
   continue;
  }
  if (VAR_7.cs_ch == VAR_15)
   ++VAR_12;
  else if (VAR_7.cs_ch == VAR_14 && --VAR_12 == 0)
   break;
 }
 if (VAR_12) {
  FUNC_10(VAR_5, VAR_3, "185|Matching character not found");
  return (1);
 }

 VAR_6->m_stop.lno = VAR_7.cs_lno;
 VAR_6->m_stop.cno = VAR_7.cs_cno;
 if (VAR_6->m_start.lno < VAR_6->m_stop.lno ||
     (VAR_6->m_start.lno == VAR_6->m_stop.lno &&
     VAR_6->m_start.cno < VAR_6->m_stop.cno))
  VAR_6->m_final = FUNC_1(VAR_6) ? VAR_6->m_start : VAR_6->m_stop;
 else
  VAR_6->m_final = VAR_6->m_stop;
 if (!FUNC_1(VAR_6) || VAR_6->m_start.lno == VAR_6->m_stop.lno)
  return (0);
 VAR_8 = VAR_6->m_start.lno < VAR_6->m_stop.lno ? &VAR_6->m_start : &VAR_6->m_stop;
 if (VAR_8->cno != 0) {
  VAR_9 = 0;
  if (FUNC_11(VAR_5, VAR_8->lno, &VAR_9))
   return (1);
  if (VAR_9 < VAR_8->cno)
   return (0);
 }
 VAR_8 = VAR_6->m_start.lno < VAR_6->m_stop.lno ? &VAR_6->m_stop : &VAR_6->m_start;
 if (FUNC_8(VAR_5, VAR_8->lno, VAR_2, &VAR_17, &VAR_10))
  return (1);
 for (VAR_17 += VAR_8->cno + 1, VAR_10 -= VAR_8->cno; --VAR_10; ++VAR_17)
  if (!FUNC_9(*VAR_17))
   return (0);
 FUNC_0(VAR_6, VAR_4);
 return (0);
}
