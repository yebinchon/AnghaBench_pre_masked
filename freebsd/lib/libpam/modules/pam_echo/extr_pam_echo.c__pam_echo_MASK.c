
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,void const**) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_2(pam_handle_t *VAR_8, int VAR_9,
    int VAR_10, const char *VAR_11[])
{
 char VAR_12[VAR_0];
 const void *VAR_13;
 const char *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 size_t VAR_19;

 if (VAR_9 & VAR_4)
  return (VAR_5);
 for (VAR_17 = 0, VAR_19 = 0; VAR_17 < VAR_10 && VAR_19 < sizeof(VAR_12) - 1; ++VAR_17) {
  if (VAR_17 > 0)
   VAR_12[VAR_19++] = ' ';
  for (VAR_14 = VAR_11[VAR_17]; *VAR_14 != '\0' && VAR_19 < sizeof(VAR_12) - 1; ++VAR_14) {
   if (*VAR_14 != '%' || VAR_14[1] == '\0') {
    VAR_12[VAR_19++] = *VAR_14;
    continue;
   }
   switch (*++VAR_14) {
   case 'H':
    VAR_18 = VAR_1;
    break;
   case 'h':

    VAR_18 = -1;
    break;
   case 's':
    VAR_18 = VAR_3;
    break;
   case 't':
    VAR_18 = VAR_6;
    break;
   case 'U':
    VAR_18 = VAR_2;
    break;
   case 'u':
    VAR_18 = VAR_7;
    break;
   default:
    VAR_18 = -1;
    VAR_12[VAR_19++] = *VAR_14;
    break;
   }
   if (VAR_18 == -1)
    continue;
   VAR_16 = FUNC_0(VAR_8, VAR_18, &VAR_13);
   if (VAR_16 != VAR_5)
    return (VAR_16);
   if (VAR_13 == ((void*)0))
    VAR_13 = "(null)";
   for (VAR_15 = VAR_13; *VAR_15 != '\0' && VAR_19 < sizeof(VAR_12) - 1; ++VAR_15)
    VAR_12[VAR_19++] = *VAR_15;
  }
 }
 VAR_12[VAR_19] = '\0';
 return (FUNC_1(VAR_8, "%s", VAR_12));
}
