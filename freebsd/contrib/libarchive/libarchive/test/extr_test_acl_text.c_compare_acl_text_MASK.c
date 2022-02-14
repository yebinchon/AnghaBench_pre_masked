
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct archive_entry {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct archive_entry*,int *,int) ;
 char* FUNC_1 (struct archive_entry*,int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct archive_entry *VAR_0, int VAR_1, const char *VAR_2)
{
 char *VAR_3;
 wchar_t *VAR_4;
 wchar_t *VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_5(VAR_2);

 VAR_3 = FUNC_0(VAR_0, &VAR_6, VAR_1);
 FUNC_3(VAR_3, VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_2(FUNC_7(VAR_3), VAR_6);
 VAR_4 = FUNC_1(VAR_0, &VAR_6, VAR_1);
 FUNC_4(VAR_4, VAR_5);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(FUNC_8(VAR_4), VAR_6);
 }
 FUNC_6(VAR_3);
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
}
