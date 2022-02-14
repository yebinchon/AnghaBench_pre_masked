
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {long type_index; } ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char const*,...) ;
 int FUNC_3 (struct stab_write_handle*,long,int) ;
 int FUNC_4 (struct stab_write_handle*,char*,int ,int ,int) ;
 int FUNC_5 (struct stab_write_handle*,int ,int ,int ,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (void *VAR_3, const char *VAR_4, const char **VAR_5,
  bfd_signed_vma *VAR_6)
{
  struct stab_write_handle *VAR_7 = (struct stab_write_handle *) VAR_3;
  size_t VAR_8;
  const char **VAR_9;
  char *VAR_10;
  long VAR_11 = 0;
  bfd_signed_vma *VAR_12;

  if (VAR_5 == ((void*)0))
    {
      FUNC_0 (VAR_4 != ((void*)0));

      VAR_10 = (char *) FUNC_9 (10 + FUNC_8 (VAR_4));
      FUNC_2 (VAR_10, "xe%s:", VAR_4);

      if (! FUNC_4 (VAR_7, VAR_10, 0, VAR_0, 4))
 return VAR_0;
      FUNC_1 (VAR_10);
      return VAR_2;
    }

  VAR_8 = 10;
  if (VAR_4 != ((void*)0))
    VAR_8 += FUNC_8 (VAR_4);
  for (VAR_9 = VAR_5; *VAR_9 != ((void*)0); VAR_9++)
    VAR_8 += FUNC_8 (*VAR_9) + 20;

  VAR_10 = (char *) FUNC_9 (VAR_8);

  if (VAR_4 == ((void*)0))
    FUNC_7 (VAR_10, "e");
  else
    {
      VAR_11 = VAR_7->type_index;
      ++VAR_7->type_index;
      FUNC_2 (VAR_10, "%s:T%ld=e", VAR_4, VAR_11);
    }

  for (VAR_9 = VAR_5, VAR_12 = VAR_6; *VAR_9 != ((void*)0); VAR_9++, VAR_12++)
    FUNC_2 (VAR_10 + FUNC_8 (VAR_10), "%s:%ld,", *VAR_9, (long) *VAR_12);
  FUNC_6 (VAR_10, ";");

  if (VAR_4 == ((void*)0))
    {

      if (! FUNC_4 (VAR_7, VAR_10, 0, VAR_0, 4))
 return VAR_0;
    }
  else
    {

      if (! FUNC_5 (VAR_7, VAR_1, 0, 0, VAR_10)
   || ! FUNC_3 (VAR_7, VAR_11, 4))
 return VAR_0;
    }

  FUNC_1 (VAR_10);

  return VAR_2;
}
