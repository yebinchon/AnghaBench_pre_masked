
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,int *,char*) ;
 int * FUNC_2 (int *,int ,int ,char*,int,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int * FUNC_4 (int *,int ,char*,int,int ,char*) ;
 int FUNC_5 (int *,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_16 ;
 int FUNC_11 (int *,int,int) ;

__attribute__((used)) static int
FUNC_12(module_t VAR_17, int VAR_18, void *VAR_19)
{
 int VAR_20;

 VAR_20 = 0;
 switch (VAR_18) {
 case 129:

  FUNC_8("Initializing contexts and creating subtrees.\n\n");
  FUNC_10(&VAR_13);
  FUNC_10(&VAR_14);
  FUNC_10(&VAR_15);




  FUNC_8("TREE		ROOT		  NAME\n");
  VAR_8 = FUNC_4(&VAR_13,
   VAR_5, "dyn_sysctl", VAR_1, 0,
   "dyn_sysctl root node");
  VAR_8 = FUNC_4(&VAR_14,
   VAR_5, "dyn_sysctl", VAR_1, 0,
   "dyn_sysctl root node");
  if (VAR_8 == ((void*)0)) {
   FUNC_8("SYSCTL_ADD_NODE failed!\n");
   return (VAR_3);
  }
  FUNC_1(&VAR_13, FUNC_6(VAR_8),
      VAR_5, "long_a", VAR_1, &VAR_7, "just to try");
  FUNC_0(&VAR_13, FUNC_6(VAR_8),
      VAR_5, "int_b", VAR_1, &VAR_10, 0, "just to try 1");
  VAR_9 = FUNC_2(&VAR_13, FUNC_6(VAR_8),
      VAR_5, "nextlevel", VAR_0, 0, "one level down");
  FUNC_5(&VAR_13, FUNC_6(VAR_9),
      VAR_5, "string_c", VAR_0, VAR_12, 0, "just to try 2");
  FUNC_8("1. (%p)	/		  dyn_sysctl\n", &VAR_13);


  VAR_9 = FUNC_2(&VAR_13, FUNC_7(VAR_6),
      VAR_5, "dyn_sysctl", VAR_1, 0, "dyn_sysctl root node");
  if (VAR_9 == ((void*)0)) {
   FUNC_8("SYSCTL_ADD_NODE failed!\n");
   return (VAR_3);
  }
  FUNC_3(&VAR_13, FUNC_6(VAR_9),
      VAR_5, "procedure", VAR_2 | VAR_0,
      ((void*)0), 0, VAR_16, "A",
      "I can be here, too");
  FUNC_8("   (%p)	/kern		  dyn_sysctl\n", &VAR_13);


  VAR_11 = FUNC_2(&VAR_14, FUNC_6(VAR_8),
      VAR_5, "nextlevel", VAR_0, 0, "one level down");
  FUNC_5(&VAR_14, FUNC_6(VAR_11),
      VAR_5, "string_c1", VAR_0, VAR_12, 0, "just to try 2");
  FUNC_8("2. (%p)	/		  dyn_sysctl	(overlapping #1)\n", &VAR_14);






  VAR_11=FUNC_2(&VAR_15, FUNC_6(VAR_9),
      VAR_5, "bad", VAR_1, 0, "dependent node");
  FUNC_5(&VAR_15, FUNC_6(VAR_11),
      VAR_5, "string_c", VAR_0, VAR_12, 0, "shouldn't panic");
  FUNC_8("3. (%p)	/kern/dyn_sysctl  bad		(WRONG!)\n", &VAR_15);
  break;
 case 128:
  FUNC_8("1. Try to free ctx1 (%p): ", &VAR_13);
  if (FUNC_9(&VAR_13) != 0)
   FUNC_8("failed: expected. Need to remove ctx3 first.\n");
  else
   FUNC_8("HELP! sysctl_ctx_free(%p) succeeded. EXPECT PANIC!!!\n", &VAR_13);
  FUNC_8("2. Try to free ctx3 (%p): ", &VAR_15);
  if (FUNC_9(&VAR_15) != 0) {
   FUNC_8("sysctl_ctx_free(%p) failed!\n", &VAR_15);

   FUNC_11(VAR_11, 1, 1);
   FUNC_8("sysctl_remove_oid(%p) succeeded\n", VAR_11);
  } else
   FUNC_8("Ok\n");
  FUNC_8("3. Try to free ctx1 (%p) again: ", &VAR_13);
  if (FUNC_9(&VAR_13) != 0) {
   FUNC_8("sysctl_ctx_free(%p) failed!\n", &VAR_13);

   FUNC_11(VAR_9, 1, 1);
   FUNC_8("sysctl_remove_oid(%p) succeeded\n", VAR_9);
  } else
   FUNC_8("Ok\n");
  FUNC_8("4. Try to free ctx2 (%p): ", &VAR_14);
  if (FUNC_9(&VAR_14) != 0) {
   FUNC_8("sysctl_ctx_free(%p) failed!\n", &VAR_14);

   FUNC_11(VAR_8, 1, 1);
  } else
   FUNC_8("Ok\n");
  break;
 default:
  VAR_20 = VAR_4;
  break;
 }
 return (VAR_20);
}
