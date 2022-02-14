
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct umutex {int m_flags; scalar_t__ m_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct umutex*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_3(struct umutex *VAR_8, uint32_t VAR_9)
{

 if (FUNC_2(&VAR_8->m_owner, VAR_7, VAR_9))
  return (0);
 if (FUNC_0((uint32_t)VAR_8->m_owner == VAR_6) &&
     FUNC_2(&VAR_8->m_owner, VAR_6,
     VAR_9 | VAR_3))
  return (VAR_2);
 if (FUNC_0((uint32_t)VAR_8->m_owner == VAR_5))
  return (VAR_1);
 if ((VAR_8->m_flags & VAR_4) == 0)
  return (VAR_0);
 return (FUNC_1(VAR_8));
}
