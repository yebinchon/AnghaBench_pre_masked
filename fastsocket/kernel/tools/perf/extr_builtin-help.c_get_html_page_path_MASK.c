
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct strbuf *VAR_1, const char *VAR_2)
{
 struct stat VAR_3;
 const char *VAR_4 = FUNC_6(VAR_0);


 if (FUNC_3(FUNC_1("%s/perf.html", VAR_4), &VAR_3)
     || !FUNC_0(VAR_3.st_mode)) {
  FUNC_2("'%s': not a documentation directory.", VAR_4);
  return -1;
 }

 FUNC_5(VAR_1, 0);
 FUNC_4(VAR_1, "%s/%s.html", VAR_4, VAR_2);

 return 0;
}
