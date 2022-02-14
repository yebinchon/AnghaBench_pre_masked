
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_owner; int m_flags; } ;
struct umtx_key {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (struct umutex*,int ,int ,struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;
 int FUNC_6 (struct umtx_key*) ;
 int FUNC_7 (struct thread*,int) ;
 int FUNC_8 (struct umtx_key*) ;
 int FUNC_9 (struct umtx_key*) ;
 int FUNC_10 (struct umtx_key*,int) ;
 int FUNC_11 (struct umtx_key*) ;
 int FUNC_12 (struct umtx_key*) ;

__attribute__((used)) static int
FUNC_13(struct thread *VAR_6, struct umutex *VAR_7)
{
 struct umtx_key VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;
 int VAR_12;

again:
 VAR_11 = FUNC_3(&VAR_7->m_owner, &VAR_9);
 if (VAR_11 == -1)
  return (VAR_0);

 if ((VAR_9 & ~VAR_2) != 0 && VAR_9 != VAR_4 &&
     VAR_9 != VAR_3)
  return (0);

 VAR_11 = FUNC_3(&VAR_7->m_flags, &VAR_10);
 if (VAR_11 == -1)
  return (VAR_0);


 if ((VAR_11 = FUNC_4(VAR_7, VAR_1, FUNC_0(VAR_10),
     &VAR_8)) != 0)
  return (VAR_11);

 FUNC_9(&VAR_8);
 FUNC_6(&VAR_8);
 VAR_12 = FUNC_8(&VAR_8);
 FUNC_12(&VAR_8);

 if (VAR_12 <= 1 && VAR_9 != VAR_4 &&
     VAR_9 != VAR_3) {
  VAR_11 = FUNC_2(&VAR_7->m_owner, VAR_2, &VAR_9,
      VAR_5);
  if (VAR_11 == -1) {
   VAR_11 = VAR_0;
  } else if (VAR_11 == 1) {
   FUNC_9(&VAR_8);
   FUNC_11(&VAR_8);
   FUNC_12(&VAR_8);
   FUNC_5(&VAR_8);
   VAR_11 = FUNC_7(VAR_6, 0);
   if (VAR_11 != 0)
    return (VAR_11);
   goto again;
  }
 }

 FUNC_9(&VAR_8);
 if (VAR_11 == 0 && VAR_12 != 0) {
  FUNC_1((VAR_9 & ~VAR_2) == 0 ||
      VAR_9 == VAR_4 ||
      VAR_9 == VAR_3);
  FUNC_10(&VAR_8, 1);
 }
 FUNC_11(&VAR_8);
 FUNC_12(&VAR_8);
 FUNC_5(&VAR_8);
 return (VAR_11);
}
