
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {int * type; struct probe_trace_arg_ref* ref; } ;
typedef int Dwarf_Die ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int,char*,char,int,...) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 void* FUNC_14 (char const*) ;
 int FUNC_15 (int) ;
 struct probe_trace_arg_ref* FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(Dwarf_Die *VAR_7,
     struct probe_trace_arg *VAR_8,
     const char *VAR_9)
{
 struct probe_trace_arg_ref **VAR_10 = &VAR_8->ref;
 Dwarf_Die VAR_11;
 char VAR_12[16];
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;


 if (VAR_9 && FUNC_13(VAR_9, "string") != 0) {

  VAR_8->type = FUNC_14(VAR_9);
  return (VAR_8->type == ((void*)0)) ? -VAR_5 : 0;
 }

 VAR_13 = FUNC_5(VAR_7);
 if (VAR_13 > 0) {

  VAR_14 = FUNC_4(VAR_7);
  VAR_15 = FUNC_6(VAR_7);
  if (VAR_14 < 0 || VAR_15 < 0)
   return -VAR_4;
  VAR_16 = FUNC_12(VAR_12, 16, "b%d@%d/%zd", VAR_13, VAR_14,
    FUNC_0(VAR_15));
  goto formatted;
 }

 if (FUNC_2(VAR_7, &VAR_11) == ((void*)0)) {
  FUNC_11("Failed to get a type information of %s.\n",
      FUNC_7(VAR_7));
  return -VAR_4;
 }

 FUNC_9("%s type is %s.\n",
   FUNC_7(VAR_7), FUNC_7(&VAR_11));

 if (VAR_9 && FUNC_13(VAR_9, "string") == 0) {
  VAR_16 = FUNC_8(&VAR_11);
  if (VAR_16 != VAR_1 &&
      VAR_16 != VAR_0) {
   FUNC_11("Failed to cast into string: "
       "%s(%s) is not a pointer nor array.\n",
       FUNC_7(VAR_7), FUNC_7(&VAR_11));
   return -VAR_3;
  }
  if (VAR_16 == VAR_1) {
   if (FUNC_2(&VAR_11, &VAR_11) == ((void*)0)) {
    FUNC_11("Failed to get a type"
        " information.\n");
    return -VAR_4;
   }
   while (*VAR_10)
    VAR_10 = &(*VAR_10)->next;

   *VAR_10 = FUNC_16(sizeof(struct probe_trace_arg_ref));
   if (*VAR_10 == ((void*)0)) {
    FUNC_11("Out of memory error\n");
    return -VAR_5;
   }
  }
  if (!FUNC_1(&VAR_11, "char") &&
      !FUNC_1(&VAR_11, "unsigned char")) {
   FUNC_11("Failed to cast into string: "
       "%s is not (unsigned) char *.\n",
       FUNC_7(VAR_7));
   return -VAR_3;
  }
  VAR_8->type = FUNC_14(VAR_9);
  return (VAR_8->type == ((void*)0)) ? -VAR_5 : 0;
 }

 VAR_16 = FUNC_6(&VAR_11);
 if (VAR_16 <= 0)

  return 0;
 VAR_16 = FUNC_0(VAR_16);


 if (VAR_16 > VAR_6) {
  FUNC_10("%s exceeds max-bitwidth. Cut down to %d bits.\n",
   FUNC_7(&VAR_11), VAR_6);
  VAR_16 = VAR_6;
 }
 VAR_16 = FUNC_12(VAR_12, 16, "%c%d",
         FUNC_3(&VAR_11) ? 's' : 'u', VAR_16);

formatted:
 if (VAR_16 < 0 || VAR_16 >= 16) {
  if (VAR_16 >= 16)
   VAR_16 = -VAR_2;
  FUNC_11("Failed to convert variable type: %s\n",
      FUNC_15(-VAR_16));
  return VAR_16;
 }
 VAR_8->type = FUNC_14(VAR_12);
 if (VAR_8->type == ((void*)0))
  return -VAR_5;
 return 0;
}
