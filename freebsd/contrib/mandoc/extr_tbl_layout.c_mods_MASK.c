
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_node {int dummy; } ;
struct tbl_cell {int vert; int flags; int wstr; int spacing; } ;


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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int ,int,int,char*,...) ;
 int FUNC_3 (char const*,size_t) ;
 int * FUNC_4 (char*,char const) ;
 int FUNC_5 (char const*,char**,int) ;
 int FUNC_6 (unsigned char) ;

__attribute__((used)) static void
FUNC_7(struct tbl_node *VAR_13, struct tbl_cell *VAR_14,
  int VAR_15, const char *VAR_16, int *VAR_17)
{
 char *VAR_18;
 size_t VAR_19;

mod:
 while (VAR_16[*VAR_17] == ' ' || VAR_16[*VAR_17] == '\t')
  (*VAR_17)++;



 if (FUNC_4(".,-=^_ACLNRSaclnrs", VAR_16[*VAR_17]) != ((void*)0))
  return;



 if ('(' == VAR_16[*VAR_17]) {
  (*VAR_17)++;
  while (VAR_16[*VAR_17] && ')' != VAR_16[*VAR_17])
   (*VAR_17)++;
  if (')' == VAR_16[*VAR_17]) {
   (*VAR_17)++;
   goto mod;
  }
  FUNC_2(VAR_3, VAR_15, *VAR_17, ((void*)0));
  return;
 }



 if (FUNC_1((unsigned char)VAR_16[*VAR_17])) {
  VAR_14->spacing = FUNC_5(VAR_16 + *VAR_17, &VAR_18, 10);
  *VAR_17 = VAR_18 - VAR_16;
  goto mod;
 }

 switch (FUNC_6((unsigned char)VAR_16[(*VAR_17)++])) {
 case 'b':
  VAR_14->flags |= VAR_6;
  goto mod;
 case 'd':
  VAR_14->flags |= VAR_5;
  goto mod;
 case 'e':
  VAR_14->flags |= VAR_7;
  goto mod;
 case 'f':
  break;
 case 'i':
  VAR_14->flags |= VAR_8;
  goto mod;
 case 'm':
  FUNC_2(VAR_2, VAR_15, *VAR_17, "m");
  goto mod;
 case 'p':
 case 'v':
  if (VAR_16[*VAR_17] == '-' || VAR_16[*VAR_17] == '+')
   (*VAR_17)++;
  while (FUNC_1((unsigned char)VAR_16[*VAR_17]))
   (*VAR_17)++;
  goto mod;
 case 't':
  VAR_14->flags |= VAR_9;
  goto mod;
 case 'u':
  VAR_14->flags |= VAR_10;
  goto mod;
 case 'w':
  VAR_19 = 0;
  if (VAR_16[*VAR_17] == '(') {
   (*VAR_17)++;
   while (VAR_16[*VAR_17 + VAR_19] != '\0' && VAR_16[*VAR_17 + VAR_19] != ')')
    VAR_19++;
  } else
   while (FUNC_1((unsigned char)VAR_16[*VAR_17 + VAR_19]))
    VAR_19++;
  if (VAR_19) {
   FUNC_0(VAR_14->wstr);
   VAR_14->wstr = FUNC_3(VAR_16 + *VAR_17, VAR_19);
   *VAR_17 += VAR_19;
   if (VAR_16[*VAR_17] == ')')
    (*VAR_17)++;
  }
  goto mod;
 case 'x':
  VAR_14->flags |= VAR_12;
  goto mod;
 case 'z':
  VAR_14->flags |= VAR_11;
  goto mod;
 case '|':
  if (VAR_14->vert < 2)
   VAR_14->vert++;
  else
   FUNC_2(VAR_4,
       VAR_15, *VAR_17 - 1, ((void*)0));
  goto mod;
 default:
  FUNC_2(VAR_1,
      VAR_15, *VAR_17 - 1, "%c", VAR_16[*VAR_17 - 1]);
  goto mod;
 }



 if (VAR_16[*VAR_17] == '(')
  goto mod;



 if (VAR_16[*VAR_17] == '\0' || (VAR_16[*VAR_17 + 1] != ' ' && VAR_16[*VAR_17 + 1] != '.')) {
  FUNC_2(VAR_0,
      VAR_15, *VAR_17, "TS %s", VAR_16 + *VAR_17 - 1);
  if (VAR_16[*VAR_17] != '\0')
   (*VAR_17)++;
  if (VAR_16[*VAR_17] != '\0')
   (*VAR_17)++;
  goto mod;
 }

 switch (VAR_16[(*VAR_17)++]) {
 case '3':
 case 'B':
  VAR_14->flags |= VAR_6;
  goto mod;
 case '2':
 case 'I':
  VAR_14->flags |= VAR_8;
  goto mod;
 case '1':
 case 'R':
  goto mod;
 default:
  FUNC_2(VAR_0,
      VAR_15, *VAR_17 - 1, "TS f%c", VAR_16[*VAR_17 - 1]);
  goto mod;
 }
}
