
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const** argv; int in; int preexec_cb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 char const** VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*,char*) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_10(void)
{
 const char *VAR_9 = FUNC_4("PERF_PAGER");

 if (!FUNC_5(1))
  return;
 if (!VAR_9) {
  if (!VAR_4)
   FUNC_6(VAR_5, ((void*)0));
  VAR_9 = VAR_4;
 }
 if (!VAR_9)
  VAR_9 = FUNC_4("PAGER");
 if (!VAR_9) {
  if (!FUNC_0("/usr/bin/pager", VAR_0))
   VAR_9 = "/usr/bin/pager";
 }
 if (!VAR_9)
  VAR_9 = "less";
 else if (!*VAR_9 || !FUNC_9(VAR_9, "cat"))
  return;

 VAR_6 = 1;


 VAR_1[2] = VAR_9;
 VAR_3.argv = VAR_1;
 VAR_3.in = -1;
 VAR_3.preexec_cb = VAR_2;

 if (FUNC_8(&VAR_3))
  return;


 FUNC_3(VAR_3.in, 1);
 if (FUNC_5(2))
  FUNC_3(VAR_3.in, 2);
 FUNC_2(VAR_3.in);


 FUNC_7(VAR_8);
 FUNC_1(VAR_7);
}
