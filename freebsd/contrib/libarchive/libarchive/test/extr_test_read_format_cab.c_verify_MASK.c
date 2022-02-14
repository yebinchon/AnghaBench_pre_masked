
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum comp_type { ____Placeholder_comp_type } comp_type ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 scalar_t__ FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 scalar_t__ FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 scalar_t__ FUNC_11 (struct archive*,char*,int) ;
 scalar_t__ FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 struct archive* FUNC_14 () ;
 int FUNC_15 (struct archive*,struct archive_entry**) ;
 int FUNC_16 (struct archive*,char const*,int) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*) ;
 int * FUNC_19 () ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int,scalar_t__) ;
 int FUNC_22 (struct archive*,int,int ) ;
 int FUNC_23 (char*,char*,int) ;
 int FUNC_24 (char*,int ) ;
 int FUNC_25 (char const*) ;
 char* VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_26 (char*,int ,int) ;
 int FUNC_27 (char*,int ) ;

__attribute__((used)) static void
FUNC_28(const char *VAR_13, enum comp_type VAR_14)
{
 struct archive_entry *VAR_15;
 struct archive *VAR_16;
 char VAR_17[128];
 char VAR_18[128];
 size_t VAR_19;

 FUNC_26(VAR_18, 0, sizeof(VAR_18));
 FUNC_25(VAR_13);
 FUNC_20((VAR_16 = FUNC_14()) != ((void*)0));
 FUNC_22(VAR_16, VAR_5, FUNC_17(VAR_16));
 FUNC_22(VAR_16, VAR_5, FUNC_18(VAR_16));
 FUNC_22(VAR_16, VAR_5,
     FUNC_16(VAR_16, VAR_13, 10240));


 FUNC_22(VAR_16, VAR_5, FUNC_15(VAR_16, &VAR_15));
 FUNC_21((VAR_0 | 0666), FUNC_2(VAR_15));
 FUNC_24("empty", FUNC_3(VAR_15));
 FUNC_21(0, FUNC_5(VAR_15));
 FUNC_21(0, FUNC_0(VAR_15));
 FUNC_21(0, FUNC_4(VAR_15));
 FUNC_21(FUNC_1(VAR_15), 0);
 FUNC_22(VAR_16, FUNC_13(VAR_16), VAR_6);

 if (VAR_14 != VAR_8) {




  FUNC_22(VAR_16, VAR_5, FUNC_15(VAR_16, &VAR_15));
  FUNC_21((VAR_0 | 0666), FUNC_2(VAR_15));
  FUNC_24("zero", FUNC_3(VAR_15));
  FUNC_21(0, FUNC_5(VAR_15));
  FUNC_21(0, FUNC_0(VAR_15));
  FUNC_21(FUNC_1(VAR_15), 0);
  FUNC_22(VAR_16, FUNC_13(VAR_16), VAR_6);
  FUNC_21(33000, FUNC_4(VAR_15));
  for (VAR_19 = 0; VAR_19 + sizeof(VAR_17) < 33000; VAR_19+= sizeof(VAR_17)) {
   ssize_t VAR_20 = FUNC_11(VAR_16, VAR_17, sizeof(VAR_17));
   if (VAR_14 == VAR_7 && VAR_20 == VAR_2 && FUNC_19() == ((void*)0)) {
    FUNC_27("Skipping CAB format(MSZIP) check: %s",
        FUNC_6(VAR_16));
    goto finish;
   }
   FUNC_21(sizeof(VAR_17), VAR_20);
   FUNC_23(VAR_17, VAR_18, sizeof(VAR_17));
  }
  FUNC_21(33000 - VAR_19, FUNC_11(VAR_16, VAR_17, 33000 - VAR_19));
  FUNC_23(VAR_17, VAR_18, 33000 - VAR_19);
 }


 FUNC_22(VAR_16, VAR_5, FUNC_15(VAR_16, &VAR_15));
 FUNC_21((VAR_0 | 0666), FUNC_2(VAR_15));
 FUNC_24("dir1/file1", FUNC_3(VAR_15));
 FUNC_21(0, FUNC_5(VAR_15));
 FUNC_21(0, FUNC_0(VAR_15));
 FUNC_21(FUNC_1(VAR_15), 0);
 FUNC_22(VAR_16, FUNC_13(VAR_16), VAR_6);
 FUNC_21(VAR_10, FUNC_4(VAR_15));
 FUNC_21(VAR_10, FUNC_11(VAR_16, VAR_17, VAR_10));
 FUNC_23(VAR_17, VAR_9, VAR_10);


 FUNC_22(VAR_16, VAR_5, FUNC_15(VAR_16, &VAR_15));
 FUNC_21((VAR_0 | 0666), FUNC_2(VAR_15));
 FUNC_24("dir2/file2", FUNC_3(VAR_15));
 FUNC_21(0, FUNC_5(VAR_15));
 FUNC_21(0, FUNC_0(VAR_15));
 FUNC_21(FUNC_1(VAR_15), 0);
 FUNC_22(VAR_16, FUNC_13(VAR_16), VAR_6);
 FUNC_21(VAR_12, FUNC_4(VAR_15));
 FUNC_21(VAR_12, FUNC_11(VAR_16, VAR_17, VAR_12));
 FUNC_23(VAR_17, VAR_11, VAR_12);


 FUNC_22(VAR_16, VAR_1, FUNC_15(VAR_16, &VAR_15));

 if (VAR_14 != VAR_8) {
  FUNC_21(4, FUNC_7(VAR_16));
 } else {
  FUNC_21(3, FUNC_7(VAR_16));
 }


 FUNC_22(VAR_16, VAR_3, FUNC_8(VAR_16, 0));
 FUNC_22(VAR_16, VAR_4, FUNC_9(VAR_16));


finish:
 FUNC_21(VAR_5, FUNC_10(VAR_16));
 FUNC_21(VAR_5, FUNC_12(VAR_16));
}
