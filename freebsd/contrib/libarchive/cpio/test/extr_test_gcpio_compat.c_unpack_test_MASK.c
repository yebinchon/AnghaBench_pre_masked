
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*,...) ;
 int FUNC_13 (char*,int ,char const*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_14(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4;


 FUNC_8(VAR_1, 0775);
 FUNC_0(VAR_1);




 FUNC_11(VAR_1);
 VAR_4 = FUNC_13("%s -i %s < %s >unpack.out 2>unpack.err",
     VAR_0, VAR_2, VAR_1);
 FUNC_12("Error invoking %s -i %s < %s",
     VAR_0, VAR_2, VAR_1);
 FUNC_1(VAR_4, 0);


 if (FUNC_10()) {
  FUNC_12("Error invoking %s -i %s < %s",
      VAR_0, VAR_2, VAR_1);
  FUNC_9(VAR_3, "unpack.err");
 }






 FUNC_6("file", 0644);
 FUNC_12("%s", VAR_1);
 FUNC_3("file", 10);
 FUNC_3("linkfile", 10);
 FUNC_12("%s", VAR_1);
 FUNC_2("file", 2);


 FUNC_12("%s", VAR_1);
 FUNC_5("linkfile", "file");
 FUNC_3("file", 10);
 FUNC_3("linkfile", 10);


 if (FUNC_10())
  FUNC_7("symlink", "file", 0);


 FUNC_4("dir", 0775);

 FUNC_0("..");
}
