
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
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct umutex*,int) ;
 int VAR_11 ;
 int FUNC_2 (struct umutex*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int*,int,int) ;

int
FUNC_4(struct umutex *VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14;
 int VAR_15;

 if (!VAR_11)
  return (FUNC_1(VAR_12, VAR_13));
 if ((VAR_12->m_flags & (VAR_8 | VAR_7)) != 0)
  return (FUNC_2(VAR_12, VAR_4, 0, 0, 0));

 for (;;) {
  VAR_15 = VAR_3;
  while (VAR_15--) {
   VAR_14 = VAR_12->m_owner;
   if ((VAR_14 & ~VAR_6) == 0 &&
       FUNC_3(&VAR_12->m_owner, VAR_14,
       VAR_13 | VAR_14))
    return (0);
   if (FUNC_0(VAR_14 == VAR_10) &&
       FUNC_3(&VAR_12->m_owner, VAR_14,
       VAR_13 | VAR_6))
    return (VAR_2);
   if (FUNC_0(VAR_14 == VAR_9))
    return (VAR_1);
   VAR_0;
  }


  FUNC_2(VAR_12, VAR_5, 0, 0, 0);
 }
}
