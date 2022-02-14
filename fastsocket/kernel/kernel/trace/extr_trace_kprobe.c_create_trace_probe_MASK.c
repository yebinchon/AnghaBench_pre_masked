
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trace_probe {TYPE_1__* args; int nr_args; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct trace_probe*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct trace_probe*) ;
 struct trace_probe* FUNC_2 (char*,char*,void*,char*,unsigned long,int,int) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*,int) ;
 struct trace_probe* FUNC_4 (char*,char*) ;
 int FUNC_5 (struct trace_probe*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char) ;
 void* FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,struct trace_probe*,TYPE_1__*,int) ;
 int FUNC_12 (char*,...) ;
 int VAR_7 ;
 int FUNC_13 (struct trace_probe*) ;
 int FUNC_14 (char*,int,char*,int,...) ;
 int FUNC_15 (char*,unsigned long*) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,int ,unsigned long*) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (struct trace_probe*) ;

__attribute__((used)) static int FUNC_20(int VAR_8, char **VAR_9)
{
 struct trace_probe *VAR_10;
 int VAR_11, VAR_12 = 0;
 bool VAR_13 = 0, VAR_14 = 0;
 char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 char *VAR_18;
 unsigned long VAR_19 = 0;
 void *VAR_20 = ((void*)0);
 char VAR_21[VAR_5];


 if (VAR_9[0][0] == 'p')
  VAR_13 = 0;
 else if (VAR_9[0][0] == 'r')
  VAR_13 = 1;
 else if (VAR_9[0][0] == '-')
  VAR_14 = 1;
 else {
  FUNC_12("Probe definition must be started with 'p', 'r' or"
   " '-'.\n");
  return -VAR_0;
 }

 if (VAR_9[0][1] == ':') {
  VAR_16 = &VAR_9[0][2];
  if (FUNC_16(VAR_16, '/')) {
   VAR_17 = VAR_16;
   VAR_16 = FUNC_16(VAR_17, '/') + 1;
   VAR_16[-1] = '\0';
   if (FUNC_18(VAR_17) == 0) {
    FUNC_12("Group name is not specified\n");
    return -VAR_0;
   }
  }
  if (FUNC_18(VAR_16) == 0) {
   FUNC_12("Event name is not specified\n");
   return -VAR_0;
  }
 }
 if (!VAR_17)
  VAR_17 = VAR_4;

 if (VAR_14) {
  if (!VAR_16) {
   FUNC_12("Delete command needs an event name.\n");
   return -VAR_0;
  }
  FUNC_9(&VAR_7);
  VAR_10 = FUNC_4(VAR_16, VAR_17);
  if (!VAR_10) {
   FUNC_10(&VAR_7);
   FUNC_12("Event %s/%s doesn't exist.\n", VAR_17, VAR_16);
   return -VAR_1;
  }

  VAR_12 = FUNC_19(VAR_10);
  if (VAR_12 == 0)
   FUNC_5(VAR_10);
  FUNC_10(&VAR_7);
  return VAR_12;
 }

 if (VAR_8 < 2) {
  FUNC_12("Probe point is not specified.\n");
  return -VAR_0;
 }
 if (FUNC_7(VAR_9[1][0])) {
  if (VAR_13) {
   FUNC_12("Return probe point must be a symbol.\n");
   return -VAR_0;
  }

  VAR_12 = FUNC_17(&VAR_9[1][0], 0, (unsigned long *)&VAR_20);
  if (VAR_12) {
   FUNC_12("Failed to parse address.\n");
   return VAR_12;
  }
 } else {

  VAR_15 = VAR_9[1];

  VAR_12 = FUNC_15(VAR_15, &VAR_19);
  if (VAR_12) {
   FUNC_12("Failed to parse symbol.\n");
   return VAR_12;
  }
  if (VAR_19 && VAR_13) {
   FUNC_12("Return probe must be used without offset.\n");
   return -VAR_0;
  }
 }
 VAR_8 -= 2; VAR_9 += 2;


 if (!VAR_16) {

  if (VAR_15)
   FUNC_14(VAR_21, VAR_5, "%c_%s_%ld",
     VAR_13 ? 'r' : 'p', VAR_15, VAR_19);
  else
   FUNC_14(VAR_21, VAR_5, "%c_0x%p",
     VAR_13 ? 'r' : 'p', VAR_20);
  VAR_16 = VAR_21;
 }
 VAR_10 = FUNC_2(VAR_17, VAR_16, VAR_20, VAR_15, VAR_19, VAR_8,
          VAR_13);
 if (FUNC_0(VAR_10)) {
  FUNC_12("Failed to allocate trace_probe.(%d)\n",
   (int)FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }


 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8 && VAR_11 < VAR_6; VAR_11++) {

  VAR_10->nr_args++;


  VAR_18 = FUNC_16(VAR_9[VAR_11], '=');
  if (VAR_18) {
   *VAR_18++ = '\0';
   VAR_10->args[VAR_11].name = FUNC_8(VAR_9[VAR_11], VAR_3);
  } else {
   VAR_18 = VAR_9[VAR_11];

   FUNC_14(VAR_21, VAR_5, "arg%d", VAR_11 + 1);
   VAR_10->args[VAR_11].name = FUNC_8(VAR_21, VAR_3);
  }

  if (!VAR_10->args[VAR_11].name) {
   FUNC_12("Failed to allocate argument[%d] name.\n", VAR_11);
   VAR_12 = -VAR_2;
   goto error;
  }

  if (!FUNC_6(VAR_10->args[VAR_11].name)) {
   FUNC_12("Invalid argument[%d] name: %s\n",
    VAR_11, VAR_10->args[VAR_11].name);
   VAR_12 = -VAR_0;
   goto error;
  }

  if (FUNC_3(VAR_10->args[VAR_11].name, VAR_10->args, VAR_11)) {
   FUNC_12("Argument[%d] name '%s' conflicts with "
    "another field.\n", VAR_11, VAR_9[VAR_11]);
   VAR_12 = -VAR_0;
   goto error;
  }


  VAR_12 = FUNC_11(VAR_18, VAR_10, &VAR_10->args[VAR_11], VAR_13);
  if (VAR_12) {
   FUNC_12("Parse error at argument[%d]. (%d)\n", VAR_11, VAR_12);
   goto error;
  }
 }

 VAR_12 = FUNC_13(VAR_10);
 if (VAR_12)
  goto error;
 return 0;

error:
 FUNC_5(VAR_10);
 return VAR_12;
}
