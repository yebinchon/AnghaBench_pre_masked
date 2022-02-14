
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int dummy; } ;
typedef int bitmap ;
typedef int basic_block ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct loop*,int *,int ,int ) ;
 int FUNC_3 (struct loop*,int *) ;
 int FUNC_4 (struct loop*,int *,int ,int ) ;
 int FUNC_5 (struct loop*,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (struct loop*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9 (struct loop *VAR_0)
{
  bitmap VAR_1 = FUNC_0 (((void*)0));
  bitmap VAR_2 = FUNC_0 (((void*)0));
  bitmap VAR_3 = FUNC_0 (((void*)0));
  bitmap VAR_4 = FUNC_0 (((void*)0));
  basic_block *VAR_5 = FUNC_7 (VAR_0);

  FUNC_4 (VAR_0, VAR_5, VAR_1, VAR_3);
  FUNC_2 (VAR_0, VAR_5, VAR_1, VAR_2);
  FUNC_2 (VAR_0, VAR_5, VAR_3, VAR_4);

  FUNC_3 (VAR_0, VAR_5);
  FUNC_5 (VAR_0, VAR_5, VAR_2, VAR_4);
  FUNC_8 ();

  FUNC_1 (VAR_2);
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_1);
  FUNC_1 (VAR_3);
  FUNC_6 (VAR_5);
}
