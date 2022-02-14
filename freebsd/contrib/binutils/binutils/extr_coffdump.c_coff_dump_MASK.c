
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_ofile {int nsources; int nsections; scalar_t__ sections; int source_head; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4 (struct coff_ofile *VAR_0)
{
  int VAR_1;

  FUNC_3 ("Coff dump");
  FUNC_2 ();
  FUNC_3 ("#souces %d", VAR_0->nsources);
  FUNC_2 ();
  FUNC_1 (VAR_0->source_head);

  for (VAR_1 = 0; VAR_1 < VAR_0->nsections; VAR_1++)
    FUNC_0 (VAR_0->sections + VAR_1);
}
