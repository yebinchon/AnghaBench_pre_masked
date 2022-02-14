
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,int,int *) ;

__attribute__((used)) static const char *
FUNC_10(void)
{
 FILE *VAR_0;


 VAR_0 = FUNC_8("file", "wb");
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_1(10, FUNC_9("123456789", 1, 10, VAR_0));
 FUNC_7(VAR_0);


 FUNC_4("linkfile", "file");
 FUNC_2("file", "linkfile");


 if (FUNC_6())
  FUNC_5("symlink", "file", 0);


 FUNC_3("dir", 0775);

 return FUNC_6()
     ? "file linkfile symlink dir"
     : "file linkfile dir";
}
