
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct record_layout_info_s {int bitpos; int t; } ;
typedef int splay_tree ;
typedef struct record_layout_info_s* record_layout_info ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (struct record_layout_info_s*) ;
 int FUNC_14 (struct record_layout_info_s*,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_18 (record_layout_info VAR_4,
          tree VAR_5,
          tree VAR_6,
          splay_tree VAR_7)
{
  tree VAR_8 = VAR_0;
  bool VAR_9;
  tree VAR_10;

  if (VAR_6)
    {




      VAR_10 = FUNC_6 (VAR_6);
      VAR_9 = 0;
    }
  else
    {
      VAR_10 = FUNC_6 (VAR_5);
      VAR_9 = 1;
    }




  while (1)
    {
      struct record_layout_info_s VAR_11 = *VAR_4;


      FUNC_14 (VAR_4, VAR_5);
      VAR_8 = FUNC_10 (VAR_5);
      if (FUNC_5 (VAR_4->t) == VAR_2)
 break;


      if (!FUNC_8 (2) && VAR_6 && FUNC_2 (VAR_6))
 break;
      if (FUNC_12 (VAR_9 ? VAR_10 : VAR_6, VAR_8,
        VAR_7, VAR_9))
 {



   *VAR_4 = VAR_11;


   VAR_4->bitpos
     = FUNC_16 (VAR_1, VAR_4->bitpos,
     FUNC_9 (VAR_6
           ? FUNC_3 (VAR_10)
           : FUNC_7 (VAR_10)));
   FUNC_13 (VAR_4);
 }
      else

 break;
    }



  if (VAR_6 && FUNC_4 (FUNC_1 (VAR_6)))




    FUNC_15 (VAR_6,
        FUNC_17 (FUNC_11 (VAR_3, VAR_8),
       FUNC_11 (VAR_3,
         FUNC_0 (VAR_6))));
}
