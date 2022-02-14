
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {size_t uio_resid; } ;
struct ttyinq_block {char* tib_data; } ;
struct ttyinq {size_t ti_begin; size_t ti_linestart; size_t ti_end; size_t ti_reprint; struct ttyinq_block* ti_firstblock; } ;
struct tty {int dummy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int) ;
 size_t VAR_1 ;
 int FUNC_3 (struct ttyinq*,struct ttyinq_block*) ;
 int FUNC_4 (struct ttyinq*) ;
 int FUNC_5 (char*,char*,size_t) ;
 scalar_t__ FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;
 int FUNC_9 (char*,size_t,struct uio*) ;

int
FUNC_10(struct ttyinq *VAR_2, struct tty *VAR_3, struct uio *VAR_4,
    size_t VAR_5, size_t VAR_6)
{

 FUNC_2(VAR_5 <= VAR_4->uio_resid);

 while (VAR_5 > 0) {
  int VAR_7;
  struct ttyinq_block *VAR_8;
  size_t VAR_9, VAR_10, VAR_11;


  if (VAR_2->ti_begin == VAR_2->ti_linestart)
   return (0);
  VAR_8 = VAR_2->ti_firstblock;
  if (VAR_8 == ((void*)0))
   return (0);







  VAR_9 = VAR_2->ti_begin;
  VAR_10 = FUNC_1(FUNC_1(VAR_2->ti_linestart, VAR_2->ti_begin + VAR_5),
      VAR_1);
  VAR_11 = VAR_10 - VAR_9;
  FUNC_2(VAR_11 >= VAR_6);
  VAR_5 -= VAR_11;
  if (VAR_10 == VAR_1 || VAR_10 == VAR_2->ti_end) {




   FUNC_4(VAR_2);
   VAR_2->ti_begin = 0;
   do { if (VAR_2->ti_linestart <= VAR_1) VAR_2->ti_linestart = 0; else VAR_2->ti_linestart -= VAR_1; } while (0);
   do { if (VAR_2->ti_reprint <= VAR_1) VAR_2->ti_reprint = 0; else VAR_2->ti_reprint -= VAR_1; } while (0);
   do { if (VAR_2->ti_end <= VAR_1) VAR_2->ti_end = 0; else VAR_2->ti_end -= VAR_1; } while (0);







   FUNC_8(VAR_3);
   VAR_7 = FUNC_9(VAR_8->tib_data + VAR_9,
       VAR_11 - VAR_6, VAR_4);
   FUNC_7(VAR_3);


   FUNC_3(VAR_2, VAR_8);
  } else {
   char VAR_12[VAR_1 - 1];




   FUNC_5(VAR_12, VAR_8->tib_data + VAR_9, VAR_11 - VAR_6);
   VAR_2->ti_begin += VAR_11;
   FUNC_2(VAR_2->ti_begin < VAR_1);


   FUNC_8(VAR_3);
   VAR_7 = FUNC_9(VAR_12, VAR_11 - VAR_6, VAR_4);
   FUNC_7(VAR_3);
  }

  if (VAR_7 != 0)
   return (VAR_7);
  if (FUNC_6(VAR_3))
   return (VAR_0);
 }

 return (0);
}
