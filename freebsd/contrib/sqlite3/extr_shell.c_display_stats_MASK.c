
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int z ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_4__ {int statsOn; int shellFlgs; int * out; int * pStmt; } ;
typedef TYPE_1__ ShellState ;
typedef int FILE ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int*,int*,int) ;
 int FUNC_10 (int,char*,char*,...) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,char*,char*,int ) ;

__attribute__((used)) static int FUNC_13(
  sqlite3 *VAR_27,
  ShellState *VAR_28,
  int VAR_29
){
  int VAR_30;
  int VAR_31;
  FILE *VAR_32;
  if( VAR_28==0 || VAR_28->out==0 ) return 0;
  VAR_32 = VAR_28->out;

  if( VAR_28->pStmt && (VAR_28->statsOn & 2) ){
    int VAR_33, VAR_34, VAR_35;
    sqlite3_stmt *VAR_36 = VAR_28->pStmt;
    char VAR_37[100];
    VAR_33 = FUNC_3(VAR_36);
    FUNC_2(VAR_32, "%-36s %d\n", "Number of output columns:", VAR_33);
    for(VAR_34=0; VAR_34<VAR_33; VAR_34++){
      FUNC_10(sizeof(VAR_37),VAR_37,"Column %d %nname:", VAR_34, &VAR_35);
      FUNC_12(VAR_32, "%-36s %s\n", VAR_37, FUNC_6(VAR_36,VAR_34));

      FUNC_10(30, VAR_37+VAR_35, "declared type:");
      FUNC_12(VAR_32, "%-36s %s\n", VAR_37, FUNC_5(VAR_36, VAR_34));
    }
  }

  FUNC_1(VAR_28, "Memory Used:",
     "%lld (max %lld) bytes", VAR_15, VAR_29);
  FUNC_1(VAR_28, "Number of Outstanding Allocations:",
     "%lld (max %lld)", VAR_13, VAR_29);
  if( VAR_28->shellFlgs & VAR_1 ){
    FUNC_1(VAR_28, "Number of Pcache Pages Used:",
       "%lld (max %lld) pages", VAR_18, VAR_29);
  }
  FUNC_1(VAR_28, "Number of Pcache Overflow Bytes:",
     "%lld (max %lld) bytes", VAR_16, VAR_29);
  FUNC_1(VAR_28, "Largest Allocation:",
     "%lld bytes", VAR_14, VAR_29);
  FUNC_1(VAR_28, "Largest Pcache Allocation:",
     "%lld bytes", VAR_17, VAR_29);





  if( VAR_27 ){
    if( VAR_28->shellFlgs & VAR_0 ){
      VAR_31 = VAR_30 = -1;
      FUNC_9(VAR_27, VAR_10,
                        &VAR_30, &VAR_31, VAR_29);
      FUNC_2(VAR_28->out,
              "Lookaside Slots Used:                %d (max %d)\n",
              VAR_30, VAR_31);
      FUNC_9(VAR_27, VAR_7,
                        &VAR_30, &VAR_31, VAR_29);
      FUNC_2(VAR_28->out, "Successful lookaside attempts:       %d\n",
              VAR_31);
      FUNC_9(VAR_27, VAR_9,
                        &VAR_30, &VAR_31, VAR_29);
      FUNC_2(VAR_28->out, "Lookaside failures due to size:      %d\n",
              VAR_31);
      FUNC_9(VAR_27, VAR_8,
                        &VAR_30, &VAR_31, VAR_29);
      FUNC_2(VAR_28->out, "Lookaside failures due to OOM:       %d\n",
              VAR_31);
    }
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_5, &VAR_30, &VAR_31, VAR_29);
    FUNC_2(VAR_28->out, "Pager Heap Usage:                    %d bytes\n",
            VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_2, &VAR_30, &VAR_31, 1);
    FUNC_2(VAR_28->out, "Page cache hits:                     %d\n", VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_3, &VAR_30, &VAR_31, 1);
    FUNC_2(VAR_28->out, "Page cache misses:                   %d\n", VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_6, &VAR_30, &VAR_31, 1);
    FUNC_2(VAR_28->out, "Page cache writes:                   %d\n", VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_4, &VAR_30, &VAR_31, 1);
    FUNC_2(VAR_28->out, "Page cache spills:                   %d\n", VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_11, &VAR_30, &VAR_31, VAR_29);
    FUNC_2(VAR_28->out, "Schema Heap Usage:                   %d bytes\n",
            VAR_30);
    VAR_31 = VAR_30 = -1;
    FUNC_9(VAR_27, VAR_12, &VAR_30, &VAR_31, VAR_29);
    FUNC_2(VAR_28->out, "Statement Heap/Lookaside Usage:      %d bytes\n",
            VAR_30);
  }

  if( VAR_28->pStmt ){
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_21,
                               VAR_29);
    FUNC_2(VAR_28->out, "Fullscan Steps:                      %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_25, VAR_29);
    FUNC_2(VAR_28->out, "Sort Operations:                     %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_20,VAR_29);
    FUNC_2(VAR_28->out, "Autoindex Inserts:                   %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_26, VAR_29);
    FUNC_2(VAR_28->out, "Virtual Machine Steps:               %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_23,VAR_29);
    FUNC_2(VAR_28->out, "Reprepare operations:                %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_24, VAR_29);
    FUNC_2(VAR_28->out, "Number of times run:                 %d\n", VAR_30);
    VAR_30 = FUNC_11(VAR_28->pStmt, VAR_22, VAR_29);
    FUNC_2(VAR_28->out, "Memory used by prepared stmt:        %d\n", VAR_30);
  }


  FUNC_0(VAR_28->out);




  return 0;
}
