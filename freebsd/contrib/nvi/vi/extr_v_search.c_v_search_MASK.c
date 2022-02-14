
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int dir_t ;
struct TYPE_5__ {int m_stop; int m_final; int m_start; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;
typedef int CHAR_T ;




 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int *,int *,size_t,int *,int ) ;
 int FUNC_5 (int *,int *,int *,int *,size_t,int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_4, VICMD *VAR_5, CHAR_T *VAR_6, size_t VAR_7, u_int VAR_8, dir_t VAR_9)
{

 FUNC_2(VAR_2);


 if (FUNC_0(VAR_5))
  FUNC_2(VAR_1);





 if (!FUNC_1(VAR_4))
  FUNC_2(VAR_3);

 switch (VAR_9) {
 case 130:
  if (FUNC_4(VAR_4,
      &VAR_5->m_start, &VAR_5->m_stop, VAR_6, VAR_7, ((void*)0), VAR_8))
   return (1);
  break;
 case 129:
  if (FUNC_5(VAR_4,
      &VAR_5->m_start, &VAR_5->m_stop, VAR_6, VAR_7, ((void*)0), VAR_8))
   return (1);
  break;
 case 128:
  FUNC_6(VAR_4, VAR_0, "189|No previous search pattern");
  return (1);
 default:
  FUNC_3();
 }


 if (FUNC_0(VAR_5)) {
  if (FUNC_7(VAR_4, VAR_5, 0))
   return(1);
 } else
  VAR_5->m_final = VAR_5->m_stop;
 return (0);
}
