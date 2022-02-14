
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int const*) ;
 int FUNC_1 (char*,int,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, const char *VAR_2, const u_char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 && VAR_4 != VAR_0) {
  FUNC_1("can not setup kernel iconv table (%s:%s)", VAR_4,
      VAR_2, VAR_1);
  return VAR_4;
 }
 return 0;
}
