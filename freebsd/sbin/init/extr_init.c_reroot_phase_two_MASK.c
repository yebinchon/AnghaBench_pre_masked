
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state_func_t ;
typedef int init_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static state_func_t
FUNC_7(void)
{
 char VAR_5[VAR_1], *VAR_6, *VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;




 VAR_10 = FUNC_3(VAR_2);
 if (VAR_10 != 0) {
  FUNC_0("RB_REBOOT failed: %s", FUNC_4(VAR_3));
  goto out;
 }
 VAR_9 = FUNC_2(VAR_0, "init_path", VAR_5, sizeof(VAR_5));
 if (VAR_9 <= 0) {
  VAR_8 = sizeof(VAR_5);
  VAR_10 = FUNC_6("kern.init_path",
      VAR_5, &VAR_8, ((void*)0), 0);
  if (VAR_10 != 0) {
   FUNC_0("failed to retrieve kern.init_path: %s",
       FUNC_4(VAR_3));
   goto out;
  }
 }




 VAR_7 = VAR_5;
 while ((VAR_6 = FUNC_5(&VAR_7, ":")) != ((void*)0)) {



  FUNC_1(VAR_6, VAR_6, ((void*)0));
 }
 FUNC_0("cannot exec init from %s: %s", VAR_5, FUNC_4(VAR_3));

out:
 FUNC_0("reroot failed; going to single user mode");
 return (state_func_t) VAR_4;
}
