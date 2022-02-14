
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mismatch { ____Placeholder_mismatch } mismatch ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_2 (char*,char const*,char const*,unsigned long long,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_4, enum mismatch VAR_5,
                                const char *VAR_6,
                                unsigned long long VAR_7,
                                const char *VAR_8,
                                int VAR_9,
                                const char *VAR_10, const char *VAR_11,
                                int VAR_12)
{
 const char *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;

 switch (VAR_9) {
 case 0: VAR_13 = "variable"; VAR_14 = ""; break;
 case 1: VAR_13 = "function"; VAR_14 = "()"; break;
 default: VAR_13 = "(unknown reference)"; VAR_14 = ""; break;
 }
 switch (VAR_12) {
 case 0: VAR_15 = "variable"; VAR_16 = ""; break;
 case 1: VAR_15 = "function"; VAR_16 = "()"; break;
 default: VAR_15 = "(unknown reference)"; VAR_16 = ""; break;
 }

 VAR_0++;
 if (!VAR_1)
  return;

 FUNC_2("%s(%s+0x%llx): Section mismatch in reference from the %s %s%s "
      "to the %s %s:%s%s\n",
      VAR_4, VAR_6, VAR_7, VAR_13, VAR_8, VAR_14, VAR_15, VAR_10,
      VAR_11, VAR_16);

 switch (VAR_5) {
 case 130:
  FUNC_0(VAR_2,
  "The function %s%s() references\n"
  "the %s %s%s%s.\n"
  "This is often because %s lacks a %s\n"
  "annotation or the annotation of %s is wrong.\n",
  FUNC_1(VAR_6), VAR_8,
  VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16,
  VAR_8, FUNC_1(VAR_10), VAR_11);
  break;
 case 136: {
  const char **VAR_17 = VAR_3;
  FUNC_0(VAR_2,
  "The variable %s references\n"
  "the %s %s%s%s\n"
  "If the reference is valid then annotate the\n"
  "variable with __init* or __refdata (see linux/init.h) "
  "or name the variable:\n",
  VAR_8, VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16);
  while (*VAR_17)
   FUNC_0(VAR_2, "%s, ", *VAR_17++);
  FUNC_0(VAR_2, "\n");
  break;
 }
 case 131:
  FUNC_0(VAR_2,
  "The function %s() references a %s in an exit section.\n"
  "Often the %s %s%s has valid usage outside the exit section\n"
  "and the fix is to remove the %sannotation of %s.\n",
  VAR_8, VAR_15, VAR_15, VAR_11, VAR_16, FUNC_1(VAR_10), VAR_11);
  break;
 case 137: {
  const char **VAR_18 = VAR_3;
  FUNC_0(VAR_2,
  "The variable %s references\n"
  "the %s %s%s%s\n"
  "If the reference is valid then annotate the\n"
  "variable with __exit* (see linux/init.h) or "
  "name the variable:\n",
  VAR_8, VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16);
  while (*VAR_18)
   FUNC_0(VAR_2, "%s, ", *VAR_18++);
  FUNC_0(VAR_2, "\n");
  break;
 }
 case 128:
 case 129:
  FUNC_0(VAR_2,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "If %s is only used by %s then\n"
  "annotate %s with a matching annotation.\n",
  VAR_13, FUNC_1(VAR_6), VAR_8, VAR_14,
  VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16,
  VAR_11, VAR_8, VAR_11);
  break;
 case 133:
  FUNC_0(VAR_2,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "This is often seen when error handling "
  "in the init function\n"
  "uses functionality in the exit path.\n"
  "The fix is often to remove the %sannotation of\n"
  "%s%s so it may be used outside an exit section.\n",
  VAR_13, FUNC_1(VAR_6), VAR_8, VAR_14,
  VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16,
  FUNC_1(VAR_10), VAR_11, VAR_16);
  break;
 case 135:
  FUNC_0(VAR_2,
  "The %s %s%s%s references\n"
  "a %s %s%s%s.\n"
  "This is often seen when error handling "
  "in the exit function\n"
  "uses functionality in the init path.\n"
  "The fix is often to remove the %sannotation of\n"
  "%s%s so it may be used outside an init section.\n",
  VAR_13, FUNC_1(VAR_6), VAR_8, VAR_14,
  VAR_15, FUNC_1(VAR_10), VAR_11, VAR_16,
  FUNC_1(VAR_10), VAR_11, VAR_16);
  break;
 case 134:
  FUNC_0(VAR_2,
  "The symbol %s is exported and annotated %s\n"
  "Fix this by removing the %sannotation of %s "
  "or drop the export.\n",
  VAR_11, FUNC_1(VAR_10), FUNC_1(VAR_10), VAR_11);
 case 132:

  break;
 }
 FUNC_0(VAR_2, "\n");
}
