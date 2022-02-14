
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_demangle_info {unsigned int typestring_count; int dhandle; int info; TYPE_1__* typestrings; } ;
typedef int * debug_type ;
typedef void* bfd_boolean ;
struct TYPE_2__ {char* typestring; } ;


 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char const) ;
 void* VAR_3 ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int *,int *,int ,unsigned long,void*) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,int **,void*) ;
 int * FUNC_5 (int ,int,void*) ;
 int * FUNC_6 (int ,int *,int *,int **,void*) ;
 int * FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct stab_demangle_info*,char const**,int ***,void**) ;
 unsigned int FUNC_12 (char const**) ;
 int FUNC_13 (struct stab_demangle_info*,char const**,int **) ;
 int FUNC_14 (char const**,unsigned int*) ;
 int FUNC_15 (struct stab_demangle_info*,char const**,int **) ;
 int * FUNC_16 (int ,int ,char const*,int,int ) ;
 unsigned int FUNC_17 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_18 (struct stab_demangle_info *VAR_4, const char **VAR_5,
      debug_type *VAR_6)
{
  const char *VAR_7;

  VAR_7 = *VAR_5;

  switch (**VAR_5)
    {
    case 'P':
    case 'p':

      ++*VAR_5;
      if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
 return VAR_2;
      if (VAR_6 != ((void*)0))
 *VAR_6 = FUNC_8 (VAR_4->dhandle, *VAR_6);
      break;

    case 'R':

      ++*VAR_5;
      if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
 return VAR_2;
      if (VAR_6 != ((void*)0))
 *VAR_6 = FUNC_9 (VAR_4->dhandle, *VAR_6);
      break;

    case 'A':

      {
 unsigned long VAR_8;

 ++*VAR_5;
 VAR_8 = 0;
 while (**VAR_5 != '\0' && **VAR_5 != '_')
   {
     if (! FUNC_0 (**VAR_5))
       {
  FUNC_10 (VAR_7);
  return VAR_2;
       }
     VAR_8 *= 10;
     VAR_8 += **VAR_5 - '0';
     ++*VAR_5;
   }
 if (**VAR_5 != '_')
   {
     FUNC_10 (VAR_7);
     return VAR_2;
   }
 ++*VAR_5;

 if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
   return VAR_2;
 if (VAR_6 != ((void*)0))
   {
     debug_type VAR_9;

     VAR_9 = FUNC_1 (VAR_4->dhandle, "int");
     if (VAR_9 == ((void*)0))
       VAR_9 = FUNC_5 (VAR_4->dhandle, 4, VAR_2);
     *VAR_6 = FUNC_2 (VAR_4->dhandle, *VAR_6, VAR_9,
         0, VAR_8, VAR_2);
   }
      }
      break;

    case 'T':

      {
 unsigned int VAR_10;
 const char *VAR_11;

 ++*VAR_5;
 if (! FUNC_14 (VAR_5, &VAR_10))
   {
     FUNC_10 (VAR_7);
     return VAR_2;
   }
 if (VAR_10 >= VAR_4->typestring_count)
   {
     FUNC_10 (VAR_7);
     return VAR_2;
   }
 VAR_11 = VAR_4->typestrings[VAR_10].typestring;
 if (! FUNC_18 (VAR_4, &VAR_11, VAR_6))
   return VAR_2;
      }
      break;

    case 'F':

      {
 debug_type *VAR_12;
 bfd_boolean VAR_13;

 ++*VAR_5;
 if (! FUNC_11 (VAR_4, VAR_5,
      (VAR_6 == ((void*)0)
       ? (debug_type **) ((void*)0)
       : &VAR_12),
      (VAR_6 == ((void*)0)
       ? (bfd_boolean *) ((void*)0)
       : &VAR_13)))
   return VAR_2;
 if (**VAR_5 != '_')
   {



     FUNC_10 (VAR_7);
     return VAR_2;
   }
 ++*VAR_5;
 if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
   return VAR_2;
 if (VAR_6 != ((void*)0))
   *VAR_6 = FUNC_4 (VAR_4->dhandle, *VAR_6, VAR_12,
          VAR_13);

      }
      break;

    case 'M':
    case 'O':
      {
 bfd_boolean VAR_14, VAR_15, VAR_16;
 debug_type VAR_17 = VAR_1;
 debug_type *VAR_18;
 bfd_boolean VAR_19;
 unsigned int VAR_20;
 const char *VAR_21;

 VAR_14 = **VAR_5 == 'M';
 VAR_15 = VAR_2;
 VAR_16 = VAR_2;
 VAR_18 = ((void*)0);
 VAR_19 = VAR_2;

 ++*VAR_5;
 if (FUNC_0 (**VAR_5))
   {
     VAR_20 = FUNC_12 (VAR_5);
     if (FUNC_17 (*VAR_5) < VAR_20)
       {
  FUNC_10 (VAR_7);
  return VAR_2;
       }
     VAR_21 = *VAR_5;
     *VAR_5 += VAR_20;

     if (VAR_6 != ((void*)0))
       {
  VAR_17 = FUNC_16 (VAR_4->dhandle,
          VAR_4->info,
          VAR_21, (int) VAR_20,
          VAR_0);
  if (VAR_17 == VAR_1)
    return VAR_2;
       }
   }
 else if (**VAR_5 == 'Q')
   {
     if (! FUNC_15 (VAR_4, VAR_5,
        (VAR_6 == ((void*)0)
         ? (debug_type *) ((void*)0)
         : &VAR_17)))
       return VAR_2;
   }
 else
   {
     FUNC_10 (VAR_7);
     return VAR_2;
   }

 if (VAR_14)
   {
     if (**VAR_5 == 'C')
       {
  VAR_15 = VAR_3;
  ++*VAR_5;
       }
     else if (**VAR_5 == 'V')
       {
  VAR_16 = VAR_3;
  ++*VAR_5;
       }
     if (**VAR_5 != 'F')
       {
  FUNC_10 (VAR_7);
  return VAR_2;
       }
     ++*VAR_5;
     if (! FUNC_11 (VAR_4, VAR_5,
          (VAR_6 == ((void*)0)
           ? (debug_type **) ((void*)0)
           : &VAR_18),
          (VAR_6 == ((void*)0)
           ? (bfd_boolean *) ((void*)0)
           : &VAR_19)))
       return VAR_2;
   }

 if (**VAR_5 != '_')
   {
     FUNC_10 (VAR_7);
     return VAR_2;
   }
 ++*VAR_5;

 if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
   return VAR_2;

 if (VAR_6 != ((void*)0))
   {
     if (! VAR_14)
       *VAR_6 = FUNC_7 (VAR_4->dhandle, VAR_17,
            *VAR_6);
     else
       {


  *VAR_6 = FUNC_6 (VAR_4->dhandle, *VAR_6,
       VAR_17, VAR_18, VAR_19);
       }
   }
      }
      break;

    case 'G':
      ++*VAR_5;
      if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
 return VAR_2;
      break;

    case 'C':
      ++*VAR_5;
      if (! FUNC_18 (VAR_4, VAR_5, VAR_6))
 return VAR_2;
      if (VAR_6 != ((void*)0))
 *VAR_6 = FUNC_3 (VAR_4->dhandle, *VAR_6);
      break;

    case 'Q':
      {
 const char *VAR_22;

 VAR_22 = *VAR_5;
 if (! FUNC_15 (VAR_4, VAR_5, VAR_6))
   return VAR_2;
      }
      break;

    default:
      if (! FUNC_13 (VAR_4, VAR_5, VAR_6))
 return VAR_2;
      break;
    }

  return VAR_3;
}
