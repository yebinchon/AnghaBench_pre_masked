
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_flags; int m_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct umutex*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int*,int,int) ;

int
FUNC_2(struct umutex *VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11;

 if ((VAR_9->m_flags & (VAR_6 | VAR_5)) != 0)
  return (FUNC_0(VAR_9, VAR_2, 0, 0, 0));

 for (;;) {
  VAR_11 = VAR_9->m_owner;
  if ((VAR_11 & ~VAR_4) == 0 &&
       FUNC_1(&VAR_9->m_owner, VAR_11, VAR_10 | VAR_11))
   return (0);
  if (VAR_11 == VAR_8 &&
       FUNC_1(&VAR_9->m_owner, VAR_11,
       VAR_10 | VAR_4))
   return (VAR_1);
  if (VAR_11 == VAR_7)
   return (VAR_0);


  FUNC_0(VAR_9, VAR_3, 0, 0, 0);
 }
}
