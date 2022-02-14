
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct child_process {char const** argv; int err; int stdout_to_stderr; } ;
typedef int ec_process ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct child_process*,int ,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int VAR_1 ;
 int FUNC_7 (struct strbuf*,int,int) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*,int ,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct strbuf VAR_2 = VAR_0;
 struct child_process VAR_3;
 const char *VAR_4[] = { "emacsclient", "--version", ((void*)0) };
 int VAR_5;


 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.argv = VAR_4;
 VAR_3.err = -1;
 VAR_3.stdout_to_stderr = 1;
 if (FUNC_6(&VAR_3)) {
  FUNC_3(VAR_1, "Failed to start emacsclient.\n");
  return -1;
 }
 FUNC_7(&VAR_2, VAR_3.err, 20);
 FUNC_1(VAR_3.err);





 FUNC_2(&VAR_3);

 if (FUNC_5(VAR_2.buf, "emacsclient")) {
  FUNC_3(VAR_1, "Failed to parse emacsclient version.\n");
  FUNC_8(&VAR_2);
  return -1;
 }

 FUNC_9(&VAR_2, 0, FUNC_10("emacsclient"));
 VAR_5 = FUNC_0(VAR_2.buf);

 if (VAR_5 < 22) {
  FUNC_3(VAR_1,
   "emacsclient version '%d' too old (< 22).\n",
   VAR_5);
  FUNC_8(&VAR_2);
  return -1;
 }

 FUNC_8(&VAR_2);
 return 0;
}
