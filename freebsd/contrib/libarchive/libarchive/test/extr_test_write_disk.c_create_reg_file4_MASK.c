
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*,char const*,int,int ) ;
 struct archive* FUNC_3 () ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct archive*,int ,int ) ;
 int FUNC_10 (char const*,...) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_12(struct archive_entry *VAR_2, const char *VAR_3)
{
 static const char VAR_4[]="abcdefghijklmnopqrstuvwxyz";
 struct archive *VAR_5;
 struct stat VAR_6;


 FUNC_7((VAR_5 = FUNC_3()) != ((void*)0));

 FUNC_9(VAR_5, 0, FUNC_6(VAR_5, VAR_2));
 FUNC_8(VAR_0,
     FUNC_2(VAR_5, VAR_4, sizeof(VAR_4), 0));
 FUNC_9(VAR_5, 0, FUNC_4(VAR_5));
 FUNC_8(0, FUNC_5(VAR_5));


 FUNC_7(0 == FUNC_11(FUNC_1(VAR_2), &VAR_6));
 FUNC_10("st.st_mode=%o archive_entry_mode(ae)=%o",
     VAR_6.st_mode, FUNC_0(VAR_2));

 FUNC_8(VAR_6.st_mode, (FUNC_0(VAR_2) & ~VAR_1));

 FUNC_10(VAR_3);
 FUNC_8(VAR_6.st_size, sizeof(VAR_4));
}
