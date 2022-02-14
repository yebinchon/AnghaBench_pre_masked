
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct dirent {char const* d_name; } ;
struct cmdnames {int dummy; } ;
typedef int DIR ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct cmdnames*,char const*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (struct strbuf*,char*,char const*) ;
 int FUNC_8 (struct strbuf*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*,int) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(struct cmdnames *VAR_1,
      const char *VAR_2,
      const char *VAR_3)
{
 int VAR_4;
 DIR *VAR_5 = FUNC_4(VAR_2);
 struct dirent *VAR_6;
 struct strbuf VAR_7 = VAR_0;
 int VAR_8;

 if (!VAR_5)
  return;
 if (!VAR_3)
  VAR_3 = "perf-";
 VAR_4 = FUNC_11(VAR_3);

 FUNC_7(&VAR_7, "%s/", VAR_2);
 VAR_8 = VAR_7.len;

 while ((VAR_6 = FUNC_6(VAR_5)) != ((void*)0)) {
  int VAR_9;

  if (FUNC_5(VAR_6->d_name, VAR_3))
   continue;

  FUNC_10(&VAR_7, VAR_8);
  FUNC_8(&VAR_7, VAR_6->d_name);
  if (!FUNC_3(VAR_7.buf))
   continue;

  VAR_9 = FUNC_11(VAR_6->d_name) - VAR_4;
  if (FUNC_2(VAR_6->d_name, ".exe"))
   VAR_9 -= 4;

  FUNC_0(VAR_1, VAR_6->d_name + VAR_4, VAR_9);
 }
 FUNC_1(VAR_5);
 FUNC_9(&VAR_7);
}
