
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct _umtx_op_args {int val; scalar_t__ obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char**,char**,int) ;
 int FUNC_2 (struct thread*,char*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, struct _umtx_op_args *VAR_3)
{
 char *VAR_4[VAR_0], **VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = (char **)VAR_3->obj;
 VAR_7 = 0;
 for (VAR_6 = VAR_3->val, VAR_9 = 0; VAR_6 > 0; VAR_6 -= VAR_10,
     VAR_9 += VAR_10) {
  VAR_10 = FUNC_0(VAR_6, VAR_0);
  VAR_7 = FUNC_1(VAR_5 + VAR_9, VAR_4, VAR_10 * sizeof(char *));
  if (VAR_7 != 0)
   break;
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8)
   FUNC_2(VAR_2, VAR_4[VAR_8], VAR_1, 1);
  FUNC_3();
 }
 return (VAR_7);
}
