
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*,char*) ;
 int FUNC_3 (void*) ;

void
FUNC_4(void *VAR_0)
{
 FUNC_2("%p: free with %s\n", VAR_0,
   FUNC_0(VAR_0) ? "vfree" : "kfree");
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_0);
 else
  FUNC_1(VAR_0);
}
