
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_flags; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct thread*,struct umutex*,int,int) ;
 int FUNC_1 (struct thread*,struct umutex*,int,int) ;
 int FUNC_2 (struct thread*,struct umutex*,int,int) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, struct umutex *VAR_3, bool VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_3->m_flags, &VAR_5);
 if (VAR_6 == -1)
  return (VAR_0);

 switch (VAR_5 & (129 | 128)) {
 case 0:
  return (FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4));
 case 129:
  return (FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4));
 case 128:
  return (FUNC_2(VAR_2, VAR_3, VAR_5, VAR_4));
 }

 return (VAR_1);
}
