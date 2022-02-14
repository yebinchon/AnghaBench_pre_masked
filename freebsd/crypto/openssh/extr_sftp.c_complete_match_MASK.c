
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_int ;
struct sftp_conn {int dummy; } ;
typedef int ins ;
struct TYPE_8__ {int gl_matchc; int gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int g ;
struct TYPE_9__ {char* cursor; } ;
typedef TYPE_2__ LineInfo ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (struct sftp_conn*,char*,int,int *,TYPE_1__*) ;
 size_t FUNC_14 (char*) ;
 int FUNC_15 (char**,char*,char*) ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(EditLine *VAR_3, struct sftp_conn *VAR_4, char *VAR_5,
    char *VAR_6, int VAR_7, int VAR_8, char VAR_9, int VAR_10)
{
 glob_t VAR_11;
 char *VAR_12, *VAR_13, VAR_14[8];
 u_int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;
 const LineInfo *VAR_25;


 if (VAR_6 == ((void*)0))
  VAR_12 = FUNC_16("*");
 else
  FUNC_15(&VAR_12, "%s*", VAR_6);


 VAR_23 = VAR_12[0] == '/';

 FUNC_11(&VAR_11, 0, sizeof(VAR_11));
 if (VAR_7 != VAR_2) {
  VAR_12 = FUNC_8(VAR_12, VAR_5);
  FUNC_13(VAR_4, VAR_12, VAR_0|VAR_1, ((void*)0), &VAR_11);
 } else
  FUNC_6(VAR_12, VAR_0|VAR_1, ((void*)0), &VAR_11);


 for (VAR_16 = VAR_19 = VAR_17 = 0; VAR_12[VAR_19] != 0; VAR_19++) {

  if (VAR_12[VAR_19] == '*' || VAR_12[VAR_19] == '?') {
   if (VAR_12[VAR_19] != '*' || VAR_12[VAR_19 + 1] != '\0')
    VAR_16 = 1;
   break;
  }
  if (VAR_12[VAR_19] == '\\' && VAR_12[VAR_19 + 1] != '\0')
   VAR_19++;
  if (VAR_12[VAR_19] == '/')
   VAR_17 = VAR_19 + 1;
 }
 FUNC_5(VAR_12);
 VAR_12 = ((void*)0);

 if (VAR_11.gl_matchc == 0)
  goto out;

 if (VAR_11.gl_matchc > 1)
  FUNC_1(VAR_11.gl_pathv, VAR_17);


 if (VAR_6 == ((void*)0) || VAR_16)
  goto out;

 VAR_13 = FUNC_0(VAR_6, VAR_11.gl_pathv, VAR_11.gl_matchc);
 VAR_12 = FUNC_12(VAR_13, VAR_23 ? ((void*)0) : VAR_5);
 FUNC_5(VAR_13);

 if (VAR_12 == ((void*)0))
  goto out;

 VAR_19 = FUNC_14(VAR_12);
 VAR_20 = FUNC_14(VAR_6);


 VAR_21 = VAR_22 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_20; VAR_15++) {
  if (!VAR_22 && VAR_6[VAR_15] == '\\' && VAR_15 + 1 < VAR_20){
   VAR_22 = 1;
   VAR_21++;
  } else
   VAR_22 = 0;
 }

 if (VAR_19 > (VAR_20 - VAR_21)) {
  VAR_13 = VAR_12 + VAR_20 - VAR_21;
  VAR_18 = FUNC_14(VAR_13);

  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15 += VAR_24) {
   if ((VAR_24 = FUNC_9(VAR_13 + VAR_15, VAR_18 - VAR_15)) < 0 ||
       (size_t)VAR_24 > sizeof(VAR_14) - 2)
    FUNC_4("invalid multibyte character");
   VAR_14[0] = '\\';
   FUNC_10(VAR_14 + 1, VAR_13 + VAR_15, VAR_24);
   VAR_14[VAR_24 + 1] = '\0';
   switch (VAR_13[VAR_15]) {
   case '\'':
   case '"':
   case '\\':
   case '\t':
   case '[':
   case ' ':
   case '#':
   case '*':
    if (VAR_9 == '\0' || VAR_13[VAR_15] == VAR_9) {
     if (FUNC_2(VAR_3, VAR_14) == -1)
      FUNC_4("el_insertstr "
          "failed.");
     break;
    }

   default:
    if (FUNC_2(VAR_3, VAR_14 + 1) == -1)
     FUNC_4("el_insertstr failed.");
    break;
   }
  }
 }

 VAR_25 = FUNC_3(VAR_3);
 if (VAR_11.gl_matchc == 1) {
  VAR_15 = 0;
  if (!VAR_10 && VAR_9 != '\0')
   VAR_14[VAR_15++] = VAR_9;
  if (*(VAR_25->cursor - 1) != '/' &&
      (VAR_8 || *(VAR_25->cursor) != ' '))
   VAR_14[VAR_15++] = ' ';
  VAR_14[VAR_15] = '\0';
  if (VAR_15 > 0 && FUNC_2(VAR_3, VAR_14) == -1)
   FUNC_4("el_insertstr failed.");
 }
 FUNC_5(VAR_12);

 out:
 FUNC_7(&VAR_11);
 return VAR_11.gl_matchc;
}
