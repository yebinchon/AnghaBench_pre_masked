
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {char* tib_data; } ;
struct ttyinq {unsigned int ti_begin; size_t ti_linestart; struct ttyinq_block* ti_firstblock; } ;


 int FUNC_0 (struct ttyinq_block*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,size_t) ;
 int FUNC_2 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char) ;

size_t
FUNC_4(struct ttyinq *VAR_1, const char *VAR_2, size_t VAR_3,
    char *VAR_4)
{
 struct ttyinq_block *VAR_5 = VAR_1->ti_firstblock;
 unsigned int VAR_6 = VAR_1->ti_begin;
 unsigned int VAR_7 = FUNC_1(FUNC_1(VAR_0, VAR_1->ti_linestart),
     VAR_1->ti_begin + VAR_3);

 FUNC_2(VAR_3 > 0);

 if (VAR_5 == ((void*)0))
  return (0);

 while (VAR_6 < VAR_7) {
  if (FUNC_3(VAR_2, VAR_5->tib_data[VAR_6]) && !FUNC_0(VAR_5, VAR_6)) {
   *VAR_4 = VAR_5->tib_data[VAR_6];
   return (VAR_6 - VAR_1->ti_begin + 1);
  }
  VAR_6++;
 }


 return (VAR_7 - VAR_1->ti_begin);
}
