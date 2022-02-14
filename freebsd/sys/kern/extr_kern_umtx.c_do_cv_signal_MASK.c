
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umtx_key {int dummy; } ;
struct ucond {int c_has_waiters; int c_flags; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ucond*,int ,int ,struct umtx_key*) ;
 int FUNC_4 (struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;
 int FUNC_6 (struct umtx_key*) ;
 int FUNC_7 (struct umtx_key*) ;
 int FUNC_8 (struct umtx_key*,int) ;
 int FUNC_9 (struct umtx_key*) ;
 int FUNC_10 (struct umtx_key*) ;

__attribute__((used)) static int
FUNC_11(struct thread *VAR_2, struct ucond *VAR_3)
{
 struct umtx_key VAR_4;
 int VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8;

 VAR_5 = FUNC_1(&VAR_3->c_flags, &VAR_8);
 if (VAR_5 == -1)
  return (VAR_0);
 if ((VAR_5 = FUNC_3(VAR_3, VAR_1, FUNC_0(VAR_8), &VAR_4)) != 0)
  return (VAR_5);
 FUNC_7(&VAR_4);
 FUNC_5(&VAR_4);
 VAR_6 = FUNC_6(&VAR_4);
 VAR_7 = FUNC_8(&VAR_4, 1);
 if (VAR_6 <= VAR_7) {
  FUNC_10(&VAR_4);
  VAR_5 = FUNC_2(&VAR_3->c_has_waiters, 0);
  if (VAR_5 == -1)
   VAR_5 = VAR_0;
  FUNC_7(&VAR_4);
 }
 FUNC_9(&VAR_4);
 FUNC_10(&VAR_4);
 FUNC_4(&VAR_4);
 return (VAR_5);
}
