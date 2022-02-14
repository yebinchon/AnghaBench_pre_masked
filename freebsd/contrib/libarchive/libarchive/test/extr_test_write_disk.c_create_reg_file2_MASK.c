
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*,int const) ;
 int FUNC_3 (struct archive*,char*,int,int) ;
 struct archive* FUNC_4 () ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,struct archive_entry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct archive*,int ,int ) ;
 int FUNC_11 (char*,int const,int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int const) ;

__attribute__((used)) static void FUNC_17(struct archive_entry *VAR_1, const char *VAR_2)
{
 const int VAR_3 = 100000;
 char *VAR_4;
 struct archive *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_16(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_4[VAR_6] = (char)(VAR_6 % 256);


 FUNC_8((VAR_5 = FUNC_4()) != ((void*)0));
 FUNC_14("%s", VAR_2);




 FUNC_2(VAR_1, VAR_3);
 FUNC_10(VAR_5, 0, FUNC_7(VAR_5, VAR_1));
 for (VAR_6 = 0; VAR_6 < VAR_3 - 999; VAR_6 += 1000) {
  FUNC_10(VAR_5, VAR_0,
      FUNC_3(VAR_5, VAR_4 + VAR_6, 1000, VAR_6));
 }
 FUNC_10(VAR_5, 0, FUNC_5(VAR_5));
 FUNC_9(0, FUNC_6(VAR_5));


 FUNC_13(FUNC_1(VAR_1), FUNC_0(VAR_1) & 0777);
 FUNC_12(FUNC_1(VAR_1), VAR_6);
 FUNC_11(VAR_4, VAR_3, FUNC_1(VAR_1));
 FUNC_15(VAR_4);
}
