
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_pages; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (long) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (long) ;
 int FUNC_3 (void (*) (void*),int *,int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 int VAR_4 = 0;
 long VAR_5;

 FUNC_4(&VAR_0);
 for (;;) {
  int VAR_6;

  do {
   VAR_5 = FUNC_0() - VAR_1.current_pages;
   if (VAR_5 > 0)
    VAR_4 = (FUNC_2(VAR_5) != 0);
   if (VAR_5 < 0)
    VAR_4 = (FUNC_1(-VAR_5) != 0);

  } while ((VAR_5 != 0) && !VAR_4);


  if (FUNC_0() != VAR_1.current_pages)
   VAR_6 = VAR_2;
  else
   VAR_6 = 0;

  FUNC_3(FUNC_6, &VAR_0, 0, "balloon",
         VAR_6);
 }
 FUNC_5(&VAR_0);
}
