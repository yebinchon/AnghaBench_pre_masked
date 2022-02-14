
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unichar ;
typedef void* rc_uint_type ;
struct TYPE_7__ {char* s; void* length; } ;
struct TYPE_6__ {int * s; void* length; } ;
struct TYPE_5__ {int dword; int val; } ;
struct TYPE_8__ {char* s; TYPE_3__ ss; TYPE_2__ suni; int * uni; TYPE_1__ i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;

 int FUNC_3 () ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (void**) ;
 int * FUNC_6 (void**) ;
 int VAR_9 ;
 int VAR_10 ;
 char FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__* VAR_11 ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char*,scalar_t__*) ;
 int FUNC_16 (scalar_t__*) ;
 TYPE_4__ VAR_13 ;

int
FUNC_17 (void)
{
  char *VAR_14;
  unichar *VAR_15;
  rc_uint_type VAR_16;
  int VAR_17;


  if (! VAR_11)
    FUNC_10 (-1);

  do
    {
      do
 {

   VAR_12 = 0;
   VAR_11[0] = 0;

   if ((VAR_17 = FUNC_8 ()) == -1)
     return -1;
   if (VAR_17 == '\n')
     ++VAR_9;
 }
      while (VAR_17 <= 0x20);

      switch (VAR_17)
 {
 case '#':
   while ((VAR_17 = FUNC_7 ()) != -1 && VAR_17 != '\n')
     FUNC_8 ();
   FUNC_3 ();
   VAR_17 = VAR_5;
   break;

 case '{':
   VAR_17 = FUNC_0 (VAR_0);
   break;

 case '}':
   VAR_17 = FUNC_0 (VAR_4);
   break;

 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
   VAR_13.i.val = FUNC_13 (VAR_17);
   VAR_13.i.dword = 0;
   switch (FUNC_7 ())
     {
     case 'l': case 'L':
       FUNC_8 ();
       VAR_13.i.dword = 1;
       break;
     }
   VAR_17 = FUNC_0 (VAR_6);
   break;
 case '"':
   FUNC_9 ();
   VAR_17 = FUNC_0 ((! VAR_10 ? 130 : 129));
   if (VAR_17 == VAR_5)
     break;
   VAR_14 = FUNC_5 (&VAR_16);
   if (! VAR_10)
     VAR_13.s = VAR_14;
   else
     {
       VAR_13.ss.length = VAR_16;
       VAR_13.ss.s = VAR_14;
   }
   break;
 case 'L': case 'l':
   if (FUNC_7 () == '"')
     {
       FUNC_8 ();
       FUNC_9 ();
       VAR_17 = FUNC_0 ((! VAR_10 ? VAR_7 : VAR_8));
       if (VAR_17 == VAR_5)
  break;
       VAR_15 = FUNC_6 (&VAR_16);
       if (! VAR_10)
  VAR_13.uni = VAR_15;
       else
         {
    VAR_13.suni.length = VAR_16;
    VAR_13.suni.s = VAR_15;
       }
       break;
     }

 default:
   if (FUNC_2 (VAR_17) || VAR_17=='$')
     {
       while ((VAR_17 = FUNC_7 ()) != -1 && (FUNC_1 (VAR_17) || VAR_17 == '$' || VAR_17 == '.'))
  FUNC_8 ();
       VAR_17 = FUNC_0 (FUNC_11 (VAR_11));
       if (VAR_17 == 128)
  {
    VAR_14 = FUNC_4 (FUNC_16 (VAR_11) + 1);
    FUNC_15 (VAR_14, VAR_11);
    VAR_13.s = VAR_14;
  }
       else if (VAR_17 == VAR_1)
  {
    const char *VAR_18 = ((void*)0);

    switch (FUNC_17 ())
    {
    case 128:
    case 130:
      VAR_18 = VAR_13.s;
      break;
    case 129:
      VAR_18 = VAR_13.s = VAR_13.ss.s;
      break;
    }
    if (! VAR_18)
      {
        FUNC_12 ("BLOCK expects a string as argument.");
        VAR_17 = VAR_5;
      }
    else if (! FUNC_14 (VAR_18, "StringFileInfo"))
      VAR_17 = VAR_2;
    else if (! FUNC_14 (VAR_18, "VarFileInfo"))
      VAR_17 = VAR_3;
  }
       break;
     }
   VAR_17 = FUNC_0 (VAR_17);
   break;
 }
    }
  while (VAR_17 == VAR_5);

  return VAR_17;
}
