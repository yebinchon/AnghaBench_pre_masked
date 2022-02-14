
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_8__ {int n_bits; } ;
struct TYPE_7__ {int num_total_mappings; int num_virtual_symbols; int virtual_symbols; int num_virtual_mappings; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* FUNC_12 (TYPE_2__*,unsigned int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_15 (tree VAR_7, tree VAR_8)
{
  FUNC_14 (VAR_1);


  FUNC_8 (VAR_7 != VAR_8 && FUNC_2 (VAR_7) == FUNC_2 (VAR_8));



  if (VAR_3->n_bits <= VAR_4 - 1)
    {
      unsigned int VAR_9 = VAR_4 + VAR_0;
      VAR_3 = FUNC_12 (VAR_3, VAR_9, 0);
      VAR_5 = FUNC_12 (VAR_5, VAR_9, 0);
    }



  if (!FUNC_9 (VAR_7))
    {
      tree VAR_10;
      size_t VAR_11;

      VAR_2 = 1;







      VAR_10 = FUNC_2 (VAR_7);
      VAR_11 = FUNC_0 (VAR_10);
      VAR_6.num_virtual_mappings++;
      if (!FUNC_5 (VAR_6.virtual_symbols, VAR_11))
 {
   FUNC_7 (VAR_6.virtual_symbols, VAR_11);
   VAR_6.num_virtual_symbols++;
 }
    }


  FUNC_4 (VAR_7, VAR_8);



  if (FUNC_10 (VAR_8))
    FUNC_6 (FUNC_11 (VAR_7), FUNC_11 (VAR_8));



  FUNC_1 (VAR_3, FUNC_3 (VAR_7));
  FUNC_1 (VAR_5, FUNC_3 (VAR_8));


  VAR_6.num_total_mappings++;

  FUNC_13 (VAR_1);
}
