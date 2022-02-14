
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {int dummy; } ;
struct loop {int dummy; } ;
typedef int edge ;
typedef int bitmap ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mem_ref*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mem_ref*) ;
 struct mem_ref* FUNC_5 (struct loop*,int ) ;
 int * FUNC_6 (struct loop*,unsigned int*) ;
 int FUNC_7 (struct loop*,struct mem_ref*,int ,int *,unsigned int) ;
 int FUNC_8 (struct loop*,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_9 (struct loop *VAR_0)
{
  unsigned VAR_1;
  edge *VAR_2 = FUNC_6 (VAR_0, &VAR_1);
  bitmap VAR_3;
  struct mem_ref *VAR_4;

  if (!FUNC_8 (VAR_0, VAR_2, VAR_1))
    {
      FUNC_3 (VAR_2);
      return;
    }


  VAR_3 = FUNC_0 (((void*)0));
  VAR_4 = FUNC_5 (VAR_0, VAR_3);


  FUNC_2 (VAR_4, VAR_3);


  FUNC_7 (VAR_0, VAR_4, VAR_3, VAR_2, VAR_1);

  FUNC_4 (VAR_4);
  FUNC_3 (VAR_2);
  FUNC_1 (VAR_3);
}
