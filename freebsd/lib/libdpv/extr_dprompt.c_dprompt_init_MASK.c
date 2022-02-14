
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dpv_file_node {char* name; struct dpv_file_node* next; } ;
struct TYPE_2__ {int colors; char* backtitle; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int,int) ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int FUNC_6 () ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 () ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (int ,char*) ;
 char* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_29 ;
 char* FUNC_11 (int) ;
 char* VAR_30 ;
 char* VAR_31 ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 char* VAR_41 ;
 int FUNC_12 (char*,int,char*) ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_14 (char*,int,...) ;
 scalar_t__ VAR_48 ;

void
FUNC_15(struct dpv_file_node *VAR_49)
{
 uint8_t VAR_50 = 0;
 int VAR_51;
 int VAR_52;
 int VAR_53;
 int VAR_54;
 int VAR_55;
 struct dpv_file_node *VAR_56;




 if (VAR_45 && !VAR_13) {
  FUNC_10(VAR_42, VAR_43);
  VAR_15.colors = 1;
  if (VAR_12 != ((void*)0)) {
   VAR_15.backtitle = (char *)VAR_12;
   FUNC_6();
  }
 }


 VAR_23 = VAR_29 + VAR_34 + 9;




 VAR_14 = 5;
 VAR_53 = FUNC_1();

 if (VAR_12 != ((void*)0))
  VAR_53 -= VAR_46 ? 3 : 2;
 if (VAR_45 && VAR_46)
  VAR_53 -= 2;

 VAR_55 = FUNC_4(VAR_41, 0);
 if (VAR_13)
  FUNC_14("`-p text' is %i line%s long", VAR_55,
      VAR_55 == 1 ? "" : "s");
 VAR_14 += VAR_55;

 if (VAR_44) {
  VAR_14 -= FUNC_3(VAR_41);
  VAR_50 = FUNC_3(VAR_41);
 } else if (VAR_47) {
  if (VAR_41 == ((void*)0) || *VAR_41 == '\0')
   VAR_14++;
 } else if (VAR_45) {
  if (VAR_41 != ((void*)0) && *VAR_41 != '\0')
   VAR_14--;
 }

 if (VAR_16 == 0 || VAR_16 > VAR_0)
  VAR_16 = VAR_0;

 for (; VAR_16 > 0; VAR_16--) {
  VAR_54 = VAR_55 = 0;
  VAR_28 = (int)VAR_22 > VAR_16 ?
      (unsigned int)VAR_16 : VAR_22;
  for (VAR_56 = VAR_49; VAR_56 != ((void*)0);
      VAR_56 = VAR_56->next) {
   VAR_54++;
   VAR_55 += FUNC_4(VAR_56->name, VAR_50);
   if ((VAR_54 % VAR_16) == 0) {
    if (VAR_55 > VAR_28)
     VAR_28 = VAR_55;
    VAR_55 = VAR_54 = 0;
   }
  }
  if (VAR_55 > VAR_28)
   VAR_28 = VAR_55;
  if ((VAR_14 + VAR_28 +
      (int)FUNC_4(VAR_11, VAR_44) -
      (VAR_44 ? (int)FUNC_3(VAR_11) : 0))
      <= VAR_53)
   break;
 }

 if ((VAR_53 - (VAR_46 ? 5 : 4)) >= VAR_28)
  VAR_14 += VAR_28;
 else
  VAR_28 = 0;

 VAR_55 = FUNC_4(VAR_11, VAR_44);
 if (VAR_13)
  FUNC_14("`-a text' is %i line%s long", VAR_55,
      VAR_55 == 1 ? "" : "s");
 VAR_14 += VAR_55;


 if (VAR_47)
  VAR_14 += VAR_14 / 4;



 if (VAR_48) {
  VAR_51 = (int)FUNC_2(VAR_41, 0);
  if ((VAR_51 + 4) > VAR_23)
   VAR_23 = VAR_51 + 4;
  VAR_51 = (int)FUNC_2(VAR_11, 1);
  if ((VAR_51 + 4) > VAR_23)
   VAR_23 = VAR_51 + 4;
 }


 VAR_52 = FUNC_0();
 if (VAR_52 > 0 && VAR_23 > VAR_52)
  VAR_23 = VAR_52;


 if (VAR_34 > VAR_23 - 9) {
  VAR_34 = VAR_23 - 9;
  VAR_29 = 0;

 }
 if (VAR_34 < 0)
  VAR_29 = VAR_23 - 8;

 else if (VAR_29 > (VAR_23 - VAR_34 - 9) || VAR_48)
  VAR_29 = VAR_33 ? 0 : VAR_23 - VAR_34 - 9;



 if (VAR_33)
  VAR_29 = 0;


 VAR_14 += FUNC_5(VAR_41, VAR_23 - 4, 0);
 VAR_14 += FUNC_5(VAR_11, VAR_23 - 4, 1);

 if (VAR_13)
  FUNC_14("dheight = %i dwidth = %i fheight = %i",
      VAR_14, VAR_23, VAR_28);


 VAR_35 = (VAR_34 - 4) / 2;
 VAR_36 = VAR_35;

 if ((VAR_36 + VAR_36 + 4) != VAR_34)
  VAR_36++;


 if (VAR_17 == ((void*)0) && (VAR_17 = VAR_30) == ((void*)0)) {
  if ((VAR_17 = FUNC_9(VAR_4)) != ((void*)0))
   VAR_20 = FUNC_13(VAR_17);
  else {
   VAR_20 = FUNC_13(VAR_1);
   if ((VAR_17 = FUNC_11(VAR_20 + 1)) == ((void*)0))
    FUNC_8(VAR_7, "Out of memory?!");
   VAR_21 |= VAR_8;
   FUNC_12(VAR_17, VAR_20 + 1, VAR_1);
  }
 }
 if (VAR_34 < VAR_20) {
  VAR_18 = VAR_19 = 0;
  *(VAR_17 + VAR_34) = '\0';
  VAR_20 = VAR_34;
 } else {

  VAR_18 = (VAR_34 - VAR_20) / 2;
  VAR_19 = VAR_18;

  if ((VAR_19 + VAR_20 + VAR_18) != VAR_34)
   VAR_19++;
 }


 if (VAR_24 == ((void*)0) && (VAR_24 = VAR_31) == ((void*)0)) {
  if ((VAR_24 = FUNC_9(VAR_5)) != ((void*)0))
   VAR_27 = FUNC_13(VAR_24);
  else {
   VAR_27 = FUNC_13(VAR_2);
   if ((VAR_24 = FUNC_11(VAR_27 + 1)) == ((void*)0))
    FUNC_8(VAR_7, "Out of memory?!");
   VAR_21 |= VAR_9;
   FUNC_12(VAR_24, VAR_27 + 1, VAR_2);
  }
 }
 if (VAR_34 < VAR_27) {
  VAR_25 = VAR_26 = 0;
  *(VAR_24 + VAR_34) = '\0';
  VAR_27 = VAR_34;
 } else {

  VAR_25 = (VAR_34 - VAR_27) / 2;
  VAR_26 = VAR_25;

  if ((VAR_26 + VAR_27 + VAR_25) != VAR_34)
   VAR_26++;
 }


 if (VAR_37 == ((void*)0) && (VAR_37 = VAR_32) == ((void*)0)) {
  if ((VAR_37 = FUNC_9(VAR_6)) != ((void*)0))
   VAR_40 = FUNC_13(VAR_37);
  else {
   VAR_40 = FUNC_13(VAR_3);
   if ((VAR_37 = FUNC_11(VAR_40 + 1)) == ((void*)0))
    FUNC_8(VAR_7, "Out of memory?!");
   VAR_21 |= VAR_10;
   FUNC_12(VAR_37, VAR_40 + 1, VAR_3);
  }
 }
 if (VAR_34 < VAR_40) {
  VAR_38 = VAR_39 = 0;
  *(VAR_37 + VAR_34) = '\0';
  VAR_40 = VAR_34;
 } else {

  VAR_38 = (VAR_34 - VAR_40) / 2;
  VAR_39 = VAR_38;

  if ((VAR_39 + VAR_38 + VAR_40) != VAR_34)
   VAR_39++;
 }

 if (VAR_13)
  FUNC_14("label_size = %i pbar_size = %i", VAR_29, VAR_34);

 FUNC_7();
}
