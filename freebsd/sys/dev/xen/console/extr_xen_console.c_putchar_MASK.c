
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct putchar_arg {int* buf; int n_next; int size; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, void *VAR_1)
{
 struct putchar_arg *VAR_2;

 VAR_2 = (struct putchar_arg *)VAR_1;

 if (VAR_2->buf == ((void*)0)) {




  FUNC_0((char *)&VAR_0, 1);
 } else {
  VAR_2->buf[VAR_2->n_next++] = VAR_0;
  if ((VAR_2->size == VAR_2->n_next) || (VAR_0 = '\0')) {

   FUNC_0(VAR_2->buf, VAR_2->n_next);
   VAR_2->n_next = 0;
  }
 }
}
