
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Tcl_DString ;
struct TYPE_2__ {int interp; int zAuth; scalar_t__ disableAuth; } ;
typedef TYPE_1__ SqliteDb ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(
  void *VAR_4,
  int VAR_5,
  const char *VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  const char *VAR_9



){
  const char *VAR_10;
  Tcl_DString VAR_11;
  int VAR_12;
  const char *VAR_13;




  SqliteDb *VAR_14 = (SqliteDb*)VAR_4;
  if( VAR_14->disableAuth ) return VAR_2;




  switch( VAR_5 ){
    case 158 : VAR_10="SQLITE_COPY"; break;
    case 157 : VAR_10="SQLITE_CREATE_INDEX"; break;
    case 156 : VAR_10="SQLITE_CREATE_TABLE"; break;
    case 155 : VAR_10="SQLITE_CREATE_TEMP_INDEX"; break;
    case 154 : VAR_10="SQLITE_CREATE_TEMP_TABLE"; break;
    case 153: VAR_10="SQLITE_CREATE_TEMP_TRIGGER"; break;
    case 152 : VAR_10="SQLITE_CREATE_TEMP_VIEW"; break;
    case 151 : VAR_10="SQLITE_CREATE_TRIGGER"; break;
    case 150 : VAR_10="SQLITE_CREATE_VIEW"; break;
    case 148 : VAR_10="SQLITE_DELETE"; break;
    case 146 : VAR_10="SQLITE_DROP_INDEX"; break;
    case 145 : VAR_10="SQLITE_DROP_TABLE"; break;
    case 144 : VAR_10="SQLITE_DROP_TEMP_INDEX"; break;
    case 143 : VAR_10="SQLITE_DROP_TEMP_TABLE"; break;
    case 142 : VAR_10="SQLITE_DROP_TEMP_TRIGGER"; break;
    case 141 : VAR_10="SQLITE_DROP_TEMP_VIEW"; break;
    case 140 : VAR_10="SQLITE_DROP_TRIGGER"; break;
    case 139 : VAR_10="SQLITE_DROP_VIEW"; break;
    case 136 : VAR_10="SQLITE_INSERT"; break;
    case 135 : VAR_10="SQLITE_PRAGMA"; break;
    case 134 : VAR_10="SQLITE_READ"; break;
    case 130 : VAR_10="SQLITE_SELECT"; break;
    case 129 : VAR_10="SQLITE_TRANSACTION"; break;
    case 128 : VAR_10="SQLITE_UPDATE"; break;
    case 159 : VAR_10="SQLITE_ATTACH"; break;
    case 147 : VAR_10="SQLITE_DETACH"; break;
    case 161 : VAR_10="SQLITE_ALTER_TABLE"; break;
    case 132 : VAR_10="SQLITE_REINDEX"; break;
    case 160 : VAR_10="SQLITE_ANALYZE"; break;
    case 149 : VAR_10="SQLITE_CREATE_VTABLE"; break;
    case 138 : VAR_10="SQLITE_DROP_VTABLE"; break;
    case 137 : VAR_10="SQLITE_FUNCTION"; break;
    case 131 : VAR_10="SQLITE_SAVEPOINT"; break;
    case 133 : VAR_10="SQLITE_RECURSIVE"; break;
    default : VAR_10="????"; break;
  }
  FUNC_3(&VAR_11);
  FUNC_0(&VAR_11, VAR_14->zAuth, -1);
  FUNC_1(&VAR_11, VAR_10);
  FUNC_1(&VAR_11, VAR_6 ? VAR_6 : "");
  FUNC_1(&VAR_11, VAR_7 ? VAR_7 : "");
  FUNC_1(&VAR_11, VAR_8 ? VAR_8 : "");
  FUNC_1(&VAR_11, VAR_9 ? VAR_9 : "");



  VAR_12 = FUNC_6(VAR_14->interp, FUNC_4(&VAR_11));
  FUNC_2(&VAR_11);
  VAR_13 = VAR_12==VAR_3 ? FUNC_5(VAR_14->interp) : "SQLITE_DENY";
  if( FUNC_7(VAR_13,"SQLITE_OK")==0 ){
    VAR_12 = VAR_2;
  }else if( FUNC_7(VAR_13,"SQLITE_DENY")==0 ){
    VAR_12 = VAR_0;
  }else if( FUNC_7(VAR_13,"SQLITE_IGNORE")==0 ){
    VAR_12 = VAR_1;
  }else{
    VAR_12 = 999;
  }
  return VAR_12;
}
