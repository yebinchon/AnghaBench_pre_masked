
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive*,char const*,int) ;
 struct archive* FUNC_4 () ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,struct archive_entry*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct archive*,int ,int ) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_13(struct archive_entry *VAR_1, const char *VAR_2)
{
 static const char VAR_3[]="abcdefghijklmnopqrstuvwxyz";
 struct archive *VAR_4;
 struct stat VAR_5;


 FUNC_8((VAR_4 = FUNC_4()) != ((void*)0));
 FUNC_11("%s", VAR_2);

 FUNC_2(VAR_1, 5);
 FUNC_10(VAR_4, 0, FUNC_7(VAR_4, VAR_1));
 FUNC_9(5, FUNC_3(VAR_4, VAR_3, sizeof(VAR_3)));
 FUNC_10(VAR_4, 0, FUNC_5(VAR_4));
 FUNC_9(0, FUNC_6(VAR_4));


 FUNC_8(0 == FUNC_12(FUNC_1(VAR_1), &VAR_5));
 FUNC_11("st.st_mode=%o archive_entry_mode(ae)=%o",
     VAR_5.st_mode, FUNC_0(VAR_1));

 FUNC_9(VAR_5.st_mode, (FUNC_0(VAR_1) & ~VAR_0));

 FUNC_9(VAR_5.st_size, 5);
}
