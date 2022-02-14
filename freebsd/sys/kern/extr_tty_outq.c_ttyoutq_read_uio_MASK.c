
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct ttyoutq_block {char* tob_data; } ;
struct ttyoutq {size_t to_begin; size_t to_end; struct ttyoutq_block* to_firstblock; } ;
struct tty {int dummy; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int FUNC_2 (struct ttyoutq*,struct ttyoutq_block*) ;
 int FUNC_3 (struct ttyoutq*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (char*,size_t,struct uio*) ;

int
FUNC_8(struct ttyoutq *VAR_1, struct tty *VAR_2, struct uio *VAR_3)
{

 while (VAR_3->uio_resid > 0) {
  int VAR_4;
  struct ttyoutq_block *VAR_5;
  size_t VAR_6, VAR_7, VAR_8;


  if (VAR_1->to_begin == VAR_1->to_end)
   return (0);
  VAR_5 = VAR_1->to_firstblock;
  if (VAR_5 == ((void*)0))
   return (0);







  VAR_6 = VAR_1->to_begin;
  VAR_7 = FUNC_0(FUNC_0(VAR_1->to_end, VAR_1->to_begin + VAR_3->uio_resid),
      VAR_0);
  VAR_8 = VAR_7 - VAR_6;
  if (VAR_7 == VAR_0 || VAR_7 == VAR_1->to_end) {




   FUNC_3(VAR_1);
   VAR_1->to_begin = 0;
   if (VAR_1->to_end <= VAR_0)
    VAR_1->to_end = 0;
   else
    VAR_1->to_end -= VAR_0;


   FUNC_6(VAR_2);
   VAR_4 = FUNC_7(VAR_5->tob_data + VAR_6, VAR_8, VAR_3);
   FUNC_5(VAR_2);


   FUNC_2(VAR_1, VAR_5);
  } else {
   char VAR_9[VAR_0 - 1];




   FUNC_4(VAR_9, VAR_5->tob_data + VAR_6, VAR_8);
   VAR_1->to_begin += VAR_8;
   FUNC_1(VAR_1->to_begin < VAR_0);


   FUNC_6(VAR_2);
   VAR_4 = FUNC_7(VAR_9, VAR_8, VAR_3);
   FUNC_5(VAR_2);
  }

  if (VAR_4 != 0)
   return (VAR_4);
 }

 return (0);
}
