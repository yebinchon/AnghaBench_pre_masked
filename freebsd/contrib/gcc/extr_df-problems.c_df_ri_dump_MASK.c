
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataflow {int flags; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (struct dataflow *VAR_1, FILE *VAR_2)
{
  FUNC_3 (VAR_2, FUNC_2 ());

  if (VAR_1->flags & VAR_0)
    {
      FUNC_1 (VAR_2, "Register info:\n");
      FUNC_0 (VAR_2, -1);
    }
}
