
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_types {int dummy; } ;
struct stab_handle {char* so_string; scalar_t__ so_value; char* main_filename; int gcc_compiled; scalar_t__ file_start_offset; int files; scalar_t__ function_start_offset; scalar_t__ function_end; void* n_opt_found; void* within_function; scalar_t__ sections; int block_depth; struct stab_types** file_types; } ;
typedef scalar_t__ bfd_vma ;
typedef void* bfd_boolean ;


 void* VAR_0 ;
 int FUNC_0 (char const*) ;
 void* VAR_1 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (void*,char const*) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (void*,int,scalar_t__) ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (void*,scalar_t__) ;
 int FUNC_9 (void*,char const*) ;
 int FUNC_10 (void*,char const*) ;
 int FUNC_11 (struct stab_handle*,char const*,scalar_t__) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (void*,struct stab_handle*,int,int,scalar_t__,char const*) ;
 char const* FUNC_15 (struct stab_handle*) ;
 int FUNC_16 (struct stab_handle*,char const*,scalar_t__) ;
 int FUNC_17 (void*,struct stab_handle*) ;
 int VAR_2 ;
 char* FUNC_18 (char const*,char) ;
 int FUNC_19 (char const*,char*) ;
 scalar_t__ FUNC_20 (int) ;
 void* FUNC_21 (char const*) ;

bfd_boolean
FUNC_22 (void *VAR_3, void *VAR_4, int VAR_5, int VAR_6, bfd_vma VAR_7,
     const char *VAR_8)
{
  struct stab_handle *VAR_9 = (struct stab_handle *) VAR_4;





  if (VAR_9->so_string != ((void*)0)
      && (VAR_5 != 130 || *VAR_8 == '\0' || VAR_7 != VAR_9->so_value))
    {
      if (! FUNC_7 (VAR_3, VAR_9->so_string))
 return VAR_0;
      VAR_9->main_filename = VAR_9->so_string;

      VAR_9->gcc_compiled = 0;
      VAR_9->n_opt_found = VAR_0;



      if (! VAR_9->sections)
 VAR_9->file_start_offset = VAR_9->so_value;




      VAR_9->files = 1;
      VAR_9->file_types = ((struct stab_types **)
     FUNC_20 (sizeof *VAR_9->file_types));
      VAR_9->file_types[0] = ((void*)0);

      VAR_9->so_string = ((void*)0);


    }

  switch (VAR_5)
    {
    case 139:
    case 138:
      break;

    case 136:

      if (VAR_9->n_opt_found && VAR_6 == 1)
 break;

      if (! VAR_9->within_function)
 {
   FUNC_12 (VAR_2, "%s", FUNC_1("N_LBRAC not within function\n"));
   return VAR_0;
 }


      if (! FUNC_8 (VAR_3,
          (VAR_7
    + VAR_9->file_start_offset
    + VAR_9->function_start_offset)))
 return VAR_0;


      if (! FUNC_17 (VAR_3, VAR_9))
 return VAR_0;

      ++VAR_9->block_depth;
      break;

    case 132:

      if (VAR_9->n_opt_found && VAR_6 == 1)
 break;




      if (! FUNC_17 (VAR_3, VAR_9))
 return VAR_0;


      if (! FUNC_3 (VAR_3,
        (VAR_7
         + VAR_9->file_start_offset
         + VAR_9->function_start_offset)))
 return VAR_0;

      --VAR_9->block_depth;
      if (VAR_9->block_depth < 0)
 {
   FUNC_12 (VAR_2, "%s", FUNC_1("Too many N_RBRACs\n"));
   return VAR_0;
 }
      break;

    case 130:

      if (VAR_9->within_function)
 {
   bfd_vma VAR_10;

   VAR_10 = VAR_7;
   if (*VAR_8 != '\0'
       && VAR_9->function_end != (bfd_vma) -1
       && VAR_9->function_end < VAR_10)
     VAR_10 = VAR_9->function_end;
   if (! FUNC_17 (VAR_3, VAR_9)
       || ! FUNC_5 (VAR_3, VAR_10))
     return VAR_0;
   VAR_9->within_function = VAR_0;
   VAR_9->function_end = (bfd_vma) -1;
 }



      if (*VAR_8 == '\0')
 return VAR_1;





      if (VAR_9->so_string == ((void*)0))
 VAR_9->so_string = FUNC_21 (VAR_8);
      else
 {
   char *VAR_11;

   VAR_11 = VAR_9->so_string;

   if (FUNC_0 (VAR_8))
     VAR_9->so_string = FUNC_21 (VAR_8);
   else
     VAR_9->so_string = FUNC_2 (VAR_9->so_string, VAR_8,
          (const char *) ((void*)0));
   FUNC_13 (VAR_11);
 }

      VAR_9->so_value = VAR_7;

      break;

    case 129:

      if (! FUNC_10 (VAR_3, VAR_8))
 return VAR_0;
      break;

    case 144:

      FUNC_16 (VAR_9, VAR_8, VAR_7);
      if (! FUNC_10 (VAR_3, VAR_8))
 return VAR_0;
      break;

    case 142:

      if (! FUNC_10 (VAR_3, FUNC_15 (VAR_9)))
 return VAR_0;
      break;

    case 140:


      if (! FUNC_11 (VAR_9, VAR_8, VAR_7))
 return VAR_0;
      break;

    case 131:
      if (! FUNC_6 (VAR_3, VAR_6,
          VAR_7 + (VAR_9->within_function
     ? VAR_9->function_start_offset : 0)))
 return VAR_0;
      break;

    case 145:
      if (! FUNC_9 (VAR_3, VAR_8))
 return VAR_0;
      break;

    case 143:
      if (! FUNC_4 (VAR_3, VAR_8))
 return VAR_0;
      break;

    case 137:
      if (*VAR_8 == '\0')
 {
   if (VAR_9->within_function)
     {


       if (VAR_9->sections)
  VAR_7 += VAR_9->function_start_offset;
       if (! FUNC_17 (VAR_3, VAR_9)
    || ! FUNC_5 (VAR_3, VAR_7))
  return VAR_0;
       VAR_9->within_function = VAR_0;
       VAR_9->function_end = (bfd_vma) -1;
     }
   break;
 }






      if (VAR_9->within_function
   && (VAR_9->function_end == (bfd_vma) -1
       || VAR_7 < VAR_9->function_end))
 VAR_9->function_end = VAR_7;







    default:
      {
 const char *VAR_12;

 VAR_12 = FUNC_18 (VAR_8, ':');
 if (VAR_12 != ((void*)0)
     && (VAR_12[1] == 'f' || VAR_12[1] == 'F'))
   {
     if (VAR_9->within_function)
       {
  bfd_vma VAR_13;

  VAR_13 = VAR_7;
  if (VAR_9->function_end != (bfd_vma) -1
      && VAR_9->function_end < VAR_13)
    VAR_13 = VAR_9->function_end;
  if (! FUNC_17 (VAR_3, VAR_9)
      || ! FUNC_5 (VAR_3, VAR_13))
    return VAR_0;
  VAR_9->function_end = (bfd_vma) -1;
       }


     if (VAR_9->sections)
       VAR_9->function_start_offset = VAR_7;
     VAR_9->within_function = VAR_1;
   }

 if (! FUNC_14 (VAR_3, VAR_9, VAR_5, VAR_6, VAR_7, VAR_8))
   return VAR_0;
      }
      break;

    case 133:
      if (VAR_8 != ((void*)0) && FUNC_19 (VAR_8, "gcc2_compiled.") == 0)
 VAR_9->gcc_compiled = 2;
      else if (VAR_8 != ((void*)0) && FUNC_19 (VAR_8, "gcc_compiled.") == 0)
 VAR_9->gcc_compiled = 1;
      else
 VAR_9->n_opt_found = VAR_1;
      break;

    case 134:
    case 141:
    case 135:
    case 128:
      break;
    }

  return VAR_1;
}
