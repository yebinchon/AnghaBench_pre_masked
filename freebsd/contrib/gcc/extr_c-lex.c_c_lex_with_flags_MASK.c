
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tree ;
typedef int location_t ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
typedef char cppchar_t ;
struct TYPE_11__ {int len; char* text; } ;
struct TYPE_12__ {int pragma; TYPE_1__ str; int node; } ;
struct TYPE_13__ {int type; unsigned char flags; TYPE_2__ val; int src_loc; } ;
typedef TYPE_3__ cpp_token ;



 int VAR_0 ;







 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 unsigned int FUNC_7 (int ,TYPE_3__ const*) ;
 TYPE_3__* FUNC_8 (int ) ;
 int * FUNC_9 (int ,TYPE_3__ const*,unsigned char*,int) ;
 int FUNC_10 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (TYPE_3__ const*,unsigned int) ;
 int FUNC_13 (TYPE_3__ const*,unsigned int) ;
 int FUNC_14 (TYPE_3__ const*) ;
 int FUNC_15 (TYPE_3__ const*,int *,int) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

enum cpp_ttype
FUNC_19 (tree *VAR_10, location_t *VAR_11, unsigned char *VAR_12)
{
  static bool VAR_13;
  const cpp_token *VAR_14;
  enum cpp_ttype VAR_15;
  unsigned char VAR_16 = 0;

  FUNC_18 (VAR_4);
 retry:
  VAR_14 = FUNC_8 (VAR_9);
  VAR_15 = VAR_14->type;

 retry_after_at:



  *VAR_11 = VAR_8;

  switch (VAR_15)
    {
    case 133:
      goto retry;

    case 139:
      *VAR_10 = FUNC_0 (FUNC_1 (VAR_14->val.node));
      break;

    case 138:
      {
 unsigned int VAR_17 = FUNC_7 (VAR_9, VAR_14);

 switch (VAR_17 & VAR_1)
   {
   case 135:

     *VAR_10 = VAR_6;
     VAR_7++;
     break;

   case 136:


     if (VAR_14->val.str.len == 1 && *VAR_14->val.str.text == '0')
       VAR_16 = VAR_3;
     *VAR_10 = FUNC_13 (VAR_14, VAR_17);
     break;

   case 137:
     *VAR_10 = FUNC_12 (VAR_14, VAR_17);
     break;

   default:
     FUNC_11 ();
   }
      }
      break;

    case 145:

      if (FUNC_6 ())
 {
   location_t VAR_18 = VAR_8;

 retry_at:
   VAR_14 = FUNC_8 (VAR_9);
   VAR_15 = VAR_14->type;
   switch (VAR_15)
     {
     case 133:
       goto retry_at;

     case 130:
     case 128:
       VAR_15 = FUNC_15 (VAR_14, VAR_10, 1);
       break;

     case 139:
       *VAR_10 = FUNC_0 (FUNC_1 (VAR_14->val.node));
       if (FUNC_16 (*VAR_10))
  {
    VAR_15 = VAR_0;
    break;
  }


     default:

       FUNC_10 ("%Hstray %<@%> in program", &VAR_18);
       goto retry_after_at;
     }
   break;
 }


    case 142:
    case 132:
      {
 unsigned char VAR_19[4];

 *FUNC_9 (VAR_9, VAR_14, VAR_19, 1) = 0;

 FUNC_10 ("stray %qs in program", VAR_19);
      }

      goto retry;

    case 134:
      {
 cppchar_t VAR_20 = VAR_14->val.str.text[0];

 if (VAR_20 == '"' || VAR_20 == '\'')
   FUNC_10 ("missing terminating %c character", (int) VAR_20);
 else if (FUNC_2 (VAR_20))
   FUNC_10 ("stray %qc in program", (int) VAR_20);
 else
   FUNC_10 ("stray %<\\%o%> in program", (int) VAR_20);
      }
      goto retry;

    case 144:
    case 129:
      *VAR_10 = FUNC_14 (VAR_14);
      break;

    case 130:
    case 128:
      if (!VAR_5)
 {
   VAR_15 = FUNC_15 (VAR_14, VAR_10, 0);
   break;
 }
      *VAR_10 = FUNC_4 (VAR_14->val.str.len, (char *) VAR_14->val.str.text);
      break;

    case 131:
      *VAR_10 = FUNC_3 (((void*)0), VAR_14->val.pragma);
      break;


    case 141:
    case 143:
    case 140:
      FUNC_11 ();

    default:
      *VAR_10 = VAR_2;
      break;
    }

  if (VAR_12)
    *VAR_12 = VAR_14->flags | VAR_16;

  if (!VAR_13)
    {
      VAR_13 = 1;
      FUNC_5 ();
    }

  FUNC_17 (VAR_4);

  return VAR_15;
}
