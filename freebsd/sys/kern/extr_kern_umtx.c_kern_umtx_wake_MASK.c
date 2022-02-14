
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_key {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ,struct umtx_key*) ;
 int FUNC_1 (struct umtx_key*) ;
 int FUNC_2 (struct umtx_key*) ;
 int FUNC_3 (struct umtx_key*,int) ;
 int FUNC_4 (struct umtx_key*) ;

int
FUNC_5(struct thread *VAR_3, void *VAR_4, int VAR_5, int VAR_6)
{
 struct umtx_key VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_4, VAR_2,
     VAR_6 ? VAR_1 : VAR_0, &VAR_7)) != 0)
  return (VAR_8);
 FUNC_2(&VAR_7);
 FUNC_3(&VAR_7, VAR_5);
 FUNC_4(&VAR_7);
 FUNC_1(&VAR_7);
 return (0);
}
