
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {scalar_t__ tib_data; struct ttyinq_block* tib_next; } ;
struct ttyinq {unsigned int ti_end; scalar_t__ ti_begin; struct ttyinq_block* ti_lastblock; struct ttyinq_block* ti_firstblock; } ;


 size_t FUNC_0 (size_t,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (scalar_t__,char const*,size_t) ;
 int FUNC_3 (struct ttyinq_block*,unsigned int,size_t,int) ;

size_t
FUNC_4(struct ttyinq *VAR_1, const void *VAR_2, size_t VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_2;
 struct ttyinq_block *VAR_6;
 unsigned int VAR_7;
 size_t VAR_8;

 while (VAR_3 > 0) {
  VAR_7 = VAR_1->ti_end % VAR_0;

  if (VAR_1->ti_end == 0) {

   FUNC_1(VAR_1->ti_begin == 0);
   VAR_6 = VAR_1->ti_firstblock;
   if (VAR_6 == ((void*)0)) {

    break;
   }
   VAR_1->ti_lastblock = VAR_6;
  } else if (VAR_7 == 0) {

   VAR_6 = VAR_1->ti_lastblock->tib_next;
   if (VAR_6 == ((void*)0)) {

    break;
   }
   VAR_1->ti_lastblock = VAR_6;
  } else {
   VAR_6 = VAR_1->ti_lastblock;
  }


  VAR_8 = FUNC_0(VAR_3, VAR_0 - VAR_7);
  FUNC_1(VAR_8 > 0);
  FUNC_2(VAR_6->tib_data + VAR_7, VAR_5, VAR_8);


  FUNC_3(VAR_6, VAR_7, VAR_8, VAR_4);

  VAR_5 += VAR_8;
  VAR_3 -= VAR_8;
  VAR_1->ti_end += VAR_8;
 }

 return (VAR_5 - (const char *)VAR_2);
}
