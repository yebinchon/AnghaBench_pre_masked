
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*) ;
 struct archive* FUNC_2 () ;
 int FUNC_3 (struct archive*,struct archive_entry**) ;
 int FUNC_4 (struct archive*,char const*,int) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 static const char VAR_2[] = "test_pax_filename_encoding.tar";




 char VAR_3[] = "abc\314\214mno\374xyz";
 struct archive *VAR_4;
 struct archive_entry *VAR_5;




 FUNC_9(VAR_2);
 VAR_4 = FUNC_2();
 FUNC_7(VAR_0, FUNC_6(VAR_4));
 FUNC_7(VAR_0, FUNC_5(VAR_4));
 FUNC_7(VAR_0,
     FUNC_4(VAR_4, VAR_2, 10240));





 FUNC_10("Invalid UTF8 in a pax archive pathname should cause a warning");
 FUNC_7(VAR_1, FUNC_3(VAR_4, &VAR_5));
 FUNC_8(VAR_3, FUNC_0(VAR_5));




 FUNC_10("A pathname with hdrcharset=BINARY can have invalid UTF8\n"
     " characters in it without generating a warning");
 FUNC_7(VAR_0, FUNC_3(VAR_4, &VAR_5));
 FUNC_8(VAR_3, FUNC_0(VAR_5));
 FUNC_1(VAR_4);
}
