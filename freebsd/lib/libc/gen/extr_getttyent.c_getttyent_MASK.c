
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyent {char* ty_name; char* ty_getty; char* ty_type; char* ty_comment; void* ty_group; int * ty_window; int ty_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 char* FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 size_t FUNC_11 (char*) ;
 int VAR_18 ;
 void* FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ) ;
 char VAR_19 ;

struct ttyent *
FUNC_14(void)
{
 static struct ttyent VAR_20;
 char *VAR_21;
 int VAR_22;
 size_t VAR_23;

 if (!VAR_18 && !FUNC_8())
  return (((void*)0));
 for (;;) {
  if (!FUNC_4(VAR_21 = VAR_17, VAR_16, VAR_18))
   return (((void*)0));

  while (!FUNC_10(VAR_21, '\n') && !FUNC_3(VAR_18)) {
   VAR_23 = FUNC_11(VAR_21);
   VAR_16 += VAR_0;
   if ((VAR_21 = FUNC_6(VAR_17, VAR_16)) == ((void*)0)) {
    (void)FUNC_2();
    return (((void*)0));
   }
   VAR_17 = VAR_21;
   if (!FUNC_4(&VAR_17[VAR_23], VAR_16 - VAR_23, VAR_18))
    return (((void*)0));
  }
  while (FUNC_5((unsigned char)*VAR_21))
   ++VAR_21;
  if (*VAR_21 && *VAR_21 != '#')
   break;
 }




 VAR_19 = 0;
 VAR_20.ty_name = VAR_21;
 VAR_20.ty_status = 0;
 VAR_20.ty_window = ((void*)0);
 VAR_20.ty_group = VAR_9;

 VAR_21 = FUNC_9(VAR_21);
 if (!*(VAR_20.ty_getty = VAR_21))
  VAR_20.ty_getty = VAR_20.ty_type = ((void*)0);
 else {
  VAR_21 = FUNC_9(VAR_21);
  if (!*(VAR_20.ty_type = VAR_21))
   VAR_20.ty_type = ((void*)0);
  else {

   if (!strncmp(VAR_21, VAR_5, sizeof(VAR_5) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_5) - 1]))
    VAR_20.ty_status |= VAR_1;
   else if (!FUNC_0(VAR_21, VAR_8, sizeof(VAR_8) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_8) - 1]))
    VAR_20.ty_status |= VAR_2;
   VAR_21 = FUNC_9(VAR_21);
  }
 }

 for (; *VAR_21; VAR_21 = FUNC_9(VAR_21)) {
  if (!FUNC_0(VAR_21, VAR_10, sizeof(VAR_10) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_10) - 1]))
   VAR_20.ty_status &= ~VAR_3;
  else if (!FUNC_0(VAR_21, VAR_11, sizeof(VAR_11) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_11) - 1]))
   VAR_20.ty_status |= VAR_3;
  else if (!FUNC_0(VAR_21, VAR_12, sizeof(VAR_12) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_12) - 1]))
   VAR_20.ty_status |= FUNC_1(VAR_20.ty_name);
  else if (!FUNC_0(VAR_21, VAR_13, sizeof(VAR_13) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_13) - 1]))
   VAR_20.ty_status |= FUNC_0(VAR_20.ty_name);
  else if (!FUNC_0(VAR_21, VAR_14, sizeof(VAR_14) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_14) - 1]))
   VAR_20.ty_status |= VAR_4;
  else if (!FUNC_0(VAR_21, VAR_7, sizeof(VAR_7) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_7) - 1]))
   VAR_20.ty_status &= ~VAR_4;
  else if (!FUNC_0(VAR_21, VAR_5, sizeof(VAR_5) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_5) - 1]))
   VAR_20.ty_status |= VAR_1;
  else if (!FUNC_0(VAR_21, VAR_8, sizeof(VAR_8) - 1) && FUNC_5((unsigned char)VAR_21[sizeof(VAR_8) - 1]))
   VAR_20.ty_status |= VAR_2;
  else if (!FUNC_0(VAR_21, VAR_15, sizeof(VAR_15) - 1) && VAR_21[sizeof(VAR_15) - 1] == '=')
   VAR_20.ty_window = FUNC_12(VAR_21);
  else if (!FUNC_0(VAR_21, VAR_6, sizeof(VAR_6) - 1) && VAR_21[sizeof(VAR_6) - 1] == '=')
   VAR_20.ty_group = FUNC_12(VAR_21);
  else
   break;
 }

 if (VAR_19 == '#' || *VAR_21 == '#')
  while ((VAR_22 = *++VAR_21) == ' ' || VAR_22 == '\t')
   ;
 VAR_20.ty_comment = VAR_21;
 if (*VAR_21 == 0)
  VAR_20.ty_comment = 0;
 if ((VAR_21 = FUNC_10(VAR_21, '\n')))
  *VAR_21 = '\0';
 return (&VAR_20);
}
