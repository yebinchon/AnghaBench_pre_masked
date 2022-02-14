
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
struct TYPE_5__ {scalar_t__ len; scalar_t__ start; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,size_t,scalar_t__,int,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,int,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,struct stat*) ;
 scalar_t__ FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,char* const*,char*) ;
 int FUNC_14 (int,int ,scalar_t__*) ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int * FUNC_15 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_16 (size_t,size_t,int) ;
 int FUNC_17 (char* const,int,...) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 size_t FUNC_18 (int,int *,size_t,scalar_t__) ;
 int FUNC_19 (char*,...) ;
 size_t FUNC_20 (int,int *,size_t,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (int,int) ;
 int * VAR_21 ;
 int FUNC_23 () ;
 int VAR_22 ;
 int FUNC_24 (int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_25 (int ) ;
 int FUNC_26 (scalar_t__) ;
 void* FUNC_27 (int ,int *,int ) ;
 int FUNC_28 (scalar_t__*) ;
 int FUNC_29 () ;
 int * VAR_25 ;

int
FUNC_30(int VAR_26, char * const VAR_27[])
{
 int VAR_28;
 int VAR_29, VAR_30;
 off_t VAR_31, VAR_32, VAR_33, VAR_34;
 size_t VAR_35, VAR_36;
 int VAR_37, VAR_38;
 u_char *VAR_39;
 u_int VAR_40;
 off_t VAR_41;
 time_t VAR_42, VAR_43;
 struct stat VAR_44;
 u_int VAR_45, VAR_46 = 60;

 while ((VAR_28 = FUNC_13(VAR_26, VAR_27, "b:r:w:s:")) != -1) {
  switch (VAR_28) {
  case 'b':
   VAR_12 = FUNC_27(VAR_19, ((void*)0), 0);
   break;
  case 'r':
   VAR_21 = FUNC_25(VAR_19);
   if (VAR_21 == ((void*)0))
    FUNC_6(1, "Cannot allocate enough memory");
   break;
  case 's':
   VAR_46 = FUNC_27(VAR_19, ((void*)0), 0);
   break;
  case 'w':
   VAR_25 = FUNC_25(VAR_19);
   if (VAR_25 == ((void*)0))
    FUNC_6(1, "Cannot allocate enough memory");
   break;
  default:
   FUNC_29();

  }
 }
 VAR_26 -= VAR_20;
 VAR_27 += VAR_20;

 if (VAR_26 < 1 || VAR_26 > 2)
  FUNC_29();

 VAR_29 = FUNC_17(VAR_27[0], VAR_7);
 if (VAR_29 < 0)
  FUNC_6(1, "Cannot open read descriptor %s", VAR_27[0]);

 VAR_37 = FUNC_11(VAR_29, &VAR_44);
 if (VAR_37 < 0)
  FUNC_6(1, "fstat failed");
 if (FUNC_2(VAR_44.st_mode) || FUNC_3(VAR_44.st_mode)) {
  VAR_37 = FUNC_14(VAR_29, VAR_2, &VAR_40);
  if (VAR_37 < 0)
   FUNC_6(1, "DIOCGSECTORSIZE failed");

  VAR_37 = FUNC_14(VAR_29, VAR_3, &VAR_41);
  if (VAR_37 == 0 && VAR_41 > VAR_40)
   VAR_40 = VAR_41;

  VAR_18 = VAR_40;
  VAR_12 = FUNC_22(VAR_12, VAR_40);

  VAR_37 = FUNC_14(VAR_29, VAR_1, &VAR_31);
  if (VAR_37 < 0)
   FUNC_6(1, "DIOCGMEDIASIZE failed");
 } else {
  VAR_31 = VAR_44.st_size;
 }

 if (VAR_12 < VAR_18)
  VAR_12 = VAR_18;

 for (VAR_28 = 0; (VAR_12 >> VAR_28) > VAR_18; VAR_28++)
  continue;
 VAR_17 = VAR_12 >> (VAR_28 / 2);
 VAR_17 = FUNC_22(VAR_17, VAR_18);

 FUNC_9(VAR_23, "Bigsize = %d, medsize = %d, minsize = %d\n",
     VAR_12, VAR_17, VAR_18);

 VAR_39 = FUNC_15(VAR_12);
 if (VAR_39 == ((void*)0))
  FUNC_6(1, "Cannot allocate %zu bytes buffer", VAR_12);

 if (VAR_26 > 1) {
  VAR_30 = FUNC_17(VAR_27[1], VAR_8 | VAR_6, VAR_0);
  if (VAR_30 < 0)
   FUNC_6(1, "Cannot open write descriptor %s", VAR_27[1]);
  if (FUNC_12(VAR_30, VAR_31) < 0)
   FUNC_6(1, "Cannot truncate output %s to %jd bytes",
       VAR_27[1], (intmax_t)VAR_31);
 } else
  VAR_30 = -1;

 if (VAR_21 != ((void*)0)) {
  VAR_32 = FUNC_21(VAR_31);
 } else {
  FUNC_16(0, VAR_31, 0);
  VAR_32 = 0;
 }
 if (VAR_25 != ((void*)0))
  FUNC_24(VAR_10, VAR_22);

 VAR_42 = 0;
 VAR_33 = VAR_34 = VAR_35 = VAR_38 = 0;
 VAR_9;
 VAR_45 = 0;
 for (;;) {
  VAR_15 = FUNC_4(&VAR_16);
  if (VAR_15 == ((void*)0))
   break;
  while (VAR_15->len > 0 && !VAR_11) {

   VAR_33 = VAR_15->start;
   VAR_34 = VAR_15->len;
   VAR_38 = VAR_15->state;

   VAR_35 = FUNC_0(VAR_15->len, (off_t)VAR_12);
   if (VAR_15->state == 1)
    VAR_35 = FUNC_0(VAR_15->len, (off_t)VAR_17);
   if (VAR_15->state > 1)
    VAR_35 = FUNC_0(VAR_15->len, (off_t)VAR_18);
   FUNC_28(&VAR_43);
   if (VAR_42 != VAR_43 || VAR_15->len < (off_t)VAR_12) {
    FUNC_1(VAR_33, VAR_35, VAR_34, VAR_38, VAR_32, VAR_31);
    VAR_42 = VAR_43;
    if (++VAR_45 == VAR_46) {
     FUNC_23();
     VAR_45 = 0;
    }
   }
   if (VAR_35 == 0) {
    FUNC_7(1, "BOGUS i %10jd", (intmax_t)VAR_35);
   }
   FUNC_8(VAR_24);
   VAR_36 = FUNC_18(VAR_29, VAR_39, VAR_35, VAR_15->start);
   if (VAR_36 == VAR_35) {
    VAR_32 += VAR_35;
    if (VAR_30 >= 0)
     VAR_36 = FUNC_20(VAR_30, VAR_39, VAR_35, VAR_15->start);
    else
     VAR_36 = VAR_35;
    if (VAR_36 != VAR_35)
     FUNC_19("\nWrite error at %jd/%zu\n",
         VAR_15->start, VAR_35);
    VAR_15->start += VAR_35;
    VAR_15->len -= VAR_35;
    continue;
   }
   FUNC_19("\n%jd %zu failed (%s)\n",
       VAR_15->start, VAR_35, FUNC_26(VAR_13));
   if (VAR_13 == VAR_4) {
    FUNC_19("read() size too big? Try with -b 131072");
    VAR_11 = 1;
   }
   if (VAR_13 == VAR_5)
    VAR_11 = 1;
   FUNC_16(VAR_15->start, VAR_35, VAR_15->state + 1);
   VAR_15->start += VAR_35;
   VAR_15->len -= VAR_35;
  }
  if (VAR_11) {
   FUNC_23();
   return (0);
  }
  FUNC_5(&VAR_16, VAR_15, VAR_14);
  FUNC_10(VAR_15);
 }
 FUNC_1(VAR_33, VAR_35, VAR_34, VAR_38, VAR_32, VAR_31);
 FUNC_23();
 FUNC_19("\nCompleted\n");
 return (0);
}
