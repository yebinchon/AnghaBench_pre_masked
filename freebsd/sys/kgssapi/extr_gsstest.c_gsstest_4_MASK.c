
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct TYPE_6__ {int rpc_gss_error; int system_error; } ;
typedef TYPE_1__ rpc_gss_error_t ;
struct TYPE_7__ {int program; int version; int callback; } ;
typedef TYPE_2__ rpc_gss_callback_t ;
typedef int principal ;
typedef int SVCPOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,char const*,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 char** FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,char const*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *,int ,int,int,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct thread *VAR_3)
{
 SVCPOOL *VAR_4;
 char VAR_5[128 + 5];
 const char **VAR_6;
 static rpc_gss_callback_t VAR_7;

 FUNC_1(VAR_5, "host@", 5);
 FUNC_0(VAR_3->td_ucred, VAR_5 + 5, sizeof(VAR_5) - 5);

 VAR_6 = FUNC_6();
 while (*VAR_6) {
  if (!FUNC_8(VAR_5, *VAR_6, VAR_0,
   123456, 1)) {
   rpc_gss_error_t VAR_8;

   FUNC_5(&VAR_8);
   FUNC_2("setting name for %s for %s failed: %d, %d\n",
       VAR_5, *VAR_6,
       VAR_8.rpc_gss_error, VAR_8.system_error);
  }
  VAR_6++;
 }

 VAR_7.program = 123456;
 VAR_7.version = 1;
 VAR_7.callback = VAR_1;
 FUNC_7(&VAR_7);

 VAR_4 = FUNC_11("gsstest", ((void*)0));

 FUNC_9(VAR_4, VAR_2, 123456, 1, ((void*)0));
 FUNC_10(VAR_4);

 FUNC_4(123456, 1);
 FUNC_3(&VAR_7);

 FUNC_12(VAR_4);

 return (0);
}
