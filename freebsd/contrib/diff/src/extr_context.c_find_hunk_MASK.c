
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {scalar_t__ line0; scalar_t__ deleted; scalar_t__ line1; scalar_t__ inserted; scalar_t__ ignore; struct change* link; } ;
typedef scalar_t__ lin ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;

__attribute__((used)) static struct change *
FUNC_1 (struct change *VAR_2)
{
  struct change *VAR_3;
  lin VAR_4, VAR_5;
  lin VAR_6;




  lin VAR_7 =
    (VAR_0 - 1) / 2 < VAR_1 ? VAR_0 : 2 * VAR_1 + 1;
  lin VAR_8 = VAR_1;

  do
    {

      VAR_4 = VAR_2->line0 + VAR_2->deleted;
      VAR_5 = VAR_2->line1 + VAR_2->inserted;
      VAR_3 = VAR_2;
      VAR_2 = VAR_2->link;
      VAR_6 = (VAR_3->ignore || (VAR_2 && VAR_2->ignore)
  ? VAR_8
  : VAR_7);


      if (VAR_2 && VAR_2->line0 - VAR_4 != VAR_2->line1 - VAR_5)
 FUNC_0 ();
    } while (VAR_2


      && VAR_2->line0 - VAR_4 < VAR_6);

  return VAR_3;
}
