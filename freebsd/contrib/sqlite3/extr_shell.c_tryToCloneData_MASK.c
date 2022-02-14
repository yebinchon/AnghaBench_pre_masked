
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_3__ {int * db; } ;
typedef TYPE_1__ ShellState ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,int ,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,char const*,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (int) ;
 char* FUNC_21 (char*,char const*) ;
 int FUNC_22 (int *,char*,int,int **,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int,char*,char*,char const*) ;
 int FUNC_25 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_26 (char const*) ;
 int FUNC_27 (int ,char*,char const*,...) ;

__attribute__((used)) static void FUNC_28(
  ShellState *VAR_6,
  sqlite3 *VAR_7,
  const char *VAR_8
){
  sqlite3_stmt *VAR_9 = 0;
  sqlite3_stmt *VAR_10 = 0;
  char *VAR_11 = 0;
  char *VAR_12 = 0;
  int VAR_13;
  int VAR_14, VAR_15, VAR_16;
  int VAR_17 = FUNC_26(VAR_8);
  int VAR_18 = 0;
  int VAR_19 = 0;
  const int VAR_20 = 10000;

  VAR_11 = FUNC_21("SELECT * FROM \"%w\"", VAR_8);
  VAR_13 = FUNC_22(VAR_6->db, VAR_11, -1, &VAR_9, 0);
  if( VAR_13 ){
    FUNC_27(VAR_4, "Error %d: %s on [%s]\n",
            FUNC_17(VAR_6->db), FUNC_16(VAR_6->db),
            VAR_11);
    goto end_data_xfer;
  }
  VAR_16 = FUNC_11(VAR_9);
  VAR_12 = FUNC_20(200 + VAR_17 + VAR_16*3);
  if( VAR_12==0 ) FUNC_3();
  FUNC_24(200+VAR_17,VAR_12,
                   "INSERT OR IGNORE INTO \"%s\" VALUES(?", VAR_8);
  VAR_14 = FUNC_26(VAR_12);
  for(VAR_15=1; VAR_15<VAR_16; VAR_15++){
    FUNC_1(VAR_12+VAR_14, ",?", 2);
    VAR_14 += 2;
  }
  FUNC_1(VAR_12+VAR_14, ");", 3);
  VAR_13 = FUNC_22(VAR_7, VAR_12, -1, &VAR_10, 0);
  if( VAR_13 ){
    FUNC_27(VAR_4, "Error %d: %s on [%s]\n",
            FUNC_17(VAR_7), FUNC_16(VAR_7),
            VAR_11);
    goto end_data_xfer;
  }
  for(VAR_18=0; VAR_18<2; VAR_18++){
    while( (VAR_13 = FUNC_25(VAR_9))==VAR_2 ){
      for(VAR_14=0; VAR_14<VAR_16; VAR_14++){
        switch( FUNC_15(VAR_9, VAR_14) ){
          case 129: {
            FUNC_7(VAR_10, VAR_14+1);
            break;
          }
          case 130: {
            FUNC_6(VAR_10, VAR_14+1, FUNC_13(VAR_9,VAR_14));
            break;
          }
          case 131: {
            FUNC_5(VAR_10, VAR_14+1, FUNC_12(VAR_9,VAR_14));
            break;
          }
          case 128: {
            FUNC_8(VAR_10, VAR_14+1,
                             (const char*)FUNC_14(VAR_9,VAR_14),
                             -1, VAR_3);
            break;
          }
          case 132: {
            FUNC_4(VAR_10, VAR_14+1, FUNC_9(VAR_9,VAR_14),
                                            FUNC_10(VAR_9,VAR_14),
                                            VAR_3);
            break;
          }
        }
      }
      VAR_13 = FUNC_25(VAR_10);
      if( VAR_13!=VAR_1 && VAR_13!=VAR_2 && VAR_13!=VAR_0 ){
        FUNC_27(VAR_4, "Error %d: %s\n", FUNC_17(VAR_7),
                        FUNC_16(VAR_7));
      }
      FUNC_23(VAR_10);
      VAR_19++;
      if( (VAR_19%VAR_20)==0 ){
        FUNC_2("%c\b", "|/-\\"[(VAR_19/VAR_20)%4]);
        FUNC_0(VAR_5);
      }
    }
    if( VAR_13==VAR_0 ) break;
    FUNC_18(VAR_9);
    FUNC_19(VAR_11);
    VAR_11 = FUNC_21("SELECT * FROM \"%w\" ORDER BY rowid DESC;",
                             VAR_8);
    VAR_13 = FUNC_22(VAR_6->db, VAR_11, -1, &VAR_9, 0);
    if( VAR_13 ){
      FUNC_27(VAR_4, "Warning: cannot step \"%s\" backwards", VAR_8);
      break;
    }
  }

end_data_xfer:
  FUNC_18(VAR_9);
  FUNC_18(VAR_10);
  FUNC_19(VAR_11);
  FUNC_19(VAR_12);
}
