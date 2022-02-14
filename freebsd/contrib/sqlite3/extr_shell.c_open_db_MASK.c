
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ db; int openMode; scalar_t__* zDbFilename; scalar_t__ szMax; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (char*,int*) ;
 unsigned char* FUNC_3 (TYPE_1__*,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,char*,int,int ,TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,char*,unsigned char*,int,int,int) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,char*,int ,int ,int ) ;
 int FUNC_12 (scalar_t__,char*,int ,scalar_t__*) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,scalar_t__*) ;
 int FUNC_17 (scalar_t__*,scalar_t__*,int,char*) ;
 int FUNC_18 (scalar_t__,int ,int ) ;
 int FUNC_19 (scalar_t__,int ,int ) ;
 int FUNC_20 (scalar_t__,int ,int ) ;
 int VAR_18 ;
 int FUNC_21 (int ,char*,...) ;

__attribute__((used)) static void FUNC_22(ShellState *VAR_19, int VAR_20){
  if( VAR_19->db==0 ){
    if( VAR_19->openMode==129 ){
      if( VAR_19->zDbFilename==0 || VAR_19->zDbFilename[0]==0 ){
        VAR_19->openMode = 131;
      }else{
        VAR_19->openMode = (u8)FUNC_0(VAR_19->zDbFilename,
                             (VAR_20 & VAR_1)!=0);
      }
    }
    switch( VAR_19->openMode ){
      case 134: {
        FUNC_17(VAR_19->zDbFilename, &VAR_19->db,
           VAR_8|VAR_6, "apndvfs");
        break;
      }
      case 132:
      case 133: {
        FUNC_16(0, &VAR_19->db);
        break;
      }
      case 128: {
        FUNC_16(":memory:", &VAR_19->db);
        break;
      }
      case 130: {
        FUNC_17(VAR_19->zDbFilename, &VAR_19->db, VAR_7, 0);
        break;
      }
      case 129:
      case 131: {
        FUNC_16(VAR_19->zDbFilename, &VAR_19->db);
        break;
      }
    }
    VAR_11 = VAR_19->db;
    if( VAR_19->db==0 || VAR_5!=FUNC_9(VAR_19->db) ){
      FUNC_21(VAR_18,"Error: unable to open database \"%s\": %s\n",
          VAR_19->zDbFilename, FUNC_10(VAR_19->db));
      if( VAR_20 & VAR_0 ){
        FUNC_16(":memory:", &VAR_19->db);
        return;
      }
      FUNC_1(1);
    }

    FUNC_8(VAR_19->db, 1);

    FUNC_13(VAR_19->db, 0, 0);
    FUNC_18(VAR_19->db, 0, 0);
    FUNC_4(VAR_19->db, 0, 0);







    FUNC_5(VAR_19->db, "shell_add_schema", 3, VAR_9, 0,
                            VAR_12, 0, 0);
    FUNC_5(VAR_19->db, "shell_module_schema", 1, VAR_9, 0,
                            VAR_16, 0, 0);
    FUNC_5(VAR_19->db, "shell_putsnl", 1, VAR_9, VAR_19,
                            VAR_17, 0, 0);
    FUNC_5(VAR_19->db, "shell_escape_crnl", 1, VAR_9, 0,
                            VAR_13, 0, 0);
    FUNC_5(VAR_19->db, "shell_int32", 2, VAR_9, 0,
                            VAR_15, 0, 0);
    FUNC_5(VAR_19->db, "shell_idquote", 1, VAR_9, 0,
                            VAR_14, 0, 0);

    FUNC_5(VAR_19->db, "edit", 1, VAR_9, 0,
                            VAR_10, 0, 0);
    FUNC_5(VAR_19->db, "edit", 2, VAR_9, 0,
                            VAR_10, 0, 0);

    if( VAR_19->openMode==128 ){
      char *VAR_21 = FUNC_15(
         "CREATE VIRTUAL TABLE zip USING zipfile(%Q);", VAR_19->zDbFilename);
      FUNC_11(VAR_19->db, VAR_21, 0, 0, 0);
      FUNC_14(VAR_21);
    }
  }
}
