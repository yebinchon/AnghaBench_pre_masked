
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int debug_type ;
typedef char const* bfd_signed_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,char const**,char const**) ;
 scalar_t__ FUNC_2 (char const**,int *) ;
 char* FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (char const**,unsigned int) ;

__attribute__((used)) static debug_type
FUNC_6 (void *VAR_1, const char **VAR_2)
{
  const char *VAR_3;
  const char **VAR_4;
  bfd_signed_vma *VAR_5;
  unsigned int VAR_6;
  unsigned int VAR_7;

  VAR_3 = *VAR_2;





  if (**VAR_2 == '-')
    {
      while (**VAR_2 != ':')
 ++*VAR_2;
      ++*VAR_2;
    }




  VAR_7 = 10;
  VAR_4 = (const char **) FUNC_4 (VAR_7 * sizeof *VAR_4);
  VAR_5 = (bfd_signed_vma *) FUNC_4 (VAR_7 * sizeof *VAR_5);
  VAR_6 = 0;
  while (**VAR_2 != '\0' && **VAR_2 != ';' && **VAR_2 != ',')
    {
      const char *VAR_8;
      char *VAR_9;
      bfd_signed_vma VAR_10;

      VAR_8 = *VAR_2;
      while (*VAR_8 != ':')
 ++VAR_8;

      VAR_9 = FUNC_3 (*VAR_2, VAR_8 - *VAR_2);

      *VAR_2 = VAR_8 + 1;
      VAR_10 = (bfd_signed_vma) FUNC_2 (VAR_2, (bfd_boolean *) ((void*)0));
      if (**VAR_2 != ',')
 {
   FUNC_0 (VAR_3);
   return VAR_0;
 }
      ++*VAR_2;

      if (VAR_6 + 1 >= VAR_7)
 {
   VAR_7 += 10;
   VAR_4 = ((const char **)
     FUNC_5 (VAR_4, VAR_7 * sizeof *VAR_4));
   VAR_5 = ((bfd_signed_vma *)
      FUNC_5 (VAR_5, VAR_7 * sizeof *VAR_5));
 }

      VAR_4[VAR_6] = VAR_9;
      VAR_5[VAR_6] = VAR_10;
      ++VAR_6;
    }

  VAR_4[VAR_6] = ((void*)0);
  VAR_5[VAR_6] = 0;

  if (**VAR_2 == ';')
    ++*VAR_2;

  return FUNC_1 (VAR_1, VAR_4, VAR_5);
}
