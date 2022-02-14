
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {struct table_elt* next_same_hash; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct table_elt* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct table_elt** VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  int VAR_9;

  VAR_4 = 0;


  VAR_1++;


  FUNC_0 (VAR_3);




  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
      struct table_elt *VAR_10;

      VAR_10 = VAR_7[VAR_9];
      if (VAR_10 != ((void*)0))
 {
   struct table_elt *VAR_11 = VAR_10;

   VAR_7[VAR_9] = ((void*)0);

   while (VAR_11->next_same_hash != ((void*)0))
     VAR_11 = VAR_11->next_same_hash;




   VAR_11->next_same_hash = VAR_2;
   VAR_2 = VAR_10;
 }
    }

  VAR_8 = 0;





}
