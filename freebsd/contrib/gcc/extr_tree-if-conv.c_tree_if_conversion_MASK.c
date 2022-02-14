
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct loop {unsigned int num_nodes; } ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_9__ {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct loop*) ;
 int FUNC_6 (struct loop*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (TYPE_1__**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct loop*,int) ;
 TYPE_1__** VAR_5 ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct loop*,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_14 (struct loop *VAR_6, bool VAR_7)
{
  basic_block VAR_8;
  block_stmt_iterator VAR_9;
  unsigned int VAR_10;

  VAR_5 = ((void*)0);



  if (!FUNC_10 (VAR_6, VAR_7))
    {
      if (VAR_3 && (VAR_4 & VAR_2))
 FUNC_7 (VAR_3,"-------------------------\n");
      if (VAR_5)
 {
   FUNC_8 (VAR_5);
   VAR_5 = ((void*)0);
 }
      FUNC_9 (VAR_0);
      return 0;
    }


  for (VAR_10 = 0; VAR_10 < VAR_6->num_nodes; VAR_10++)
    {
      tree VAR_11;

      VAR_8 = VAR_5 [VAR_10];


      VAR_11 = VAR_8->aux;




      for (VAR_9 = FUNC_3 (VAR_8); !FUNC_1 (VAR_9); )
 {
   tree VAR_12 = FUNC_4 (VAR_9);
   VAR_11 = FUNC_13 (VAR_6, VAR_12, VAR_11, &VAR_9);
   if (!FUNC_1 (VAR_9))
     FUNC_2 (&VAR_9);
 }



      if (FUNC_12 (VAR_8))
 {
   basic_block VAR_13 = FUNC_11 (VAR_8);
   if (VAR_11 != VAR_1)
     FUNC_0 (VAR_13, VAR_11);
 }
    }




  FUNC_6 (VAR_6);


  FUNC_5 (VAR_6);
  FUNC_8 (VAR_5);
  VAR_5 = ((void*)0);

  return 1;
}
