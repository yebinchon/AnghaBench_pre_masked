
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyoutq_block {scalar_t__ tob_data; } ;
struct ttyoutq {size_t to_begin; size_t to_end; struct ttyoutq_block* to_firstblock; } ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (struct ttyoutq*,struct ttyoutq_block*) ;
 int FUNC_2 (struct ttyoutq*) ;
 int FUNC_3 (char*,scalar_t__,size_t) ;

size_t
FUNC_4(struct ttyoutq *VAR_1, void *VAR_2, size_t VAR_3)
{
 char *VAR_4 = VAR_2;

 while (VAR_3 > 0) {
  struct ttyoutq_block *VAR_5;
  size_t VAR_6, VAR_7, VAR_8;


  if (VAR_1->to_begin == VAR_1->to_end)
   break;
  VAR_5 = VAR_1->to_firstblock;
  if (VAR_5 == ((void*)0))
   break;







  VAR_6 = VAR_1->to_begin;
  VAR_7 = FUNC_0(FUNC_0(VAR_1->to_end, VAR_1->to_begin + VAR_3),
      VAR_0);
  VAR_8 = VAR_7 - VAR_6;


  FUNC_3(VAR_4, VAR_5->tob_data + VAR_6, VAR_8);
  VAR_4 += VAR_8;
  VAR_3 -= VAR_8;

  if (VAR_7 == VAR_1->to_end) {

   VAR_1->to_begin = 0;
   VAR_1->to_end = 0;
  } else if (VAR_7 == VAR_0) {

   FUNC_2(VAR_1);
   VAR_1->to_begin = 0;
   VAR_1->to_end -= VAR_0;
   FUNC_1(VAR_1, VAR_5);
  } else {

   VAR_1->to_begin += VAR_8;
  }
 }

 return (VAR_4 - (char *)VAR_2);
}
