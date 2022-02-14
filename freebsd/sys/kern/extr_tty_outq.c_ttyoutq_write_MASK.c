
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyoutq_block {scalar_t__ tob_data; struct ttyoutq_block* tob_next; } ;
struct ttyoutq {unsigned int to_end; scalar_t__ to_begin; struct ttyoutq_block* to_lastblock; struct ttyoutq_block* to_firstblock; } ;


 size_t FUNC_0 (size_t,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (scalar_t__,char const*,size_t) ;

size_t
FUNC_3(struct ttyoutq *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_2;
 struct ttyoutq_block *VAR_5;
 unsigned int VAR_6;
 size_t VAR_7;

 while (VAR_3 > 0) {
  VAR_6 = VAR_1->to_end % VAR_0;

  if (VAR_1->to_end == 0) {

   FUNC_1(VAR_1->to_begin == 0);
   VAR_5 = VAR_1->to_firstblock;
   if (VAR_5 == ((void*)0)) {

    break;
   }
   VAR_1->to_lastblock = VAR_5;
  } else if (VAR_6 == 0) {

   VAR_5 = VAR_1->to_lastblock->tob_next;
   if (VAR_5 == ((void*)0)) {

    break;
   }
   VAR_1->to_lastblock = VAR_5;
  } else {
   VAR_5 = VAR_1->to_lastblock;
  }


  VAR_7 = FUNC_0(VAR_3, VAR_0 - VAR_6);
  FUNC_1(VAR_7 > 0);
  FUNC_2(VAR_5->tob_data + VAR_6, VAR_4, VAR_7);

  VAR_4 += VAR_7;
  VAR_3 -= VAR_7;
  VAR_1->to_end += VAR_7;
 }

 return (VAR_4 - (const char *)VAR_2);
}
