
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct invariant {int invno; TYPE_1__* def; } ;
struct TYPE_2__ {scalar_t__ n_uses; } ;


 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int,struct invariant*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct invariant**,unsigned int*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  unsigned VAR_3, VAR_4, VAR_5, VAR_6 = 0, VAR_7;
  struct invariant *VAR_8 = ((void*)0);
  unsigned int VAR_9 = FUNC_2 (VAR_0);

  if (!FUNC_4 (VAR_1, VAR_2))
    return;



  VAR_5 = 0;



  VAR_4 = 2;

  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++)
    {
      if (!FUNC_0 (VAR_0, VAR_3) && FUNC_1 (VAR_0, VAR_3))
 {

   VAR_4++;
 }
    }

  for (VAR_3 = 0; FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_8); VAR_3++)
    {
      if (VAR_8->def)
 VAR_5 += VAR_8->def->n_uses;
    }

  VAR_7 = 0;
  while (FUNC_5 (&VAR_8, &VAR_6,
      VAR_7, VAR_4, VAR_5) > 0)
    {
      FUNC_6 (VAR_8->invno);
      VAR_7 += VAR_6;
    }
}
