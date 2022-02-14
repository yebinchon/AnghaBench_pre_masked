
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {void* self_crossref; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef scalar_t__ debug_type ;
typedef void* bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (char const) ;
 void* VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (void*,scalar_t__) ;
 scalar_t__ FUNC_6 (void*,scalar_t__,scalar_t__*,void*) ;
 scalar_t__ FUNC_7 (void*,scalar_t__,scalar_t__,scalar_t__*,void*) ;
 scalar_t__ FUNC_8 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (void*,scalar_t__) ;
 scalar_t__ FUNC_10 (void*,scalar_t__) ;
 scalar_t__ FUNC_11 (void*,scalar_t__,void*) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (void*,scalar_t__) ;
 int FUNC_14 (void*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_15 (void*,struct stab_handle*,char const**,void*) ;
 scalar_t__ FUNC_16 (void*,char const**) ;
 scalar_t__ FUNC_17 (void*,struct stab_handle*,char const*,char const**,int*) ;
 scalar_t__ FUNC_18 (void*,struct stab_handle*,char const*,char const**,int,int*) ;
 scalar_t__ FUNC_19 (void*,char const**) ;
 scalar_t__ FUNC_20 (void*,char const**) ;
 int FUNC_21 (char const**,int*) ;
 scalar_t__* FUNC_22 (struct stab_handle*,int*) ;
 scalar_t__ FUNC_23 (void*,struct stab_handle*,char const*,int,int) ;
 scalar_t__ FUNC_24 (void*,struct stab_handle*,int*) ;
 int FUNC_25 (void*,struct stab_handle*,int*,scalar_t__) ;
 char* FUNC_26 (char const*,char) ;
 int FUNC_27 (char const*,char const*,int) ;
 int FUNC_28 (char const*,int ) ;
 scalar_t__ FUNC_29 (unsigned int) ;
 scalar_t__ FUNC_30 (scalar_t__*,unsigned int) ;

__attribute__((used)) static debug_type
FUNC_31 (void *VAR_7, struct stab_handle *VAR_8, const char *VAR_9, const char **VAR_10, debug_type **VAR_11)
{
  const char *VAR_12;
  int VAR_13[2];
  int VAR_14;
  bfd_boolean VAR_15;
  int VAR_16;
  debug_type VAR_17;

  if (VAR_11 != ((void*)0))
    *VAR_11 = ((void*)0);

  VAR_12 = *VAR_10;

  VAR_14 = -1;
  VAR_15 = VAR_5;

  VAR_8->self_crossref = VAR_5;




  if (! FUNC_0 (**VAR_10) && **VAR_10 != '(' && **VAR_10 != '-')
    {


      VAR_13[0] = VAR_13[1] = -1;
    }
  else
    {
      if (! FUNC_21 (VAR_10, VAR_13))
 return VAR_4;

      if (**VAR_10 != '=')


 return FUNC_24 (VAR_7, VAR_8, VAR_13);
      if (VAR_11 != ((void*)0) && VAR_13[0] >= 0 && VAR_13[1] >= 0)
 *VAR_11 = FUNC_22 (VAR_8, VAR_13);



      ++*VAR_10;

      while (**VAR_10 == '@')
 {
   const char *VAR_18 = *VAR_10 + 1;
   const char *VAR_19;

   if (FUNC_0 (*VAR_18) || *VAR_18 == '(' || *VAR_18 == '-')

     break;


   VAR_19 = VAR_18;

   for (; *VAR_18 != ';'; ++VAR_18)
     {
       if (*VAR_18 == '\0')
  {
    FUNC_3 (VAR_12);
    return VAR_4;
  }
     }
   *VAR_10 = VAR_18 + 1;

   switch (*VAR_19)
     {
     case 's':
       VAR_14 = FUNC_2 (VAR_19 + 1);
       VAR_14 /= 8;
       if (VAR_14 <= 0)
  VAR_14 = -1;
       break;

     case 'S':
       VAR_15 = VAR_6;
       break;

     default:


       break;
     }
 }
    }

  VAR_16 = **VAR_10;
  ++*VAR_10;

  switch (VAR_16)
    {
    case 'x':
      {
 enum debug_type_kind VAR_20;
 const char *VAR_21, *VAR_22, *VAR_23;


 switch (**VAR_10)
   {
   case 's':
     VAR_20 = VAR_1;
     break;
   case 'u':
     VAR_20 = VAR_2;
     break;
   case 'e':
     VAR_20 = VAR_0;
     break;
   default:


     FUNC_28 (VAR_12, FUNC_1("unrecognized cross reference type"));
     VAR_20 = VAR_1;
     break;
   }
 ++*VAR_10;

 VAR_21 = FUNC_26 (*VAR_10, '<');
 VAR_23 = FUNC_26 (*VAR_10, ':');
 if (VAR_23 == ((void*)0))
   {
     FUNC_3 (VAR_12);
     return VAR_4;
   }
 if (VAR_21 != ((void*)0) && VAR_23 > VAR_21 && VAR_23[1] == ':')
   {
     int VAR_24 = 0;

     for (VAR_22 = VAR_21; *VAR_22 != '\0'; ++VAR_22)
       {
  if (*VAR_22 == '<')
    ++VAR_24;
  else if (*VAR_22 == '>')
    --VAR_24;
  else if (*VAR_22 == ':' && VAR_24 == 0)
    break;
       }
     VAR_23 = VAR_22;
     if (*VAR_23 != ':')
       {
  FUNC_3 (VAR_12);
  return VAR_4;
       }
   }





 if (VAR_9 != ((void*)0)
     && FUNC_27 (VAR_9, *VAR_10, VAR_23 - *VAR_10) == 0
     && VAR_9[VAR_23 - *VAR_10] == '\0')
   VAR_8->self_crossref = VAR_6;

 VAR_17 = FUNC_23 (VAR_7, VAR_8, *VAR_10, VAR_23 - *VAR_10, VAR_20);

 *VAR_10 = VAR_23 + 1;
      }
      break;

    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '(':
      {
 const char *VAR_25;
 int VAR_26[2];


 (*VAR_10)--;
 VAR_25 = *VAR_10;


 if (! FUNC_21 (VAR_10, VAR_26))
   return VAR_4;

 if (VAR_13[0] == VAR_26[0] && VAR_13[1] == VAR_26[1])
   {


     VAR_17 = FUNC_12 (VAR_7);
   }
 else
   {
     *VAR_10 = VAR_25;




     VAR_17 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0),
         VAR_10, (debug_type **) ((void*)0));
     if (VAR_17 == VAR_4)
       return VAR_4;
   }

 if (VAR_13[0] != -1)
   {
     if (! FUNC_25 (VAR_7, VAR_8, VAR_13, VAR_17))
       return VAR_4;
   }

 break;
      }

    case '*':
      VAR_17 = FUNC_9 (VAR_7,
           FUNC_31 (VAR_7, VAR_8,
       (const char *) ((void*)0),
       VAR_10,
       (debug_type **) ((void*)0)));
      break;

    case '&':

      VAR_17 = (FUNC_10
        (VAR_7,
  FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_10,
     (debug_type **) ((void*)0))));
      break;

    case 'f':


      VAR_17 = (FUNC_6
        (VAR_7,
  FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_10,
     (debug_type **) ((void*)0)),
  (debug_type *) ((void*)0), VAR_5));
      break;

    case 'k':


      VAR_17 = FUNC_5 (VAR_7,
         FUNC_31 (VAR_7, VAR_8,
            (const char *) ((void*)0),
            VAR_10,
            (debug_type **) ((void*)0)));
      break;

    case 'B':


      VAR_17 = (FUNC_13
        (VAR_7,
  FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_10,
     (debug_type **) ((void*)0))));
      break;

    case '@':


      {
 debug_type VAR_27;
 debug_type VAR_28;



 VAR_27 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_10,
      (debug_type **) ((void*)0));
 if (VAR_27 == VAR_4)
   return VAR_4;

 if (**VAR_10 != ',')
   {
     FUNC_3 (VAR_12);
     return VAR_4;
   }
 ++*VAR_10;

 VAR_28 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0), VAR_10,
       (debug_type **) ((void*)0));
 if (VAR_28 == VAR_4)
   return VAR_4;

 VAR_17 = FUNC_8 (VAR_7, VAR_27, VAR_28);
      }
      break;

    case '#':

      if (**VAR_10 == '#')
 {
   debug_type VAR_29;

   ++*VAR_10;
   VAR_29 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0),
      VAR_10, (debug_type **) ((void*)0));
   if (VAR_29 == VAR_4)
     return VAR_4;
   if (**VAR_10 != ';')
     {
       FUNC_3 (VAR_12);
       return VAR_4;
     }
   ++*VAR_10;
   VAR_17 = FUNC_7 (VAR_7, VAR_29,
       VAR_4,
       (debug_type *) ((void*)0), VAR_5);
 }
      else
 {
   debug_type VAR_30;
   debug_type VAR_31;
   debug_type *VAR_32;
   unsigned int VAR_33;
   unsigned int VAR_34;
   bfd_boolean VAR_35;

   VAR_30 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0),
        VAR_10, (debug_type **) ((void*)0));
   if (VAR_30 == VAR_4)
     return VAR_4;

   if (**VAR_10 != ',')
     {
       FUNC_3 (VAR_12);
       return VAR_4;
     }
   ++*VAR_10;

   VAR_31 = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0),
      VAR_10, (debug_type **) ((void*)0));
   if (VAR_31 == VAR_4)
     return VAR_4;

   VAR_34 = 10;
   VAR_32 = (debug_type *) FUNC_29 (VAR_34 * sizeof *VAR_32);
   VAR_33 = 0;
   while (**VAR_10 != ';')
     {
       if (**VAR_10 != ',')
  {
    FUNC_3 (VAR_12);
    return VAR_4;
  }
       ++*VAR_10;

       if (VAR_33 + 1 >= VAR_34)
  {
    VAR_34 += 10;
    VAR_32 = ((debug_type *)
     FUNC_30 (VAR_32, VAR_34 * sizeof *VAR_32));
  }

       VAR_32[VAR_33] = FUNC_31 (VAR_7, VAR_8, (const char *) ((void*)0),
      VAR_10, (debug_type **) ((void*)0));
       if (VAR_32[VAR_33] == VAR_4)
  return VAR_4;
       ++VAR_33;
     }
   ++*VAR_10;




   if (VAR_33 == 0
       || FUNC_4 (VAR_7, VAR_32[VAR_33 - 1]) != VAR_3)
     VAR_35 = VAR_6;
   else
     {
       --VAR_33;
       VAR_35 = VAR_5;
     }

   VAR_32[VAR_33] = VAR_4;

   VAR_17 = FUNC_7 (VAR_7, VAR_31, VAR_30, VAR_32,
       VAR_35);
 }
      break;

    case 'r':

      VAR_17 = FUNC_17 (VAR_7, VAR_8, VAR_9, VAR_10, VAR_13);
      break;

    case 'b':


      VAR_17 = FUNC_19 (VAR_7, VAR_10);
      break;

    case 'R':

      VAR_17 = FUNC_20 (VAR_7, VAR_10);
      break;

    case 'e':

      VAR_17 = FUNC_16 (VAR_7, VAR_10);
      break;

    case 's':
    case 'u':

      VAR_17 = FUNC_18 (VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_16 == 's', VAR_13);
      break;

    case 'a':

      if (**VAR_10 != 'r')
 {
   FUNC_3 (VAR_12);
   return VAR_4;
 }
      ++*VAR_10;

      VAR_17 = FUNC_15 (VAR_7, VAR_8, VAR_10, VAR_15);
      break;

    case 'S':
      VAR_17 = FUNC_11 (VAR_7,
       FUNC_31 (VAR_7, VAR_8,
          (const char *) ((void*)0),
          VAR_10,
          (debug_type **) ((void*)0)),
       VAR_15);
      break;

    default:
      FUNC_3 (VAR_12);
      return VAR_4;
    }

  if (VAR_17 == VAR_4)
    return VAR_4;

  if (VAR_13[0] != -1)
    {
      if (! FUNC_25 (VAR_7, VAR_8, VAR_13, VAR_17))
 return VAR_4;
    }

  if (VAR_14 != -1)
    {
      if (! FUNC_14 (VAR_7, VAR_17, (unsigned int) VAR_14))
 return VAR_4;
    }

  return VAR_17;
}
