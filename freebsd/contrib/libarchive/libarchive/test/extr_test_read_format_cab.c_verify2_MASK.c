
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef enum comp_type { ____Placeholder_comp_type } comp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,char*,int) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 struct archive* FUNC_13 () ;
 int FUNC_14 (struct archive*,struct archive_entry**) ;
 int FUNC_15 (struct archive*,char const*,int) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (struct archive*) ;
 int * FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (struct archive*,int,int ) ;
 int FUNC_22 (char*,int ,int) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_25 (char*,int ,int) ;
 int FUNC_26 (char*,char const*) ;

__attribute__((used)) static void
FUNC_27(const char *VAR_10, enum comp_type VAR_11)
{
 struct archive_entry *VAR_12;
 struct archive *VAR_13;
 char VAR_14[128];
 char VAR_15[128];

 if (VAR_11 == VAR_6 && FUNC_18() == ((void*)0)) {
  FUNC_26("Skipping CAB format(MSZIP) check for %s",
    VAR_10);
  return;
 }
 FUNC_25(VAR_15, 0, sizeof(VAR_15));
 FUNC_24(VAR_10);
 FUNC_19((VAR_13 = FUNC_13()) != ((void*)0));
 FUNC_21(VAR_13, VAR_4, FUNC_16(VAR_13));
 FUNC_21(VAR_13, VAR_4, FUNC_17(VAR_13));
 FUNC_21(VAR_13, VAR_4,
     FUNC_15(VAR_13, VAR_10, 10240));


 FUNC_21(VAR_13, VAR_4, FUNC_14(VAR_13, &VAR_12));
 FUNC_20(FUNC_1(VAR_12), 0);
 FUNC_21(VAR_13, FUNC_12(VAR_13), VAR_5);
 if (VAR_11 != VAR_7) {
  FUNC_21(VAR_13, VAR_4, FUNC_14(VAR_13, &VAR_12));
  FUNC_20(FUNC_1(VAR_12), 0);
  FUNC_21(VAR_13, FUNC_12(VAR_13), VAR_5);
 }

 FUNC_21(VAR_13, VAR_4, FUNC_14(VAR_13, &VAR_12));
 FUNC_20(FUNC_1(VAR_12), 0);
 FUNC_21(VAR_13, FUNC_12(VAR_13), VAR_5);


 FUNC_21(VAR_13, VAR_4, FUNC_14(VAR_13, &VAR_12));
 FUNC_20((VAR_0 | 0666), FUNC_2(VAR_12));
 FUNC_23("dir2/file2", FUNC_3(VAR_12));
 FUNC_20(0, FUNC_5(VAR_12));
 FUNC_20(0, FUNC_0(VAR_12));
 FUNC_20(VAR_9, FUNC_4(VAR_12));
 FUNC_20(VAR_9, FUNC_10(VAR_13, VAR_14, VAR_9));
 FUNC_22(VAR_14, VAR_8, VAR_9);


 FUNC_21(VAR_13, VAR_1, FUNC_14(VAR_13, &VAR_12));

 if (VAR_11 != VAR_7) {
  FUNC_20(4, FUNC_6(VAR_13));
 } else {
  FUNC_20(3, FUNC_6(VAR_13));
 }


 FUNC_21(VAR_13, VAR_2, FUNC_7(VAR_13, 0));
 FUNC_21(VAR_13, VAR_3, FUNC_8(VAR_13));


 FUNC_20(VAR_4, FUNC_9(VAR_13));
 FUNC_20(VAR_4, FUNC_11(VAR_13));
}
