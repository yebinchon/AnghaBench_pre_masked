
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int *) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_4 = 0;

  if (VAR_0)
    FUNC_0 (VAR_0,
      "* Phase 2: Merge and eliminate locally redundant extensions.  *\n");


  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
      if (VAR_2[VAR_4])
 {
   if (VAR_0)
     FUNC_0 (VAR_0, "Handling references for bb %d\n", VAR_4);


   FUNC_1 (VAR_2[VAR_4],
         VAR_3, ((void*)0));
 }
    }
}
