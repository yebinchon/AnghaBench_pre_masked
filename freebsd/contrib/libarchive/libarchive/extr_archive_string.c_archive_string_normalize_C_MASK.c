
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct archive_string_conv {int flag; } ;
struct archive_string {size_t length; char* s; int buffer_length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int * FUNC_7 (struct archive_string*,size_t) ;
 int FUNC_8 (int*,char const*,size_t) ;
 int FUNC_9 (int,int) ;
 size_t FUNC_10 (char*,size_t,int) ;
 size_t FUNC_11 (char*,size_t,int) ;
 size_t FUNC_12 (char*,size_t,int) ;
 int FUNC_13 (int*,char const*,size_t) ;
 int FUNC_14 (int*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_15(struct archive_string *VAR_15, const void *VAR_16,
    size_t VAR_17, struct archive_string_conv *VAR_18)
{
 const char *VAR_19 = (const char *)VAR_16;
 char *VAR_20, *VAR_21;
 uint32_t VAR_22, VAR_23;
 size_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28 = 0, VAR_29, VAR_30, VAR_31;
 int (*VAR_32)(uint32_t *, const char *, size_t);
 size_t (*VAR_33)(char *, size_t, uint32_t);

 VAR_25 = 1;
 VAR_30 = 1;
 if (VAR_18->flag & VAR_12) {
  VAR_33 = FUNC_10;
  VAR_30 = 2;
  if (VAR_18->flag & VAR_9)
   VAR_25 = 0;
 } else if (VAR_18->flag & VAR_13) {
  VAR_33 = FUNC_11;
  VAR_30 = 2;
  if (VAR_18->flag & VAR_10)
   VAR_25 = 0;
 } else if (VAR_18->flag & VAR_14) {
  VAR_33 = FUNC_12;
  if (VAR_18->flag & VAR_11)
   VAR_25 = 0;
 } else {




  VAR_25 = 0;
  if (VAR_18->flag & VAR_9) {
   VAR_33 = FUNC_10;
   VAR_30 = 2;
  } else if (VAR_18->flag & VAR_10) {
   VAR_33 = FUNC_11;
   VAR_30 = 2;
  } else {
   VAR_33 = FUNC_12;
  }
 }

 if (VAR_18->flag & VAR_9) {
  VAR_32 = FUNC_13;
  VAR_31 = 1;
  VAR_29 = 4;
 } else if (VAR_18->flag & VAR_10) {
  VAR_32 = FUNC_14;
  VAR_31 = 1;
  VAR_29 = 4;
 } else {
  VAR_32 = FUNC_8;
  VAR_31 = VAR_30;
  VAR_29 = 6;
 }

 if (FUNC_7(VAR_15, VAR_15->length + VAR_17 * VAR_31 + VAR_30) == ((void*)0))
  return (-1);

 VAR_20 = VAR_15->s + VAR_15->length;
 VAR_21 = VAR_15->s + VAR_15->buffer_length - VAR_30;
 while ((VAR_26 = VAR_32(&VAR_22, VAR_19, VAR_17)) != 0) {
  const char *VAR_34, *VAR_35;

  if (VAR_26 < 0) {

   FUNC_4(VAR_20, VAR_21, VAR_22);
   VAR_19 += VAR_26*-1;
   VAR_17 -= VAR_26*-1;
   VAR_28 = -1;
   continue;
  } else if (VAR_26 == VAR_29 || VAR_25)


   VAR_34 = ((void*)0);
  else
   VAR_34 = VAR_19;
  VAR_19 += VAR_26;
  VAR_17 -= VAR_26;


  while ((VAR_27 = VAR_32(&VAR_23, VAR_19, VAR_17)) > 0) {
   uint32_t VAR_36[VAR_0];
   int VAR_37[VAR_0];
   int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
   int VAR_43,VAR_44;
   uint32_t VAR_45;

   if (VAR_27 == VAR_29 || VAR_25)


    VAR_35 = ((void*)0);
   else
    VAR_35 = VAR_19;
   VAR_19 += VAR_27;
   VAR_17 -= VAR_27;





   if (!FUNC_2(VAR_23)) {
    FUNC_6();
    FUNC_3();
    continue;
   }
   if (0 <= (VAR_43 = VAR_22 - VAR_1) &&
       VAR_43 < VAR_2) {




    int VAR_46 = VAR_23 - VAR_7;
    if (0 <= VAR_46 && VAR_46 < VAR_8) {

     FUNC_5(VAR_3 +
         (VAR_43 * VAR_8 + VAR_46) *
          VAR_6);
    } else {
     FUNC_6();
     FUNC_3();
    }
    continue;
   } else if (0 <= (VAR_44 = VAR_22 - VAR_3) &&
       VAR_44 < VAR_4 && (VAR_44 % VAR_6) == 0) {




    int VAR_47 = VAR_23 - VAR_5;
    if (0 < VAR_47 && VAR_47 < VAR_6) {

     FUNC_5(VAR_22 + VAR_47);
    } else {
     FUNC_6();
     FUNC_3();
    }
    continue;
   } else if ((VAR_45 = FUNC_9(VAR_22, VAR_23)) != 0) {


    FUNC_5(VAR_45);
    continue;
   } else if ((VAR_38 = FUNC_0(VAR_23)) == 0) {


    FUNC_6();
    FUNC_3();
    continue;
   }




   VAR_39 = 0;
   VAR_36[0] = VAR_23;
   VAR_37[0] = VAR_38;
   FUNC_1(1);




   VAR_40 = 1;
   while (VAR_40 < VAR_42) {
    int VAR_48;

    if ((VAR_45 = FUNC_9(VAR_22, VAR_36[VAR_40])) == 0) {
     VAR_40++;
     continue;
    }




    FUNC_5(VAR_45);





    for (VAR_48 = VAR_40; VAR_48+1 < VAR_42; VAR_48++) {
     VAR_36[VAR_48] = VAR_36[VAR_48+1];
     VAR_37[VAR_48] = VAR_37[VAR_48+1];
    }
    VAR_42 --;





    if (VAR_42 > 0 && VAR_40 == VAR_42 &&
        VAR_41 > 0 && VAR_39 == VAR_38) {
     VAR_38 = VAR_37[VAR_42-1];
     FUNC_1(VAR_42);
    }





    VAR_40 = 0;
   }





   FUNC_6();
   for (VAR_40 = 0; VAR_40 < VAR_42; VAR_40++)
    FUNC_4(VAR_20, VAR_21, VAR_36[VAR_40]);




   if (VAR_41 > 0 && VAR_39 == VAR_38 && VAR_17 > 0) {
    while ((VAR_41 = VAR_32(&VAR_36[0], VAR_19, VAR_17))
        > 0) {
     VAR_39 = FUNC_0(VAR_36[0]);
     if (VAR_38 > VAR_39)
      break;
     VAR_19 += VAR_41;
     VAR_17 -= VAR_41;
     VAR_38 = VAR_39;
     FUNC_4(VAR_20, VAR_21, VAR_36[0]);
    }
   }
   break;
  }
  if (VAR_27 < 0) {
   FUNC_6();

   FUNC_4(VAR_20, VAR_21, VAR_23);
   VAR_19 += VAR_27*-1;
   VAR_17 -= VAR_27*-1;
   VAR_28 = -1;
   continue;
  } else if (VAR_27 == 0) {
   FUNC_6();
   break;
  }
 }
 VAR_15->length = VAR_20 - VAR_15->s;
 VAR_15->s[VAR_15->length] = '\0';
 if (VAR_30 == 2)
  VAR_15->s[VAR_15->length+1] = '\0';
 return (VAR_28);
}
