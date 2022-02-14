
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_2 ;

int
FUNC_1()
{
 (void) FUNC_0(VAR_2, "%d of %d tests completed successfully\n",
   VAR_0 - VAR_1, VAR_0);
 if (VAR_1 != 0)
  (void) FUNC_0(VAR_2, "*** %d error%s in test! ***\n",
    VAR_1,
    VAR_1 > 1 ? "s" : "");

 return VAR_1;
}
