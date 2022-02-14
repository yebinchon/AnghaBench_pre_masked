
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 struct archive* FUNC_1 () ;
 int FUNC_2 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_3 (struct archive*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct archive *VAR_2;
 struct archive_string_conv *VAR_3;

 FUNC_9(VAR_1, "en_US.UTF-8");

 FUNC_4((VAR_2 = FUNC_1()) != ((void*)0));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF-8", 1)));
 FUNC_8("Charset name should be UTF-8");
 FUNC_7("UTF-8",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF8", 1)));
 FUNC_8("Charset name should be UTF-8");
 FUNC_7("UTF-8",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "utf8", 1)));
 FUNC_8("Charset name should be UTF-8");
 FUNC_7("UTF-8",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF-16BE", 1)));
 FUNC_8("Charset name should be UTF-16BE");
 FUNC_7("UTF-16BE",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF16BE", 1)));
 FUNC_8("Charset name should be UTF-16BE");
 FUNC_7("UTF-16BE",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "utf16be", 1)));
 FUNC_8("Charset name should be UTF-16BE");
 FUNC_7("UTF-16BE",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF-16LE", 1)));
 FUNC_8("Charset name should be UTF-16LE");
 FUNC_7("UTF-16LE",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "UTF16LE", 1)));
 FUNC_8("Charset name should be UTF-16LE");
 FUNC_7("UTF-16LE",
     FUNC_2(VAR_3));

 FUNC_5(((void*)0) != (VAR_3 =
     FUNC_3(VAR_2, "utf16le", 1)));
 FUNC_8("Charset name should be UTF-16LE");
 FUNC_7("UTF-16LE",
     FUNC_2(VAR_3));

 FUNC_6(VAR_0, FUNC_0(VAR_2));

}
