
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (char) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (char*,int) ;

void
FUNC_8(int VAR_10)
{
    int VAR_11;

mc_again:
    if (VAR_10 == VAR_1)
 return;

    if (VAR_10 >= VAR_9) {




 return;
    }

    if (!VAR_10) {
 (void) FUNC_3('\r');
 VAR_1 = 0;
 return;
    }

    VAR_11 = VAR_10 - VAR_1;

    if ((VAR_11 < -4 || VAR_11 > 4) && FUNC_0(VAR_8))

 (void) FUNC_6(FUNC_5(FUNC_1(VAR_8), VAR_10, VAR_10), VAR_10, VAR_4);
    else {
 int VAR_12;
 if (VAR_11 > 0) {
     if ((VAR_11 > 4) && FUNC_0(VAR_6))
  (void) FUNC_6(FUNC_5(FUNC_1(VAR_6), VAR_11, VAR_11), VAR_11, VAR_4);
     else {

  if (VAR_7) {
      if ((VAR_1 & 0370) != (VAR_10 & ~0x7)
   && VAR_3[VAR_2][VAR_10 & ~0x7] != VAR_0) {

   for (VAR_12 = (VAR_1 & 0370); VAR_12 < (VAR_10 & ~0x7); VAR_12 += 8)
       (void) FUNC_3('\t');
   VAR_1 = VAR_10 & ~0x7;




      }
  }



  FUNC_4(&VAR_3[VAR_2][VAR_1], VAR_10 - VAR_1);

     }
 }
 else {
     if ((-VAR_11 > 4) && FUNC_0(VAR_5))
  (void) FUNC_6(FUNC_5(FUNC_1(VAR_5), -VAR_11, -VAR_11), -VAR_11, VAR_4);
     else {

  if (VAR_7 ? (-VAR_11 > ((VAR_10 >> 3) + (VAR_10 & 07)))
      : (-VAR_11 > VAR_10)) {
      (void) FUNC_3('\r');
      VAR_1 = 0;
      goto mc_again;
  }
  for (VAR_12 = 0; VAR_12 < -VAR_11; VAR_12++)
      (void) FUNC_3('\b');
     }
 }
    }
    VAR_1 = VAR_10;
}
