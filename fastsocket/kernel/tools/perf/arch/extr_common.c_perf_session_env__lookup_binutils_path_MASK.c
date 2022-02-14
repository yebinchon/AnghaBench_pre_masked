
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int machine; } ;
struct perf_session_env {int arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char**,char*,char const* const,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char const* const*,char const*) ;
 char** VAR_2 ;
 char const* FUNC_6 (int ) ;
 char** VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,char const*,...) ;
 scalar_t__ FUNC_9 (struct utsname*) ;
 char** VAR_7 ;

__attribute__((used)) static int FUNC_10(struct perf_session_env *VAR_8,
        const char *VAR_9,
        const char **VAR_10)
{
 int VAR_11;
 const char *VAR_12, *VAR_13;
 struct utsname VAR_14;
 const char *const *VAR_15;
 char *VAR_16 = ((void*)0);

 VAR_12 = FUNC_6(VAR_8->arch);

 if (FUNC_9(&VAR_14) < 0)
  goto out;





 if (!FUNC_7(FUNC_6(VAR_14.machine), VAR_12))
  goto out;

 VAR_13 = FUNC_3("CROSS_COMPILE");
 if (VAR_13) {
  if (FUNC_1(&VAR_16, "%s%s", VAR_13, VAR_9) < 0)
   goto out_error;
  if (VAR_16[0] == '/') {
   if (FUNC_0(VAR_16, VAR_0) == 0)
    goto out;
   goto out_error;
  }
  if (FUNC_4(VAR_16))
   goto out;
  FUNC_2(VAR_16);
 }

 if (!FUNC_7(VAR_12, "arm"))
  VAR_15 = VAR_1;
 else if (!FUNC_7(VAR_12, "powerpc"))
  VAR_15 = VAR_3;
 else if (!FUNC_7(VAR_12, "sh"))
  VAR_15 = VAR_5;
 else if (!FUNC_7(VAR_12, "s390"))
  VAR_15 = VAR_4;
 else if (!FUNC_7(VAR_12, "sparc"))
  VAR_15 = VAR_6;
 else if (!FUNC_7(VAR_12, "x86"))
  VAR_15 = VAR_7;
 else if (!FUNC_7(VAR_12, "mips"))
  VAR_15 = VAR_2;
 else {
  FUNC_8("binutils for %s not supported.\n", VAR_12);
  goto out_error;
 }

 VAR_11 = FUNC_5(VAR_15, VAR_9);
 if (VAR_11 < 0) {
  FUNC_8("Please install %s for %s.\n"
     "You can add it to PATH, set CROSS_COMPILE or "
     "override the default using --%s.\n",
     VAR_9, VAR_12, VAR_9);
  goto out_error;
 }

 if (FUNC_1(&VAR_16, "%s%s", VAR_15[VAR_11], VAR_9) < 0)
  goto out_error;

out:
 *VAR_10 = VAR_16;
 return 0;
out_error:
 FUNC_2(VAR_16);
 *VAR_10 = ((void*)0);
 return -1;
}
