
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_tag {char* name; struct stab_tag* next; int slot; } ;
struct stab_handle {int gcc_compiled; long symcount; struct stab_tag* tags; int self_crossref; int ** syms; int abfd; } ;
typedef int debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int asymbol ;


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
 scalar_t__ FUNC_0 (char const) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char FUNC_7 (int ) ;
 int FUNC_8 (void*,int ,int *,int ) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (void*,char*,int ) ;
 int FUNC_11 (void*,char*,int ) ;
 int FUNC_12 (void*,char*,int ,int,int ) ;
 int FUNC_13 (void*,char*,int ) ;
 int FUNC_14 (void*,char*,int ,int ) ;
 int FUNC_15 (void*,char*,int ,int ,int ) ;
 int FUNC_16 (void*,char*,int ,int ) ;
 int FUNC_17 (void*,char*,int ) ;
 int FUNC_18 (void*,struct stab_handle*,char const*,char const**,int **) ;
 char* FUNC_19 (char const*,int) ;
 int FUNC_20 (void*,struct stab_handle*,char*,int ,int ,int ) ;
 char* FUNC_21 (char const*,char) ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (char const*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_24 (void *VAR_13, struct stab_handle *VAR_14, int VAR_15,
     int VAR_16, bfd_vma VAR_17, const char *VAR_18)
{
  const char *VAR_19;
  char *VAR_20;
  int VAR_21;
  debug_type VAR_22;
  bfd_boolean VAR_23;
  bfd_boolean VAR_24;
  unsigned int VAR_25;
  debug_type *VAR_26;

  VAR_19 = FUNC_21 (VAR_18, ':');
  if (VAR_19 == ((void*)0))
    return VAR_12;

  while (VAR_19[1] == ':')
    {
      VAR_19 += 2;
      VAR_19 = FUNC_21 (VAR_19, ':');
      if (VAR_19 == ((void*)0))
 {
   FUNC_4 (VAR_18);
   return VAR_10;
 }
    }




  if (VAR_14->gcc_compiled >= 2)
    VAR_25 = VAR_16;
  else
    VAR_25 = 0;


  VAR_20 = ((void*)0);
  if (VAR_18[0] == '$')
    {
      switch (VAR_18[1])
 {
 case 't':
   VAR_20 = "this";
   break;
 case 'v':

   break;
 case 'e':
   VAR_20 = "eh_throw";
   break;
 case '_':

   break;
 case 'X':

   break;
 default:
   FUNC_23 (VAR_18, FUNC_1("unknown C++ encoded name"));
   break;
 }
    }

  if (VAR_20 == ((void*)0))
    {
      if (VAR_19 == VAR_18 || (VAR_18[0] == ' ' && VAR_19 == VAR_18 + 1))
 VAR_20 = ((void*)0);
      else
 VAR_20 = FUNC_19 (VAR_18, VAR_19 - VAR_18);
    }

  ++VAR_19;
  if (FUNC_0 (*VAR_19) || *VAR_19 == '(' || *VAR_19 == '-')
    VAR_21 = 'l';
  else
    VAR_21 = *VAR_19++;

  switch (VAR_21)
    {
    case 'c':






      if (*VAR_19 != '=')
 {
   FUNC_4 (VAR_18);
   return VAR_10;
 }
      ++VAR_19;
      switch (*VAR_19++)
 {
 case 'r':

   if (! FUNC_11 (VAR_13, VAR_20, FUNC_2 (VAR_19)))
     return VAR_10;
   break;
 case 'i':







   if (! FUNC_13 (VAR_13, VAR_20, FUNC_3 (VAR_19)))
     return VAR_10;
   break;
 case 'e':




   VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0),
       &VAR_19, (debug_type **) ((void*)0));
   if (VAR_22 == VAR_9)
     return VAR_10;
   if (*VAR_19 != ',')
     {
       FUNC_4 (VAR_18);
       return VAR_10;
     }
   if (! FUNC_16 (VAR_13, VAR_20, VAR_22, FUNC_3 (VAR_19)))
     return VAR_10;
   break;
 default:
   FUNC_4 (VAR_18);
   return VAR_10;
 }

      break;

    case 'C':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0),
          &VAR_19, (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_14 (VAR_13, VAR_20, VAR_22, VAR_17))
 return VAR_10;
      break;

    case 'f':
    case 'F':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_12 (VAR_13, VAR_20, VAR_22, VAR_21 == 'F', VAR_17))
 return VAR_10;





      while (*VAR_19 == ';')
 {
   ++VAR_19;
   if (FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0))
       == VAR_9)
     return VAR_10;
 }

      break;

    case 'G':
      {
 char VAR_27;
 long VAR_28;
 asymbol **VAR_29;



 VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
     (debug_type **) ((void*)0));
 if (VAR_22 == VAR_9)
   return VAR_10;
 VAR_27 = FUNC_7 (VAR_14->abfd);
 for (VAR_28 = VAR_14->symcount, VAR_29 = VAR_14->syms; VAR_28 > 0; --VAR_28, ++VAR_29)
   {
     const char *VAR_30;

     VAR_30 = FUNC_5 (*VAR_29);
     if (VAR_27 != '\0' && *VAR_30 == VAR_27)
       ++VAR_30;
     if (*VAR_30 == *VAR_20 && FUNC_22 (VAR_30, VAR_20) == 0)
       break;
   }
 if (VAR_28 > 0)
   VAR_17 = FUNC_6 (*VAR_29);
 if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22, VAR_0,
        VAR_17))
   return VAR_10;
      }
      break;




    case 'l':
    case 's':
      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22, VAR_1,
      VAR_17))
 return VAR_10;
      break;

    case 'p':

      if (*VAR_19 != 'F')
 VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
     (debug_type **) ((void*)0));
      else
 {



   ++VAR_19;
   VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
       (debug_type **) ((void*)0));
   if (VAR_22 != VAR_9)
     {
       debug_type VAR_31;

       VAR_31 = FUNC_8 (VAR_13, VAR_22,
      (debug_type *) ((void*)0), VAR_10);
       VAR_22 = FUNC_9 (VAR_13, VAR_31);
     }
 }
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_15 (VAR_13, VAR_20, VAR_22, VAR_6,
        VAR_17))
 return VAR_10;





      break;

    case 'P':
      if (VAR_15 == VAR_11)
 {

   while (*VAR_19 == ';')
     {
       ++VAR_19;
       if (FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
       (debug_type **) ((void*)0))
    == VAR_9)
  return VAR_10;
     }
   break;
 }

    case 'R':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_15 (VAR_13, VAR_20, VAR_22, VAR_5,
        VAR_17))
 return VAR_10;
      break;

    case 'r':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22, VAR_7,
      VAR_17))
 return VAR_10;



      break;

    case 'S':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22, VAR_8,
      VAR_17))
 return VAR_10;
      break;

    case 't':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, VAR_20, &VAR_19, &VAR_26);
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (VAR_20 == ((void*)0))
 {

   return VAR_12;
 }

      VAR_22 = FUNC_10 (VAR_13, VAR_20, VAR_22);
      if (VAR_22 == VAR_9)
 return VAR_10;

      if (VAR_26 != ((void*)0))
 *VAR_26 = VAR_22;

      break;

    case 'T':


      if (*VAR_19 != 't')
 {
   VAR_23 = VAR_10;


 }
      else
 {
   VAR_23 = VAR_12;
   ++VAR_19;
 }

      VAR_22 = FUNC_18 (VAR_13, VAR_14, VAR_20, &VAR_19, &VAR_26);
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (VAR_20 == ((void*)0))
 return VAR_12;




      VAR_24 = VAR_14->self_crossref;

      VAR_22 = FUNC_17 (VAR_13, VAR_20, VAR_22);
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (VAR_26 != ((void*)0))
 *VAR_26 = VAR_22;




      if (! VAR_24)
 {
   register struct stab_tag **VAR_32;

   for (VAR_32 = &VAR_14->tags; *VAR_32 != ((void*)0); VAR_32 = &(*VAR_32)->next)
     {
       if ((*VAR_32)->name[0] == VAR_20[0]
    && FUNC_22 ((*VAR_32)->name, VAR_20) == 0)
  {
    (*VAR_32)->slot = VAR_22;
    *VAR_32 = (*VAR_32)->next;
    break;
  }
     }
 }

      if (VAR_23)
 {
   VAR_22 = FUNC_10 (VAR_13, VAR_20, VAR_22);
   if (VAR_22 == VAR_9)
     return VAR_10;

   if (VAR_26 != ((void*)0))
     *VAR_26 = VAR_22;
 }

      break;

    case 'V':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;

      if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22,
      VAR_2, VAR_17))
 return VAR_10;
      break;

    case 'v':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_15 (VAR_13, VAR_20, VAR_22, VAR_3,
        VAR_17))
 return VAR_10;
      break;

    case 'a':

      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_15 (VAR_13, VAR_20, VAR_22, VAR_4,
        VAR_17))
 return VAR_10;
      break;

    case 'X':




      VAR_22 = FUNC_18 (VAR_13, VAR_14, (const char *) ((void*)0), &VAR_19,
          (debug_type **) ((void*)0));
      if (VAR_22 == VAR_9)
 return VAR_10;
      if (! FUNC_20 (VAR_13, VAR_14, VAR_20, VAR_22, VAR_1,
      VAR_17))
 return VAR_10;
      break;

    default:
      FUNC_4 (VAR_18);
      return VAR_10;
    }




  return VAR_12;
}
