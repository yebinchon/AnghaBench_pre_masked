
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int insertstr ;
struct TYPE_4__ {int sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (char**,size_t,int,int ) ;
 size_t FUNC_5 (char*) ;
 int VAR_7 ;

__attribute__((used)) static unsigned char
FUNC_6(char *VAR_8, int VAR_9, StringList *VAR_10)
{
 char VAR_11[VAR_4];
 char *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15;
 size_t VAR_16, VAR_17;

 VAR_17 = FUNC_5(VAR_8);
 if (VAR_10->sl_cur == 0)
  return (VAR_0);

 if (VAR_10->sl_cur == 1) {
  VAR_13 = VAR_10->sl_str[0] + VAR_17;
  if (*VAR_13 == '\0')
   return (VAR_2);
  FUNC_1(VAR_11, sizeof(VAR_11), VAR_13, FUNC_5(VAR_13));
  if (FUNC_0(VAR_6, VAR_11) == -1)
   return (VAR_0);
  else
   return (VAR_2);
 }

 if (!VAR_9) {
  VAR_16 = 0;
  VAR_12 = VAR_10->sl_str[0];
  VAR_16 = FUNC_5(VAR_12);
  for (VAR_14 = 1 ; VAR_14 < VAR_10->sl_cur ; VAR_14++) {
   for (VAR_15 = VAR_17 ; VAR_15 < FUNC_5(VAR_10->sl_str[VAR_14]); VAR_15++)
    if (VAR_12[VAR_15] != VAR_10->sl_str[VAR_14][VAR_15])
     break;
   if (VAR_15 < VAR_16)
    VAR_16 = VAR_15;
  }
  if (VAR_16 > VAR_17) {
   FUNC_1(VAR_11, sizeof(VAR_11),
       VAR_12 + VAR_17, VAR_16 - VAR_17);
   if (FUNC_0(VAR_6, VAR_11) == -1)
    return (VAR_0);
   else
    return (VAR_3);
  }
 }

 FUNC_3('\n', VAR_7);
 FUNC_4(VAR_10->sl_str, VAR_10->sl_cur, sizeof(char *), VAR_5);
 FUNC_2(VAR_10);
 return (VAR_1);
}
