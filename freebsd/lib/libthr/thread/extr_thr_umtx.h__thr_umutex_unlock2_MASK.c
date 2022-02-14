
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct umutex*) ;
 int FUNC_2 (struct umutex*,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int*,int,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct umutex *VAR_8, uint32_t VAR_9, int *VAR_10)
{
 uint32_t VAR_11, VAR_12;
 bool VAR_13;

 VAR_11 = VAR_8->m_flags;
 VAR_13 = (VAR_11 & VAR_3) != 0;

 if ((VAR_11 & (VAR_5 | VAR_4)) != 0) {
  if (FUNC_3(&VAR_8->m_owner, VAR_9, VAR_13 ?
      VAR_6 : VAR_7))
   return (0);
  return (FUNC_1(VAR_8));
 }

 do {
  VAR_12 = VAR_8->m_owner;
  if (FUNC_0((VAR_12 & ~VAR_2) != VAR_9))
   return (VAR_0);
 } while (FUNC_0(!FUNC_3(&VAR_8->m_owner, VAR_12,
     VAR_13 ? VAR_6 : VAR_7)));
 if ((VAR_12 & VAR_2) != 0) {
  if (VAR_10 == ((void*)0) || VAR_13)
   (void)FUNC_2(VAR_8, VAR_1,
       VAR_11, 0, 0);
  else
   *VAR_10 = 1;
 }
 return (0);
}
