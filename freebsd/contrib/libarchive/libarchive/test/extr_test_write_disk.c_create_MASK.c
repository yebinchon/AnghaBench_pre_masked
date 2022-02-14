
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 struct archive* FUNC_3 () ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct archive*,int ,int ) ;
 int FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_12(struct archive_entry *VAR_4, const char *VAR_5)
{
 struct archive *VAR_6;
 struct stat VAR_7;


 FUNC_7((VAR_6 = FUNC_3()) != ((void*)0));
 FUNC_10("%s", VAR_5);
 FUNC_9(VAR_6, 0, FUNC_6(VAR_6, VAR_4));
 FUNC_9(VAR_6, 0, FUNC_4(VAR_6));
 FUNC_8(0, FUNC_5(VAR_6));


 FUNC_7(0 == FUNC_11(FUNC_2(VAR_4), &VAR_7));
 FUNC_10("%s", VAR_5);




 if (FUNC_0(VAR_4) == VAR_0)
  VAR_7.st_mode &= ~VAR_2;
 FUNC_8(VAR_7.st_mode & VAR_1,
     FUNC_1(VAR_4) & ~VAR_3 & VAR_1);

}
