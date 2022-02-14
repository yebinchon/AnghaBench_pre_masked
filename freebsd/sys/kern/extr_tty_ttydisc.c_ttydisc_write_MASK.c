
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct tty {int t_flags; unsigned int t_writepos; unsigned int t_column; int t_outwait; int t_inq; int t_outq; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,int ) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*,int *) ;
 int FUNC_8 (struct tty*) ;
 unsigned int FUNC_9 (char*,unsigned int) ;
 scalar_t__ FUNC_10 (struct tty*,char) ;
 int FUNC_11 (int *) ;
 unsigned int FUNC_12 (int *,char*,unsigned int) ;
 int FUNC_13 (char*,unsigned int,struct uio*) ;

int
FUNC_14(struct tty *VAR_10, struct uio *VAR_11, int VAR_12)
{
 char VAR_13[VAR_8];
 char *VAR_14;
 int VAR_15 = 0;
 unsigned int VAR_16 = 0;

 FUNC_5(VAR_10, VAR_4);

 if (VAR_10->t_flags & VAR_7)
  return (VAR_0);







 while (VAR_11->uio_resid > 0) {
  unsigned int VAR_17;

  FUNC_2(VAR_16 == 0);


  VAR_14 = VAR_13;
  VAR_17 = FUNC_1(VAR_11->uio_resid, sizeof VAR_13);
  FUNC_6(VAR_10);
  VAR_15 = FUNC_13(VAR_13, VAR_17, VAR_11);
  FUNC_4(VAR_10);
  if (VAR_15 != 0)
   break;
  VAR_16 = VAR_17;

  if (FUNC_3(VAR_10)) {
   VAR_15 = VAR_1;
   break;
  }

  FUNC_2(VAR_16 > 0);


  do {
   unsigned int VAR_18, VAR_19;


   if (FUNC_0(VAR_9, VAR_5)) {
    VAR_18 = FUNC_9(VAR_14, VAR_16);
   } else {
    VAR_18 = VAR_16;
   }

   if (VAR_18 == 0) {




    if (FUNC_10(VAR_10, *VAR_14) == 0) {
     VAR_14++;
     VAR_16--;

     VAR_10->t_writepos = VAR_10->t_column;
     FUNC_11(&VAR_10->t_inq);
     continue;
    }
   } else {

    VAR_19 = FUNC_12(&VAR_10->t_outq, VAR_14, VAR_18);
    VAR_14 += VAR_19;
    VAR_16 -= VAR_19;
    VAR_10->t_column += VAR_19;

    VAR_10->t_writepos = VAR_10->t_column;
    FUNC_11(&VAR_10->t_inq);

    if (VAR_19 == VAR_18)
     continue;
   }


   VAR_10->t_flags |= VAR_6;

   if (VAR_12 & VAR_3) {
    VAR_15 = VAR_2;
    goto done;
   }






   FUNC_8(VAR_10);
   if ((VAR_10->t_flags & VAR_6) == 0)
    continue;

   VAR_15 = FUNC_7(VAR_10, &VAR_10->t_outwait);
   if (VAR_15)
    goto done;

   if (VAR_10->t_flags & VAR_7) {
    VAR_15 = VAR_0;
    goto done;
   }
  } while (VAR_16 > 0);
 }

done:
 if (!FUNC_3(VAR_10))
  FUNC_8(VAR_10);






 VAR_11->uio_resid += VAR_16;
 return (VAR_15);
}
