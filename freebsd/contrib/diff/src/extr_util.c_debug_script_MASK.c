
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {long line0; long line1; long deleted; long inserted; struct change* link; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,long,long,long,long) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2 (struct change *VAR_2)
{
  FUNC_0 (VAR_1);

  for (; VAR_2; VAR_2 = VAR_2->link)
    {
      long int VAR_3 = VAR_2->line0;
      long int VAR_4 = VAR_2->line1;
      long int VAR_5 = VAR_2->deleted;
      long int VAR_6 = VAR_2->inserted;
      FUNC_1 (VAR_0, "%3ld %3ld delete %ld insert %ld\n",
        VAR_3, VAR_4, VAR_5, VAR_6);
    }

  FUNC_0 (VAR_0);
}
