
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __gthread_key_t ;
typedef int DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,void (*) (void*)) ;

int
FUNC_3 (__gthread_key_t *VAR_0, void (*VAR_1) (void *))
{
  int VAR_2 = 0;
  DWORD VAR_3 = FUNC_1 ();
  if (VAR_3 != 0xFFFFFFFF)
    {
      *VAR_0 = VAR_3;





    }
  else
    VAR_2 = (int) FUNC_0 ();
  return VAR_2;
}
