
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*) ;
 size_t FUNC_1 (struct archive_entry*) ;
 size_t FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 size_t FUNC_4 (struct archive_entry*) ;
 size_t FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*) ;
 size_t FUNC_8 (struct archive*) ;
 scalar_t__ FUNC_9 (struct archive*,char*,int) ;
 size_t FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 int FUNC_14 (struct archive*,char const*,int) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,size_t) ;
 int FUNC_19 (struct archive*,int,int ) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static void
FUNC_22()
{
 const char *VAR_5 = "test_read_format_7zip_ppmd.7z";
 struct archive_entry *VAR_6;
 struct archive *VAR_7;
 size_t VAR_8;
 ssize_t VAR_9;
 char VAR_10[1024];

 FUNC_21(VAR_5);
 FUNC_17((VAR_7 = FUNC_12()) != ((void*)0));
 FUNC_19(VAR_7, VAR_4, FUNC_15(VAR_7));
 FUNC_19(VAR_7, VAR_4, FUNC_16(VAR_7));
 FUNC_19(VAR_7, VAR_4,
     FUNC_14(VAR_7, VAR_5, 10240));


 FUNC_19(VAR_7, VAR_4, FUNC_13(VAR_7, &VAR_6));
 FUNC_18((VAR_0 | 0666), FUNC_1(VAR_6));
 FUNC_20("ppmd_test.txt", FUNC_3(VAR_6));
 FUNC_18(1322464589, FUNC_2(VAR_6));
 FUNC_18(102400, FUNC_4(VAR_6));
 FUNC_18(FUNC_0(VAR_6), 0);
 FUNC_19(VAR_7, FUNC_11(VAR_7), 0);
 VAR_8 = (size_t)FUNC_4(VAR_6);
 while (VAR_8) {
  if (VAR_8 < sizeof(VAR_10))
   FUNC_18(VAR_8,
       VAR_9 = FUNC_9(VAR_7, VAR_10, sizeof(VAR_10)));
  else
   FUNC_18(sizeof(VAR_10),
       VAR_9 = FUNC_9(VAR_7, VAR_10, sizeof(VAR_10)));
  if (VAR_9 > 0)
   VAR_8 -= VAR_9;
  else
   break;
 }
 FUNC_18(0, VAR_8);

 FUNC_18(1, FUNC_5(VAR_7));


 FUNC_19(VAR_7, VAR_1, FUNC_13(VAR_7, &VAR_6));


 FUNC_19(VAR_7, VAR_2, FUNC_6(VAR_7, 0));
 FUNC_19(VAR_7, VAR_3, FUNC_7(VAR_7));


 FUNC_18(VAR_4, FUNC_8(VAR_7));
 FUNC_18(VAR_4, FUNC_10(VAR_7));
}
