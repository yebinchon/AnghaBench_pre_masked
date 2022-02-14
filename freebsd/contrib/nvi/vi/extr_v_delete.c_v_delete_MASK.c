
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_7__ {int lno; size_t cno; } ;
struct TYPE_8__ {TYPE_1__ m_final; int m_stop; int m_start; int buffer; } ;
typedef TYPE_2__ VICMD ;
typedef int SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int ,int *,size_t*) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int) ;

int
FUNC_8(SCR *VAR_11, VICMD *VAR_12)
{
 recno_t VAR_13;
 size_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_12, VAR_7) ? VAR_0 : 0;


 if (FUNC_3(VAR_11, FUNC_1(VAR_12, VAR_4) ? &VAR_12->buffer : ((void*)0),
     &VAR_12->m_start, &VAR_12->m_stop,
     VAR_15 | (FUNC_1(VAR_12, VAR_5) ? VAR_2 : VAR_1)))
  return (1);


 if (FUNC_7(VAR_11, &VAR_12->m_start, &VAR_12->m_stop, VAR_15))
  return (1);





 if (!FUNC_4(VAR_11, VAR_12->m_final.lno + 1)) {
  if (FUNC_6(VAR_11, &VAR_13))
   return (1);
  if (VAR_13 == 0) {
   VAR_12->m_final.lno = 1;
   VAR_12->m_final.cno = 0;
   return (0);
  }
 }






 if (FUNC_5(VAR_11, VAR_12->m_final.lno, 0, ((void*)0), &VAR_14)) {
  if (FUNC_5(VAR_11, VAR_13, VAR_3, ((void*)0), &VAR_14))
   return (1);
  VAR_12->m_final.lno = VAR_13;
 }
 if (!FUNC_1(VAR_12, VAR_7)) {
  FUNC_0(VAR_12, VAR_8);
  FUNC_2(VAR_12, VAR_9);


  if (VAR_12->m_final.cno >= VAR_14)
   VAR_12->m_final.cno = VAR_14 ? VAR_14 - 1 : 0;
 }






 if (FUNC_1(VAR_12, VAR_6)) {
  FUNC_0(VAR_12, VAR_8);
  FUNC_2(VAR_12, VAR_10);
 }
 return (0);
}
