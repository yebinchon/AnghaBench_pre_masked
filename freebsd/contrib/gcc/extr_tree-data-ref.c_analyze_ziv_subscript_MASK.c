
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int num_ziv_unimplemented; int num_ziv_independent; int num_ziv_dependent; int num_ziv; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (tree VAR_9,
         tree VAR_10,
         tree *VAR_11,
         tree *VAR_12,
         tree *VAR_13)
{
  tree VAR_14;
  VAR_4.num_ziv++;

  if (VAR_5 && (VAR_6 & VAR_1))
    FUNC_3 (VAR_5, "(analyze_ziv_subscript \n");

  VAR_9 = FUNC_1 (VAR_7, VAR_9, VAR_0);
  VAR_10 = FUNC_1 (VAR_7, VAR_10, VAR_0);
  VAR_14 = FUNC_2 (VAR_7, VAR_9, VAR_10);

  switch (FUNC_0 (VAR_14))
    {
    case 128:
      if (FUNC_4 (VAR_14))
 {


   *VAR_11 = VAR_8;
   *VAR_12 = VAR_8;
   *VAR_13 = VAR_2;
   VAR_4.num_ziv_dependent++;
 }
      else
 {

   *VAR_11 = VAR_3;
   *VAR_12 = VAR_3;
   *VAR_13 = VAR_8;
   VAR_4.num_ziv_independent++;
 }
      break;

    default:


      if (VAR_5 && (VAR_6 & VAR_1))
 FUNC_3 (VAR_5, "ziv test failed: difference is non-integer.\n");

      *VAR_11 = VAR_2;
      *VAR_12 = VAR_2;
      *VAR_13 = VAR_2;
      VAR_4.num_ziv_unimplemented++;
      break;
    }

  if (VAR_5 && (VAR_6 & VAR_1))
    FUNC_3 (VAR_5, ")\n");
}
