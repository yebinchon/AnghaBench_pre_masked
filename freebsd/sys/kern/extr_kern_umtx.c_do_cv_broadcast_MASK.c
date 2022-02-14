
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
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ucond*,int ,int ,struct umtx_key*) ;
 int FUNC_4 (struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;
 int FUNC_6 (struct umtx_key*) ;
 int FUNC_7 (struct umtx_key*,int ) ;
 int FUNC_8 (struct umtx_key*) ;
 int FUNC_9 (struct umtx_key*) ;

__attribute__((used)) static int
FUNC_10(struct thread *VAR_3, struct ucond *VAR_4)
{
 struct umtx_key VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_1(&VAR_4->c_flags, &VAR_7);
 if (VAR_6 == -1)
  return (VAR_0);
 if ((VAR_6 = FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_7), &VAR_5)) != 0)
  return (VAR_6);

 FUNC_6(&VAR_5);
 FUNC_5(&VAR_5);
 FUNC_7(&VAR_5, VAR_1);
 FUNC_9(&VAR_5);

 VAR_6 = FUNC_2(&VAR_4->c_has_waiters, 0);
 if (VAR_6 == -1)
  VAR_6 = VAR_0;

 FUNC_8(&VAR_5);

 FUNC_4(&VAR_5);
 return (VAR_6);
}
