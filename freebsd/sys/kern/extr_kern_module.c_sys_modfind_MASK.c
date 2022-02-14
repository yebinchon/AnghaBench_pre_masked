
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct modfind_args {int name; } ;
typedef int * module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;

int
FUNC_3(struct thread *VAR_4, struct modfind_args *VAR_5)
{
 int VAR_6 = 0;
 char VAR_7[VAR_1];
 module_t VAR_8;

 if ((VAR_6 = FUNC_0(VAR_5->name, VAR_7, sizeof VAR_7, 0)) != 0)
  return (VAR_6);

 VAR_2;
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0))
  VAR_6 = VAR_0;
 else
  VAR_4->td_retval[0] = FUNC_1(VAR_8);
 VAR_3;
 return (VAR_6);
}
