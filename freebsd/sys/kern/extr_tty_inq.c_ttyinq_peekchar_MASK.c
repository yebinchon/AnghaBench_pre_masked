
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {char* tib_data; } ;
struct ttyinq {int ti_linestart; int ti_end; struct ttyinq_block* ti_lastblock; } ;


 int FUNC_0 (struct ttyinq_block*,unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

int
FUNC_2(struct ttyinq *VAR_1, char *VAR_2, int *VAR_3)
{
 unsigned int VAR_4;
 struct ttyinq_block *VAR_5 = VAR_1->ti_lastblock;

 if (VAR_1->ti_linestart == VAR_1->ti_end)
  return (-1);

 FUNC_1(VAR_1->ti_end > 0);
 VAR_4 = (VAR_1->ti_end - 1) % VAR_0;

 *VAR_2 = VAR_5->tib_data[VAR_4];
 *VAR_3 = FUNC_0(VAR_5, VAR_4);

 return (0);
}
