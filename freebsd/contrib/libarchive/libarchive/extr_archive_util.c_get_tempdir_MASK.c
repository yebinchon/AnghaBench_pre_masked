
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; int length; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct archive_string*,char) ;
 int FUNC_1 (struct archive_string*,char const*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct archive_string *VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_2("TMPDIR");
 if (VAR_3 == ((void*)0))



                VAR_3 = "/tmp";

 FUNC_1(VAR_2, VAR_3);
 if (VAR_2->s[VAR_2->length-1] != '/')
  FUNC_0(VAR_2, '/');
 return (VAR_0);
}
