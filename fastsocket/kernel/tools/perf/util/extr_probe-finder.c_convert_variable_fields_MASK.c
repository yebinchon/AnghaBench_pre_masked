
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;
struct perf_probe_arg_field {char* name; int index; struct perf_probe_arg_field* next; scalar_t__ ref; } ;
typedef scalar_t__ Dwarf_Word ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*,char*,char const*) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,...) ;
 struct probe_trace_arg_ref* FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(Dwarf_Die *VAR_8, const char *VAR_9,
        struct perf_probe_arg_field *VAR_10,
        struct probe_trace_arg_ref **VAR_11,
        Dwarf_Die *VAR_12)
{
 struct probe_trace_arg_ref *VAR_13 = *VAR_11;
 Dwarf_Die VAR_14;
 Dwarf_Word VAR_15;
 int VAR_16, VAR_17;

 FUNC_8("converting %s in %s\n", VAR_10->name, VAR_9);
 if (FUNC_2(VAR_8, &VAR_14) == ((void*)0)) {
  FUNC_11("Failed to get the type of %s.\n", VAR_9);
  return -VAR_5;
 }
 FUNC_9("Var real type: (%x)\n", (unsigned)FUNC_5(&VAR_14));
 VAR_17 = FUNC_6(&VAR_14);

 if (VAR_10->name[0] == '[' &&
     (VAR_17 == VAR_0 || VAR_17 == VAR_1)) {
  if (VAR_10->next)

   FUNC_7(VAR_12, &VAR_14, sizeof(*VAR_12));

  if (FUNC_2(&VAR_14, &VAR_14) == ((void*)0)) {
   FUNC_11("Failed to get the type of %s.\n", VAR_9);
   return -VAR_5;
  }
  FUNC_9("Array real type: (%x)\n",
    (unsigned)FUNC_5(&VAR_14));
  if (VAR_17 == VAR_1) {
   VAR_13 = FUNC_12(sizeof(struct probe_trace_arg_ref));
   if (VAR_13 == ((void*)0))
    return -VAR_6;
   if (*VAR_11)
    (*VAR_11)->next = VAR_13;
   else
    *VAR_11 = VAR_13;
  }
  VAR_13->offset += FUNC_3(&VAR_14) * VAR_10->index;
  if (!VAR_10->next)

   FUNC_7(VAR_12, VAR_8, sizeof(*VAR_12));
  goto next;
 } else if (VAR_17 == VAR_1) {

  if (!VAR_10->ref) {
   FUNC_10("Semantic error: %s must be referred by '->'\n",
          VAR_10->name);
   return -VAR_4;
  }

  if (FUNC_2(&VAR_14, &VAR_14) == ((void*)0)) {
   FUNC_11("Failed to get the type of %s.\n", VAR_9);
   return -VAR_5;
  }

  VAR_17 = FUNC_6(&VAR_14);
  if (VAR_17 != VAR_2 && VAR_17 != VAR_3) {
   FUNC_11("%s is not a data structure nor an union.\n",
       VAR_9);
   return -VAR_4;
  }

  VAR_13 = FUNC_12(sizeof(struct probe_trace_arg_ref));
  if (VAR_13 == ((void*)0))
   return -VAR_6;
  if (*VAR_11)
   (*VAR_11)->next = VAR_13;
  else
   *VAR_11 = VAR_13;
 } else {

  if (VAR_17 != VAR_2 && VAR_17 != VAR_3) {
   FUNC_11("%s is not a data structure nor an union.\n",
       VAR_9);
   return -VAR_4;
  }
  if (VAR_10->name[0] == '[') {
   FUNC_10("Semantic error: %s is not a pointor"
          " nor array.\n", VAR_9);
   return -VAR_4;
  }
  if (VAR_10->ref) {
   FUNC_10("Semantic error: %s must be referred by '.'\n",
          VAR_10->name);
   return -VAR_4;
  }
  if (!VAR_13) {
   FUNC_11("Structure on a register is not "
       "supported yet.\n");
   return -VAR_7;
  }
 }

 if (FUNC_0(&VAR_14, VAR_10->name, VAR_12) == ((void*)0)) {
  FUNC_11("%s(tyep:%s) has no member %s.\n", VAR_9,
      FUNC_4(&VAR_14), VAR_10->name);
  return -VAR_4;
 }


 if (VAR_17 == VAR_3) {
  VAR_15 = 0;
 } else {
  VAR_16 = FUNC_1(VAR_12, &VAR_15);
  if (VAR_16 < 0) {
   FUNC_11("Failed to get the offset of %s.\n",
       VAR_10->name);
   return VAR_16;
  }
 }
 VAR_13->offset += (long)VAR_15;

next:

 if (VAR_10->next)
  return FUNC_13(VAR_12, VAR_10->name,
     VAR_10->next, &VAR_13, VAR_12);
 else
  return 0;
}
