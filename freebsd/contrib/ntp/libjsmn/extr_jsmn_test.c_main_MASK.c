
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

int FUNC_2() {
 FUNC_1(VAR_2, "general test for a empty JSON objects/arrays");
 FUNC_1(VAR_13, "general test for a simple JSON string");
 FUNC_1(VAR_12, "test primitive JSON data types");
 FUNC_1(VAR_14, "test string JSON data types");
 FUNC_1(VAR_10, "test partial JSON string parsing");
 FUNC_1(VAR_9, "test partial array reading");
 FUNC_1(VAR_0, "test array reading with a smaller number of tokens");
 FUNC_1(VAR_16, "test unquoted keys (like in JavaScript)");
 FUNC_1(VAR_8, "test objects and arrays");
 FUNC_1(VAR_15, "test unicode characters");
 FUNC_1(VAR_4, "test strings that are not null-terminated");
 FUNC_1(VAR_5, "test issue #22");
 FUNC_1(VAR_1, "test tokens count estimation");
 FUNC_1(VAR_7, "test for non-strict mode");
 FUNC_1(VAR_6, "test for keys/values");
 FUNC_0("\nPASSED: %d\nFAILED: %d\n", VAR_11, VAR_3);
 return 0;
}
