
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,void*) ;

__attribute__((used)) static int *
FUNC_6(void)
{
 static int VAR_4 = 0;
 int *VAR_5;






 if (FUNC_3())
  return (&VAR_4);
 if (FUNC_4(&VAR_3, VAR_2) != 0 || VAR_1 != 0)
  return (&VAR_4);
 if ((VAR_5 = (int *)FUNC_2(VAR_0)) == ((void*)0)) {
  VAR_5 = (int *)FUNC_1(sizeof (int));
  if (FUNC_5(VAR_0, (void *) VAR_5) != 0) {
   FUNC_0(VAR_5);
   return (&VAR_4);
  }
  *VAR_5 = 0;
 }
 return (VAR_5);
}
