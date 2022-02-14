
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct loop {unsigned int num_nodes; TYPE_1__* header; } ;
typedef scalar_t__ rtx ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {unsigned int frequency; } ;
struct TYPE_7__ {scalar_t__ frequency; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__**) ;
 TYPE_2__** FUNC_5 (struct loop*) ;

int
FUNC_6 (struct loop *VAR_1)
{
  basic_block *VAR_2, VAR_3;
  unsigned VAR_4, VAR_5, VAR_6, VAR_7;
  rtx VAR_8;

  VAR_6 = 0;
  VAR_2 = FUNC_5 (VAR_1);
  for (VAR_4 = 0; VAR_4 < VAR_1->num_nodes; VAR_4++)
    {
      VAR_3 = VAR_2[VAR_4];

      VAR_5 = 1;
      for (VAR_8 = FUNC_1 (VAR_3); VAR_8 != FUNC_0 (VAR_3); VAR_8 = FUNC_3 (VAR_8))
 if (FUNC_2 (VAR_8))
   VAR_5++;

      VAR_7 = VAR_1->header->frequency == 0
       ? VAR_0
       : (VAR_3->frequency * VAR_0) / VAR_1->header->frequency;
      VAR_6 += VAR_5 * VAR_7;
    }
  FUNC_4(VAR_2);

  VAR_6 /= VAR_0;
  if (!VAR_6)
    VAR_6 = 1;

  return VAR_6;
}
