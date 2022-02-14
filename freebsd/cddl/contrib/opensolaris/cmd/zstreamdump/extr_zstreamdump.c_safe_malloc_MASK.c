
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,size_t) ;
 void* FUNC_2 (size_t) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_3(size_t VAR_1)
{
 void *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0)) {
  (void) FUNC_1(VAR_0, "ERROR; failed to allocate %zu bytes\n",
      VAR_1);
  FUNC_0();
 }
 return (VAR_2);
}
