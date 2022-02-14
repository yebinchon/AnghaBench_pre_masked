
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argvec {size_t bufsize; int argc; struct argvec* buf; int * argv; } ;


 int FUNC_0 (struct argvec*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static struct argvec *
FUNC_2(size_t VAR_0)
{
 struct argvec *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->bufsize = VAR_0;
 VAR_1->buf = FUNC_1(VAR_1->bufsize);
 if (VAR_1->buf == ((void*)0)) {
  FUNC_0(VAR_1);
  return (((void*)0));
 }
 VAR_1->argc = 32;
 VAR_1->argv = FUNC_1(sizeof(char *) * VAR_1->argc);
 if (VAR_1->argv == ((void*)0)) {
  FUNC_0(VAR_1->buf);
  FUNC_0(VAR_1);
  return (((void*)0));
 }
 return VAR_1;
}
