
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_frame {int regcache; } ;


 int VAR_0 ;
 int FUNC_0 (struct dummy_frame**) ;
 struct dummy_frame* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4 (void)
{
  struct dummy_frame *VAR_2 = VAR_1;




  if (!VAR_2)
    FUNC_1 ("Can't pop dummy frame!");
  FUNC_3 (VAR_0, VAR_2->regcache);
  FUNC_2 ();

  FUNC_0 (&VAR_1);
}
