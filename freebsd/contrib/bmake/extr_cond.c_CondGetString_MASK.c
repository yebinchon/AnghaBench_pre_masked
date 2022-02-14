
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;
typedef int Boolean ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_4 (char*,int ,int,int*,void**) ;
 char* VAR_4 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char) ;
 int FUNC_8 (char*,char) ;
 char* VAR_5 ;

__attribute__((used)) static char *
FUNC_9(Boolean VAR_6, Boolean *VAR_7, void **VAR_8, Boolean VAR_9)
{
    Buffer VAR_10;
    char *VAR_11;
    char *VAR_12;
    int VAR_13;
    int VAR_14;
    char *VAR_15;

    FUNC_3(&VAR_10, 0);
    VAR_12 = ((void*)0);
    *VAR_8 = ((void*)0);
    *VAR_7 = VAR_14 = *VAR_4 == '"' ? 1 : 0;
    if (VAR_14)
 VAR_4++;
    for (VAR_15 = VAR_4; *VAR_4 && VAR_12 == ((void*)0); VAR_4++) {
 switch (*VAR_4) {
 case '\\':
     if (VAR_4[1] != '\0') {
  VAR_4++;
  FUNC_0(&VAR_10, *VAR_4);
     }
     break;
 case '"':
     if (VAR_14) {
  VAR_4++;
  goto got_str;
     } else
  FUNC_0(&VAR_10, *VAR_4);
     break;
 case ')':
 case '!':
 case '=':
 case '>':
 case '<':
 case ' ':
 case '\t':
     if (!VAR_14)
  goto got_str;
     else
  FUNC_0(&VAR_10, *VAR_4);
     break;
 case '$':

     VAR_12 = FUNC_4(VAR_4, VAR_3,
       ((!VAR_14 && VAR_6) ? VAR_1 : 0) |
       VAR_2, &VAR_13, VAR_8);
     if (VAR_12 == VAR_5) {
  if (*VAR_8) {
      FUNC_5(*VAR_8);
      *VAR_8 = ((void*)0);
  }




  VAR_12 = ((void*)0);
  goto cleanup;
     }
     VAR_4 += VAR_13;





     if ((VAR_4 == VAR_15 + VAR_13) &&
  (*VAR_4 == '\0' ||
   FUNC_7((unsigned char) *VAR_4) ||
   FUNC_8("!=><)", *VAR_4))) {
  goto cleanup;
     }



     for (VAR_11 = VAR_12; *VAR_11; VAR_11++) {
  FUNC_0(&VAR_10, *VAR_11);
     }
     if (*VAR_8) {
  FUNC_5(*VAR_8);
  *VAR_8 = ((void*)0);
     }
     VAR_12 = ((void*)0);
     VAR_4--;
     break;
 default:
     if (VAR_9 && !VAR_14 && *VAR_15 != '$' &&
  !FUNC_6((unsigned char) *VAR_15)) {

  if (*VAR_8) {
      FUNC_5(*VAR_8);
      *VAR_8 = ((void*)0);
  }
  VAR_12 = ((void*)0);
  goto cleanup;
     }
     FUNC_0(&VAR_10, *VAR_4);
     break;
 }
    }
 got_str:
    VAR_12 = FUNC_2(&VAR_10, ((void*)0));
    *VAR_8 = VAR_12;
 cleanup:
    FUNC_1(&VAR_10, VAR_0);
    return VAR_12;
}
