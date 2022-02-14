
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {int dummy; } ;
typedef int e ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int,char*) ;
 scalar_t__ FUNC_2 (char const*,struct eui64*) ;
 int FUNC_3 (struct eui64*,char*,int) ;
 int FUNC_4 (struct eui64*,struct eui64 const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1, const struct eui64 *VAR_2)
{
 struct eui64 VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_0(FUNC_2(VAR_1, &VAR_3) == 0, "eui64_aton failed");
 VAR_5 = FUNC_4(&VAR_3, VAR_2, sizeof(VAR_3));
 if (VAR_5 != 0) {
  FUNC_3(&VAR_3, VAR_4, sizeof(VAR_4));
  FUNC_1(
      "eui64_aton(\"%s\", ..) failed; memcmp returned %d. "
      "String obtained form eui64_ntoa was: `%s`",
      VAR_1, VAR_5, VAR_4);
 }
}
