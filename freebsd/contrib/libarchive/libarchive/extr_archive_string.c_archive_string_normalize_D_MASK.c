
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct archive_string_conv {int flag; } ;
struct archive_string {size_t length; char* s; int buffer_length; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 () ;
 int * FUNC_5 (struct archive_string*,size_t) ;
 int FUNC_6 (int*,char const*,size_t) ;
 scalar_t__ FUNC_7 (int*,int*,int) ;
 size_t FUNC_8 (char*,size_t,int) ;
 size_t FUNC_9 (char*,size_t,int) ;
 size_t FUNC_10 (char*,size_t,int) ;
 int FUNC_11 (int*,char const*,size_t) ;
 int FUNC_12 (int*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_13(struct archive_string *VAR_14, const void *VAR_15,
    size_t VAR_16, struct archive_string_conv *VAR_17)
{
 const char *VAR_18 = (const char *)VAR_15;
 char *VAR_19, *VAR_20;
 uint32_t VAR_21, VAR_22;
 size_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27 = 0, VAR_28, VAR_29, VAR_30;
 int (*VAR_31)(uint32_t *, const char *, size_t);
 size_t (*VAR_32)(char *, size_t, uint32_t);

 VAR_24 = 1;
 VAR_29 = 1;
 if (VAR_17->flag & VAR_11) {
  VAR_32 = FUNC_8;
  VAR_29 = 2;
  if (VAR_17->flag & VAR_8)
   VAR_24 = 0;
 } else if (VAR_17->flag & VAR_12) {
  VAR_32 = FUNC_9;
  VAR_29 = 2;
  if (VAR_17->flag & VAR_9)
   VAR_24 = 0;
 } else if (VAR_17->flag & VAR_13) {
  VAR_32 = FUNC_10;
  if (VAR_17->flag & VAR_10)
   VAR_24 = 0;
 } else {




  VAR_24 = 0;
  if (VAR_17->flag & VAR_8) {
   VAR_32 = FUNC_8;
   VAR_29 = 2;
  } else if (VAR_17->flag & VAR_9) {
   VAR_32 = FUNC_9;
   VAR_29 = 2;
  } else {
   VAR_32 = FUNC_10;
  }
 }

 if (VAR_17->flag & VAR_8) {
  VAR_31 = FUNC_11;
  VAR_30 = 1;
  VAR_28 = 4;
 } else if (VAR_17->flag & VAR_9) {
  VAR_31 = FUNC_12;
  VAR_30 = 1;
  VAR_28 = 4;
 } else {
  VAR_31 = FUNC_6;
  VAR_30 = VAR_29;
  VAR_28 = 6;
 }

 if (FUNC_5(VAR_14, VAR_14->length + VAR_16 * VAR_30 + VAR_29) == ((void*)0))
  return (-1);

 VAR_19 = VAR_14->s + VAR_14->length;
 VAR_20 = VAR_14->s + VAR_14->buffer_length - VAR_29;
 while ((VAR_25 = VAR_31(&VAR_21, VAR_18, VAR_16)) != 0) {
  const char *VAR_33;
  uint32_t VAR_34, VAR_35;
  int VAR_36;
  struct {
   uint32_t uc;
   int ccc;
  } VAR_37[VAR_0];
  int VAR_38, VAR_39;
  int VAR_40;

check_first_code:
  if (VAR_25 < 0) {

   FUNC_3(VAR_19, VAR_20, VAR_21);
   VAR_18 += VAR_25*-1;
   VAR_16 -= VAR_25*-1;
   VAR_27 = -1;
   continue;
  } else if (VAR_25 == VAR_28 || VAR_24)


   VAR_33 = ((void*)0);
  else
   VAR_33 = VAR_18;
  VAR_18 += VAR_25;
  VAR_16 -= VAR_25;


  if ((VAR_36 = VAR_21 - VAR_3) >= 0 && VAR_36 < VAR_4) {
   int VAR_41 = VAR_1 + VAR_36 / VAR_2;
   int VAR_42 = VAR_7 + (VAR_36 % VAR_2) / VAR_6;
   int VAR_43 = VAR_5 + VAR_36 % VAR_6;

   FUNC_2(VAR_41);
   FUNC_4();
   FUNC_2(VAR_42);
   FUNC_4();
   if (VAR_43 != VAR_5) {
    FUNC_2(VAR_43);
    FUNC_4();
   }
   continue;
  }
  if (FUNC_1(VAR_21) && FUNC_0(VAR_21) != 0) {
   FUNC_4();
   continue;
  }

  VAR_38 = 0;
  while (FUNC_7(&VAR_34, &VAR_35, VAR_21) && VAR_38 < VAR_0) {
   int VAR_44;

   for (VAR_44 = VAR_38; VAR_44 > 0; VAR_44--)
    VAR_37[VAR_44] = VAR_37[VAR_44-1];
   VAR_37[0].ccc = FUNC_0(VAR_35);
   VAR_37[0].uc = VAR_35;
   VAR_38++;
   FUNC_2(VAR_34);
  }


  while ((VAR_26 = VAR_31(&VAR_22, VAR_18, VAR_16)) > 0 &&
      (VAR_40 = FUNC_0(VAR_22)) != 0 && VAR_38 < VAR_0) {
   int VAR_45, VAR_46;

   VAR_18 += VAR_26;
   VAR_16 -= VAR_26;
   for (VAR_45 = 0; VAR_45 < VAR_38; VAR_45++) {
    if (VAR_37[VAR_45].ccc > VAR_40)
     break;
   }
   if (VAR_45 < VAR_38) {
    for (VAR_46 = VAR_38; VAR_46 > VAR_45; VAR_46--)
     VAR_37[VAR_46] = VAR_37[VAR_46-1];
    VAR_37[VAR_45].ccc = VAR_40;
    VAR_37[VAR_45].uc = VAR_22;
   } else {
    VAR_37[VAR_38].ccc = VAR_40;
    VAR_37[VAR_38].uc = VAR_22;
   }
   VAR_38++;
  }

  FUNC_4();
  for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++) {
   FUNC_2(VAR_37[VAR_39].uc);
   FUNC_4();
  }

  if (VAR_26 == 0)
   break;
  FUNC_2(VAR_22);
  VAR_25 = VAR_26;
  goto check_first_code;
 }
 VAR_14->length = VAR_19 - VAR_14->s;
 VAR_14->s[VAR_14->length] = '\0';
 if (VAR_29 == 2)
  VAR_14->s[VAR_14->length+1] = '\0';
 return (VAR_27);
}
