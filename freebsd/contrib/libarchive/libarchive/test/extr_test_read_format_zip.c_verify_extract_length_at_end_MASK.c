
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive*) ;
 char* FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,struct archive_entry*,int ) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*,struct archive_entry**) ;
 int * FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct archive*,int ,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_18(struct archive *VAR_3, int VAR_4)
{
 struct archive_entry *VAR_5;

 FUNC_15(VAR_3, VAR_2, FUNC_11(VAR_3, &VAR_5));

 FUNC_14(FUNC_0(VAR_5), 0);
 FUNC_15(VAR_3, FUNC_10(VAR_3), 0);
 FUNC_16("hello.txt", FUNC_2(VAR_5));
 if (VAR_4) {
  FUNC_14(VAR_0 | 0644, FUNC_1(VAR_5));
  FUNC_13(FUNC_4(VAR_5));
  FUNC_14(6, FUNC_3(VAR_5));
 } else {
  FUNC_13(!FUNC_4(VAR_5));
  FUNC_14(0, FUNC_3(VAR_5));
 }

 if (FUNC_12() != ((void*)0)) {
  FUNC_15(VAR_3, VAR_2, FUNC_8(VAR_3, VAR_5, 0));
  FUNC_17("hello\x0A", 6, "hello.txt");
 } else {
  FUNC_15(VAR_3, VAR_1, FUNC_8(VAR_3, VAR_5, 0));
  FUNC_16(FUNC_6(VAR_3),
      "Unsupported ZIP compression method (8: deflation)");
  FUNC_13(FUNC_5(VAR_3) != 0);
 }

 FUNC_15(VAR_3, VAR_2, FUNC_7(VAR_3));
 FUNC_15(VAR_3, VAR_2, FUNC_9(VAR_3));
}
