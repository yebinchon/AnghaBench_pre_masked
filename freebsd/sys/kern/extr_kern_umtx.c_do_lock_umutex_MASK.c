
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umutex {int m_flags; } ;
struct thread {int dummy; } ;
struct _umtx_time {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct thread*,struct umutex*,int,struct _umtx_time*,int) ;
 int FUNC_1 (struct thread*,struct umutex*,int,struct _umtx_time*,int) ;
 int FUNC_2 (struct thread*,struct umutex*,int,struct _umtx_time*,int) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_5, struct umutex *VAR_6,
    struct _umtx_time *VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(&VAR_6->m_flags, &VAR_9);
 if (VAR_10 == -1)
  return (VAR_0);

 switch (VAR_9 & (129 | 128)) {
 case 0:
  VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8);
  break;
 case 129:
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8);
  break;
 default:
  return (VAR_2);
 }
 if (VAR_7 == ((void*)0)) {
  if (VAR_10 == VAR_1 && VAR_8 != VAR_4)
   VAR_10 = VAR_3;
 } else {

  if (VAR_10 == VAR_3)
   VAR_10 = VAR_1;
 }
 return (VAR_10);
}
