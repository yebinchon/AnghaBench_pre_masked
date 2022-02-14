
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
typedef int r ;
struct TYPE_5__ {int cMode; char* rowSeparator; char* nullValue; int* colWidth; int showHeader; int* actualWidth; size_t iIndent; size_t nIndent; char* colSeparator; char* zDestTable; int out; int cnt; int pStmt; int * aiIndent; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int*,double*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 (int ,void const*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int ,char*,int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int) ;
 void* FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int) ;
 double FUNC_22 (int ,int) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (char*,char*) ;
 int FUNC_25 (int,char*,char*,double) ;
 int FUNC_26 (char*,char*,int ) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (int ,char*,...) ;
 int FUNC_30 (int ,int,char*) ;
 int FUNC_31 (int ) ;

__attribute__((used)) static int FUNC_32(
  void *VAR_7,
  int VAR_8,
  char **VAR_9,
  char **VAR_10,
  int *VAR_11
){
  int VAR_12;
  ShellState *VAR_13 = (ShellState*)VAR_7;

  if( VAR_9==0 ) return 0;
  switch( VAR_13->cMode ){
    case 133: {
      int VAR_14 = 5;
      if( VAR_9==0 ) break;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        int VAR_15 = FUNC_27(VAR_10[VAR_12] ? VAR_10[VAR_12] : "");
        if( VAR_15>VAR_14 ) VAR_14 = VAR_15;
      }
      if( VAR_13->cnt++>0 ) FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        FUNC_29(VAR_13->out,"%*s = %s%s", VAR_14, VAR_10[VAR_12],
                VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue, VAR_13->rowSeparator);
      }
      break;
    }
    case 136:
    case 139: {
      static const int VAR_16[] = {4, 13, 4, 4, 4, 13, 2, 13};
      const int *VAR_17;
      int VAR_18;
      char *VAR_19;
      if( VAR_13->cMode==139 ){
        VAR_17 = VAR_13->colWidth;
        VAR_18 = VAR_13->showHeader;
        VAR_19 = VAR_13->rowSeparator;
      }else{
        VAR_17 = VAR_16;
        VAR_18 = 1;
        VAR_19 = VAR_0;
      }
      if( VAR_13->cnt++==0 ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          int VAR_20, VAR_21;
          if( VAR_12<FUNC_0(VAR_13->colWidth) ){
            VAR_20 = VAR_17[VAR_12];
          }else{
            VAR_20 = 0;
          }
          if( VAR_20==0 ){
            VAR_20 = FUNC_28(VAR_10[VAR_12] ? VAR_10[VAR_12] : "");
            if( VAR_20<10 ) VAR_20 = 10;
            VAR_21 = FUNC_28(VAR_9 && VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue);
            if( VAR_20<VAR_21 ) VAR_20 = VAR_21;
          }
          if( VAR_12<FUNC_0(VAR_13->actualWidth) ){
            VAR_13->actualWidth[VAR_12] = VAR_20;
          }
          if( VAR_18 ){
            FUNC_30(VAR_13->out, VAR_20, VAR_10[VAR_12]);
            FUNC_29(VAR_13->out, "%s", VAR_12==VAR_8-1 ? VAR_19 : "  ");
          }
        }
        if( VAR_18 ){
          for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
            int VAR_22;
            if( VAR_12<FUNC_0(VAR_13->actualWidth) ){
               VAR_22 = VAR_13->actualWidth[VAR_12];
               if( VAR_22<0 ) VAR_22 = -VAR_22;
            }else{
               VAR_22 = 10;
            }
            FUNC_29(VAR_13->out,"%-*.*s%s",VAR_22,VAR_22,
                   "----------------------------------------------------------"
                   "----------------------------------------------------------",
                    VAR_12==VAR_8-1 ? VAR_19 : "  ");
          }
        }
      }
      if( VAR_9==0 ) break;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        int VAR_23;
        if( VAR_12<FUNC_0(VAR_13->actualWidth) ){
           VAR_23 = VAR_13->actualWidth[VAR_12];
        }else{
           VAR_23 = 10;
        }
        if( VAR_13->cMode==136 && VAR_9[VAR_12] && FUNC_28(VAR_9[VAR_12])>VAR_23 ){
          VAR_23 = FUNC_28(VAR_9[VAR_12]);
        }
        if( VAR_12==1 && VAR_13->aiIndent && VAR_13->pStmt ){
          if( VAR_13->iIndent<VAR_13->nIndent ){
            FUNC_29(VAR_13->out, "%*.s", VAR_13->aiIndent[VAR_13->iIndent], "");
          }
          VAR_13->iIndent++;
        }
        FUNC_30(VAR_13->out, VAR_23, VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue);
        FUNC_29(VAR_13->out, "%s", VAR_12==VAR_8-1 ? VAR_19 : "  ");
      }
      break;
    }
    case 129: {
      FUNC_14(VAR_13->out, VAR_9[0], ";\n");
      break;
    }
    case 131: {
      char *VAR_24;
      int VAR_25;
      int VAR_26 = 0;
      char VAR_27 = 0;
      char VAR_28;
      int VAR_29 = 0;
      FUNC_3( VAR_8==1 );
      if( VAR_9[0]==0 ) break;
      if( FUNC_26("CREATE VIEW%", VAR_9[0], 0)==0
       || FUNC_26("CREATE TRIG%", VAR_9[0], 0)==0
      ){
        FUNC_29(VAR_13->out, "%s;\n", VAR_9[0]);
        break;
      }
      VAR_24 = FUNC_24("%s", VAR_9[0]);
      VAR_25 = 0;
      for(VAR_12=0; FUNC_1(VAR_24[VAR_12]); VAR_12++){}
      for(; (VAR_28 = VAR_24[VAR_12])!=0; VAR_12++){
        if( FUNC_1(VAR_28) ){
          if( VAR_24[VAR_25-1]=='\r' ) VAR_24[VAR_25-1] = '\n';
          if( FUNC_1(VAR_24[VAR_25-1]) || VAR_24[VAR_25-1]=='(' ) continue;
        }else if( (VAR_28=='(' || VAR_28==')') && VAR_25>0 && FUNC_1(VAR_24[VAR_25-1]) ){
          VAR_25--;
        }
        VAR_24[VAR_25++] = VAR_28;
      }
      while( VAR_25>0 && FUNC_1(VAR_24[VAR_25-1]) ){ VAR_25--; }
      VAR_24[VAR_25] = 0;
      if( FUNC_27(VAR_24)>=79 ){
        for(VAR_12=VAR_25=0; (VAR_28 = VAR_24[VAR_12])!=0; VAR_12++){
          if( VAR_28==VAR_27 ){
            VAR_27 = 0;
          }else if( VAR_28=='"' || VAR_28=='\'' || VAR_28=='`' ){
            VAR_27 = VAR_28;
          }else if( VAR_28=='[' ){
            VAR_27 = ']';
          }else if( VAR_28=='-' && VAR_24[VAR_12+1]=='-' ){
            VAR_27 = '\n';
          }else if( VAR_28=='(' ){
            VAR_26++;
          }else if( VAR_28==')' ){
            VAR_26--;
            if( VAR_29>0 && VAR_26==0 && VAR_25>0 ){
              FUNC_15(VAR_13->out, VAR_24, VAR_25, "\n");
              VAR_25 = 0;
            }
          }
          VAR_24[VAR_25++] = VAR_28;
          if( VAR_26==1 && VAR_27==0
           && (VAR_28=='(' || VAR_28=='\n' || (VAR_28==',' && !FUNC_31(VAR_24+VAR_12+1)))
          ){
            if( VAR_28=='\n' ) VAR_25--;
            FUNC_15(VAR_13->out, VAR_24, VAR_25, "\n  ");
            VAR_25 = 0;
            VAR_29++;
            while( FUNC_1(VAR_24[VAR_12+1]) ){ VAR_12++; }
          }
        }
        VAR_24[VAR_25] = 0;
      }
      FUNC_14(VAR_13->out, VAR_24, ";\n");
      FUNC_23(VAR_24);
      break;
    }
    case 132: {
      if( VAR_13->cnt++==0 && VAR_13->showHeader ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          FUNC_29(VAR_13->out,"%s%s",VAR_10[VAR_12],
                  VAR_12==VAR_8-1 ? VAR_13->rowSeparator : VAR_13->colSeparator);
        }
      }
      if( VAR_9==0 ) break;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        char *VAR_30 = VAR_9[VAR_12];
        if( VAR_30==0 ) VAR_30 = VAR_13->nullValue;
        FUNC_29(VAR_13->out, "%s", VAR_30);
        if( VAR_12<VAR_8-1 ){
          FUNC_29(VAR_13->out, "%s", VAR_13->colSeparator);
        }else{
          FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
        }
      }
      break;
    }
    case 135: {
      if( VAR_13->cnt++==0 && VAR_13->showHeader ){
        FUNC_17(VAR_13->out,"<TR>");
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          FUNC_17(VAR_13->out,"<TH>");
          FUNC_11(VAR_13->out, VAR_10[VAR_12]);
          FUNC_17(VAR_13->out,"</TH>\n");
        }
        FUNC_17(VAR_13->out,"</TR>\n");
      }
      if( VAR_9==0 ) break;
      FUNC_17(VAR_13->out,"<TR>");
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        FUNC_17(VAR_13->out,"<TD>");
        FUNC_11(VAR_13->out, VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue);
        FUNC_17(VAR_13->out,"</TD>\n");
      }
      FUNC_17(VAR_13->out,"</TR>\n");
      break;
    }
    case 128: {
      if( VAR_13->cnt++==0 && VAR_13->showHeader ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          FUNC_8(VAR_13->out,VAR_10[VAR_12] ? VAR_10[VAR_12] : "");
          if(VAR_12<VAR_8-1) FUNC_29(VAR_13->out, "%s", VAR_13->colSeparator);
        }
        FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      }
      if( VAR_9==0 ) break;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        FUNC_8(VAR_13->out, VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue);
        if(VAR_12<VAR_8-1) FUNC_29(VAR_13->out, "%s", VAR_13->colSeparator);
      }
      FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      break;
    }
    case 138: {
      FUNC_18(VAR_13->out, 1);
      if( VAR_13->cnt++==0 && VAR_13->showHeader ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          FUNC_9(VAR_13, VAR_10[VAR_12] ? VAR_10[VAR_12] : "", VAR_12<VAR_8-1);
        }
        FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      }
      if( VAR_8>0 ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          FUNC_9(VAR_13, VAR_9[VAR_12], VAR_12<VAR_8-1);
        }
        FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      }
      FUNC_19(VAR_13->out, 1);
      break;
    }
    case 134: {
      if( VAR_9==0 ) break;
      FUNC_29(VAR_13->out,"INSERT INTO %s",VAR_13->zDestTable);
      if( VAR_13->showHeader ){
        FUNC_17(VAR_13->out,"(");
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          if( VAR_12>0 ) FUNC_17(VAR_13->out, ",");
          if( FUNC_16(VAR_10[VAR_12]) ){
            char *VAR_31 = FUNC_24("\"%w\"", VAR_10[VAR_12]);
            FUNC_29(VAR_13->out, "%s", VAR_31);
            FUNC_23(VAR_31);
          }else{
            FUNC_17(VAR_13->out, "%s", VAR_10[VAR_12]);
          }
        }
        FUNC_17(VAR_13->out,")");
      }
      VAR_13->cnt++;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        FUNC_17(VAR_13->out, VAR_12>0 ? "," : " VALUES(");
        if( (VAR_9[VAR_12]==0) || (VAR_11 && VAR_11[VAR_12]==VAR_5) ){
          FUNC_29(VAR_13->out,"NULL");
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_6 ){
          if( FUNC_2(VAR_13, VAR_1) ){
            FUNC_13(VAR_13->out, VAR_9[VAR_12]);
          }else{
            FUNC_12(VAR_13->out, VAR_9[VAR_12]);
          }
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_4 ){
          FUNC_29(VAR_13->out,"%s", VAR_9[VAR_12]);
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_3 ){
          char VAR_32[50];
          double VAR_33 = FUNC_22(VAR_13->pStmt, VAR_12);
          sqlite3_uint64 VAR_34;
          FUNC_7(&VAR_34,&VAR_33,sizeof(VAR_33));
          if( VAR_34==0x7ff0000000000000LL ){
            FUNC_17(VAR_13->out, "1e999");
          }else if( VAR_34==0xfff0000000000000LL ){
            FUNC_17(VAR_13->out, "-1e999");
          }else{
            FUNC_25(50,VAR_32,"%!.20g", VAR_33);
            FUNC_17(VAR_13->out, "%s", VAR_32);
          }
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_2 && VAR_13->pStmt ){
          const void *VAR_35 = FUNC_20(VAR_13->pStmt, VAR_12);
          int VAR_36 = FUNC_21(VAR_13->pStmt, VAR_12);
          FUNC_10(VAR_13->out, VAR_35, VAR_36);
        }else if( FUNC_6(VAR_9[VAR_12], 0) ){
          FUNC_29(VAR_13->out,"%s", VAR_9[VAR_12]);
        }else if( FUNC_2(VAR_13, VAR_1) ){
          FUNC_13(VAR_13->out, VAR_9[VAR_12]);
        }else{
          FUNC_12(VAR_13->out, VAR_9[VAR_12]);
        }
      }
      FUNC_17(VAR_13->out,");\n");
      break;
    }
    case 130: {
      if( VAR_9==0 ) break;
      if( VAR_13->cnt==0 && VAR_13->showHeader ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          if( VAR_12>0 ) FUNC_17(VAR_13->out, ",");
          FUNC_13(VAR_13->out, VAR_10[VAR_12]);
        }
        FUNC_17(VAR_13->out,"\n");
      }
      VAR_13->cnt++;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        if( VAR_12>0 ) FUNC_17(VAR_13->out, ",");
        if( (VAR_9[VAR_12]==0) || (VAR_11 && VAR_11[VAR_12]==VAR_5) ){
          FUNC_29(VAR_13->out,"NULL");
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_6 ){
          FUNC_13(VAR_13->out, VAR_9[VAR_12]);
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_4 ){
          FUNC_29(VAR_13->out,"%s", VAR_9[VAR_12]);
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_3 ){
          char VAR_37[50];
          double VAR_38 = FUNC_22(VAR_13->pStmt, VAR_12);
          FUNC_25(50,VAR_37,"%!.20g", VAR_38);
          FUNC_17(VAR_13->out, "%s", VAR_37);
        }else if( VAR_11 && VAR_11[VAR_12]==VAR_2 && VAR_13->pStmt ){
          const void *VAR_39 = FUNC_20(VAR_13->pStmt, VAR_12);
          int VAR_40 = FUNC_21(VAR_13->pStmt, VAR_12);
          FUNC_10(VAR_13->out, VAR_39, VAR_40);
        }else if( FUNC_6(VAR_9[VAR_12], 0) ){
          FUNC_29(VAR_13->out,"%s", VAR_9[VAR_12]);
        }else{
          FUNC_13(VAR_13->out, VAR_9[VAR_12]);
        }
      }
      FUNC_17(VAR_13->out,"\n");
      break;
    }
    case 140: {
      if( VAR_13->cnt++==0 && VAR_13->showHeader ){
        for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
          if( VAR_12>0 ) FUNC_29(VAR_13->out, "%s", VAR_13->colSeparator);
          FUNC_29(VAR_13->out,"%s",VAR_10[VAR_12] ? VAR_10[VAR_12] : "");
        }
        FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      }
      if( VAR_9==0 ) break;
      for(VAR_12=0; VAR_12<VAR_8; VAR_12++){
        if( VAR_12>0 ) FUNC_29(VAR_13->out, "%s", VAR_13->colSeparator);
        FUNC_29(VAR_13->out,"%s",VAR_9[VAR_12] ? VAR_9[VAR_12] : VAR_13->nullValue);
      }
      FUNC_29(VAR_13->out, "%s", VAR_13->rowSeparator);
      break;
    }
    case 137: {
      FUNC_5(VAR_13, FUNC_4(VAR_9[0]), FUNC_4(VAR_9[1]), VAR_9[3]);
      break;
    }
  }
  return 0;
}
