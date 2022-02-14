
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_14__ {int h; } ;
struct TYPE_15__ {TYPE_1__ t_size; } ;
struct TYPE_16__ {TYPE_2__ el_terminal; } ;
typedef TYPE_3__ EditLine ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,char*,int,int,int) ;
 int FUNC_4 (TYPE_3__*,char*,int,int,char*,int) ;
 int FUNC_5 (TYPE_3__*,char*,char*,char*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,char*,size_t) ;

__attribute__((used)) static void
FUNC_11(EditLine *VAR_4, wchar_t *VAR_5, wchar_t *VAR_6, int VAR_7)
{
 wchar_t *VAR_8, *VAR_9, *VAR_10, VAR_11;
 wchar_t *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 wchar_t *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 int VAR_22, VAR_23;
 size_t VAR_24;




 for (VAR_8 = VAR_5, VAR_9 = VAR_6; *VAR_8 && (*VAR_8 == *VAR_9); VAR_8++, VAR_9++)
  continue;
 VAR_12 = VAR_8;
 VAR_15 = VAR_9;




 while (*VAR_8)
  VAR_8++;




 while (VAR_12 < VAR_8) {
  if (VAR_8[-1] != ' ')
   break;
  VAR_8--;
 }
 VAR_14 = VAR_8;
 *VAR_14 = '\0';

 while (*VAR_9)
  VAR_9++;


 while (VAR_15 < VAR_9) {
  if (VAR_9[-1] != ' ')
   break;
  VAR_9--;
 }
 VAR_17 = VAR_9;
 *VAR_17 = '\0';




 if (*VAR_12 == '\0' && *VAR_15 == '\0') {
  FUNC_0(1, (VAR_3, "no difference.\r\n"));
  return;
 }



 while ((VAR_8 > VAR_12) && (VAR_9 > VAR_15) && (*--VAR_8 == *--VAR_9))
  continue;
 VAR_13 = ++VAR_8;
 VAR_16 = ++VAR_9;




 VAR_18 = VAR_13;
 VAR_20 = VAR_16;
 VAR_19 = VAR_13;
 VAR_21 = VAR_16;




 if (*VAR_12) {
  for (VAR_11 = *VAR_12, VAR_9 = VAR_15; VAR_9 < VAR_16; VAR_9++) {
   if (VAR_11 == *VAR_9) {
    for (VAR_8 = VAR_12, VAR_10 = VAR_9;
        VAR_10 < VAR_16 && VAR_8 < VAR_13 && *VAR_8 == *VAR_10;
        VAR_8++, VAR_10++)
     continue;




    if (((VAR_21 - VAR_20) < (VAR_10 - VAR_9)) &&
        (2 * (VAR_10 - VAR_9) > VAR_9 - VAR_15)) {
     VAR_20 = VAR_9;
     VAR_21 = VAR_10;
     VAR_18 = VAR_12;
     VAR_19 = VAR_8;
    }
   }
  }
 }



 if (*VAR_15) {
  for (VAR_11 = *VAR_15, VAR_8 = VAR_12; VAR_8 < VAR_13; VAR_8++) {
   if (VAR_11 == *VAR_8) {
    for (VAR_9 = VAR_15, VAR_10 = VAR_8;
        VAR_10 < VAR_13 && VAR_9 < VAR_16 && *VAR_10 == *VAR_9;
        VAR_10++, VAR_9++)
     continue;




    if (((VAR_19 - VAR_18) < (VAR_10 - VAR_8)) &&
        (2 * (VAR_10 - VAR_8) > VAR_8 - VAR_12)) {
     VAR_20 = VAR_15;
     VAR_21 = VAR_9;
     VAR_18 = VAR_8;
     VAR_19 = VAR_10;
    }
   }
  }
 }




 if ((VAR_14 - VAR_13) < VAR_2) {
  VAR_13 = VAR_14;
  VAR_16 = VAR_17;
 }
 VAR_22 = (int)((VAR_20 - VAR_15) - (VAR_18 - VAR_12));




 VAR_23 = (int)((VAR_16 - VAR_21) - (VAR_13 - VAR_19));

 if (!VAR_1) {
  if (VAR_22 > 0) {
   VAR_18 = VAR_13;
   VAR_19 = VAR_13;
   VAR_20 = VAR_16;
   VAR_21 = VAR_16;
  }
  if (VAR_23 > 0) {
   VAR_13 = VAR_14;
   VAR_16 = VAR_17;
  }
  if ((VAR_13 - VAR_12) < (VAR_16 - VAR_15)) {
   VAR_13 = VAR_14;
   VAR_16 = VAR_17;
  }
 }
 if (!VAR_0) {
  if (VAR_22 < 0) {
   VAR_18 = VAR_13;
   VAR_19 = VAR_13;
   VAR_20 = VAR_16;
   VAR_21 = VAR_16;
  }
  if (VAR_23 < 0) {
   VAR_13 = VAR_14;
   VAR_16 = VAR_17;
  }
  if ((VAR_13 - VAR_12) > (VAR_16 - VAR_15)) {
   VAR_13 = VAR_14;
   VAR_16 = VAR_17;
  }
 }






 if ((VAR_19 - VAR_18) < VAR_2) {
  VAR_18 = VAR_13;
  VAR_19 = VAR_13;
  VAR_20 = VAR_16;
  VAR_21 = VAR_16;
 }



 VAR_22 = (int)((VAR_20 - VAR_15) - (VAR_18 - VAR_12));
 VAR_23 = (int)((VAR_16 - VAR_21) - (VAR_13 - VAR_19));

 FUNC_0(1, (VAR_3, "fx %d, sx %d\n", VAR_22, VAR_23));
 FUNC_0(1, (VAR_3, "ofd %td, osb %td, ose %td, ols %td, oe %td\n",
  VAR_12 - VAR_5, VAR_18 - VAR_5, VAR_19 - VAR_5, VAR_13 - VAR_5, VAR_14 - VAR_5));
 FUNC_0(1, (VAR_3, "nfd %td, nsb %td, nse %td, nls %td, ne %td\n",
  VAR_15 - VAR_6, VAR_20 - VAR_6, VAR_21 - VAR_6, VAR_16 - VAR_6, VAR_17 - VAR_6));
 FUNC_0(1, (VAR_3,
  "xxx-xxx:\"00000000001111111111222222222233333333334\"\r\n"));
 FUNC_0(1, (VAR_3,
  "xxx-xxx:\"01234567890123456789012345678901234567890\"\r\n"));
 FUNC_9(VAR_4, VAR_7);
 VAR_10 = (VAR_13 != VAR_14) ? VAR_14 : VAR_19;
 if ((VAR_20 != VAR_15) && VAR_22 > 0 &&
     ((VAR_10 - VAR_5) + VAR_22 <= VAR_4->el_terminal.t_size.h)) {
  FUNC_0(1,
      (VAR_3, "first diff insert at %td...\r\n", VAR_15 - VAR_6));



  FUNC_8(VAR_4, (int)(VAR_15 - VAR_6));



  if (VAR_20 != VAR_17) {
   FUNC_0(1, (VAR_3, "with stuff to keep at end\r\n"));



   if (VAR_22 > 0) {
    FUNC_0(!VAR_1, (VAR_3,
    "ERROR: cannot insert in early first diff\n"));
    FUNC_7(VAR_4, VAR_15, VAR_22);
    FUNC_4(VAR_4, VAR_5, (int)(VAR_12 - VAR_5),
        VAR_4->el_terminal.t_size.h, VAR_15, VAR_22);
   }




   VAR_24 = (size_t) ((VAR_20 - VAR_15) - VAR_22);
   FUNC_10(VAR_4, (VAR_15 + VAR_22), VAR_24);
   FUNC_1(VAR_12 + VAR_22, VAR_15 + VAR_22, VAR_24);
  } else {
   FUNC_0(1, (VAR_3, "without anything to save\r\n"));
   VAR_24 = (size_t)(VAR_20 - VAR_15);
   FUNC_10(VAR_4, VAR_15, VAR_24);
   FUNC_1(VAR_12, VAR_15, VAR_24);



   return;
  }
 } else if (VAR_22 < 0) {
  FUNC_0(1,
      (VAR_3, "first diff delete at %td...\r\n", VAR_12 - VAR_5));



  FUNC_8(VAR_4, (int)(VAR_12 - VAR_5));



  if (VAR_18 != VAR_14) {
   FUNC_0(1, (VAR_3, "with stuff to save at end\r\n"));




   if (VAR_22 < 0) {
    FUNC_0(!VAR_0, (VAR_3,
        "ERROR: cannot delete in first diff\n"));
    FUNC_6(VAR_4, -VAR_22);
    FUNC_3(VAR_4, VAR_5, (int)(VAR_12 - VAR_5),
        VAR_4->el_terminal.t_size.h, -VAR_22);
   }



   VAR_24 = (size_t) (VAR_20 - VAR_15);
   FUNC_10(VAR_4, VAR_15, VAR_24);
   FUNC_1(VAR_12, VAR_15, VAR_24);

  } else {
   FUNC_0(1, (VAR_3,
       "but with nothing left to save\r\n"));



   FUNC_10(VAR_4, VAR_15, (size_t)(VAR_20 - VAR_15));
   FUNC_2(VAR_4, VAR_22, VAR_23,
       (int)((VAR_14 - VAR_5) - (VAR_17 - VAR_6)));



   return;
  }
 } else
  VAR_22 = 0;

 if (VAR_23 < 0 && (VAR_19 - VAR_5) + VAR_22 < VAR_4->el_terminal.t_size.h) {
  FUNC_0(1, (VAR_3,
      "second diff delete at %td...\r\n", (VAR_19 - VAR_5) + VAR_22));







  FUNC_8(VAR_4, (int)((VAR_19 - VAR_5) + VAR_22));



  if (VAR_13 != VAR_14) {
   FUNC_0(1, (VAR_3, "with stuff to save at end\r\n"));



   if (VAR_23 < 0) {
    FUNC_0(!VAR_0, (VAR_3,
        "ERROR: cannot delete in second diff\n"));
    FUNC_6(VAR_4, -VAR_23);
   }



   FUNC_10(VAR_4, VAR_21, (size_t)(VAR_16 - VAR_21));
  } else {
   FUNC_0(1, (VAR_3,
       "but with nothing left to save\r\n"));
   FUNC_10(VAR_4, VAR_21, (size_t)(VAR_16 - VAR_21));
   FUNC_2(VAR_4, VAR_22, VAR_23,
       (int)((VAR_14 - VAR_5) - (VAR_17 - VAR_6)));
  }
 }



 if ((VAR_20 != VAR_15) && (VAR_18 - VAR_12) <= (VAR_20 - VAR_15) && (VAR_22 == 0)) {
  FUNC_0(1, (VAR_3, "late first diff insert at %td...\r\n",
      VAR_15 - VAR_6));

  FUNC_8(VAR_4, (int)(VAR_15 - VAR_6));



  if (VAR_20 != VAR_17) {
   FUNC_0(1, (VAR_3, "with stuff to keep at end\r\n"));





   VAR_22 = (int)((VAR_20 - VAR_15) - (VAR_18 - VAR_12));
   if (VAR_22 > 0) {



    FUNC_0(!VAR_1, (VAR_3,
     "ERROR: cannot insert in late first diff\n"));
    FUNC_7(VAR_4, VAR_15, VAR_22);
    FUNC_4(VAR_4, VAR_5, (int)(VAR_12 - VAR_5),
        VAR_4->el_terminal.t_size.h, VAR_15, VAR_22);
   }




   VAR_24 = (size_t) ((VAR_20 - VAR_15) - VAR_22);
   FUNC_10(VAR_4, (VAR_15 + VAR_22), VAR_24);
   FUNC_1(VAR_12 + VAR_22, VAR_15 + VAR_22, VAR_24);
  } else {
   FUNC_0(1, (VAR_3, "without anything to save\r\n"));
   VAR_24 = (size_t) (VAR_20 - VAR_15);
   FUNC_10(VAR_4, VAR_15, VAR_24);
   FUNC_1(VAR_12, VAR_15, VAR_24);
  }
 }



 if (VAR_23 >= 0) {
  FUNC_0(1, (VAR_3,
      "second diff insert at %d...\r\n", (int)(VAR_21 - VAR_6)));
  FUNC_8(VAR_4, (int)(VAR_21 - VAR_6));
  if (VAR_13 != VAR_14) {
   FUNC_0(1, (VAR_3, "with stuff to keep at end\r\n"));
   if (VAR_23 > 0) {

    FUNC_0(!VAR_1, (VAR_3,
        "ERROR: cannot insert in second diff\n"));
    FUNC_7(VAR_4, VAR_21, VAR_23);
   }




   FUNC_10(VAR_4, (VAR_21 + VAR_23),
       (size_t)((VAR_16 - VAR_21) - VAR_23));
  } else {
   FUNC_0(1, (VAR_3, "without anything to save\r\n"));
   FUNC_10(VAR_4, VAR_21, (size_t)(VAR_16 - VAR_21));






  }
 }
 FUNC_0(1, (VAR_3, "done.\r\n"));
}
