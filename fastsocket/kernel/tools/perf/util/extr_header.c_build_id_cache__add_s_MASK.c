
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kptr_restrict; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (char*,size_t const,char*,char const*,char const*,...) ;
 int FUNC_9 (char*,size_t const,char*,char const*) ;
 int FUNC_10 (char const*) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (size_t const) ;

int FUNC_13(const char *VAR_5, const char *VAR_6,
     const char *VAR_7, bool VAR_8, bool VAR_9)
{
 const size_t VAR_10 = VAR_1;
 char *VAR_11, *VAR_12 = FUNC_12(VAR_10),
      *VAR_13 = FUNC_12(VAR_10), *VAR_14;
 int VAR_15, VAR_16 = -1;
 bool VAR_17 = VAR_8 || VAR_9;

 if (VAR_8) {
  if (VAR_4.kptr_restrict) {
   FUNC_6("Not caching a kptr_restrict'ed /proc/kallsyms\n");
   return 0;
  }
  VAR_11 = (char *) VAR_7;
 } else
  VAR_11 = FUNC_7(VAR_7, ((void*)0));

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  goto out_free;

 VAR_15 = FUNC_8(VAR_12, VAR_10, "%s%s%s",
         VAR_6, VAR_17 ? "/" : "",
         VAR_9 ? VAR_2 : VAR_11);
 if (FUNC_5(VAR_12, 0755))
  goto out_free;

 FUNC_9(VAR_12 + VAR_15, VAR_10 - VAR_15, "/%s", VAR_5);

 if (FUNC_0(VAR_12, VAR_0)) {
  if (VAR_8) {
    if (FUNC_1("/proc/kallsyms", VAR_12))
    goto out_free;
  } else if (FUNC_3(VAR_11, VAR_12) && FUNC_1(VAR_7, VAR_12))
   goto out_free;
 }

 VAR_15 = FUNC_8(VAR_13, VAR_10, "%s/.build-id/%.2s",
         VAR_6, VAR_5);

 if (FUNC_0(VAR_13, VAR_3) && FUNC_5(VAR_13, 0755))
  goto out_free;

 FUNC_9(VAR_13 + VAR_15, VAR_10 - VAR_15, "/%s", VAR_5 + 2);
 VAR_14 = VAR_12 + FUNC_10(VAR_6) - 5;
 FUNC_4(VAR_14, "../..", 5);

 if (FUNC_11(VAR_14, VAR_13) == 0)
  VAR_16 = 0;
out_free:
 if (!VAR_8)
  FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 FUNC_2(VAR_13);
 return VAR_16;
}
