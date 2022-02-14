
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd ;
typedef int asection ;


 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int *,char*,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int ,int ) ;
 int FUNC_9 (char*,char const*) ;
 char* FUNC_10 (int ) ;

__attribute__((used)) static char *
FUNC_11 (bfd *VAR_2, const char *VAR_3, bfd_size_type *VAR_4)
{
  asection *VAR_5;
  bfd_size_type VAR_6;
  char *VAR_7;

  VAR_5 = FUNC_4 (VAR_2, VAR_3);
  if (VAR_5 == ((void*)0))
    {
      FUNC_9 (FUNC_0("No %s section present\n\n"), VAR_3);
      return VAR_0;
    }

  VAR_6 = FUNC_6 (VAR_2, VAR_5);
  VAR_7 = FUNC_10 (VAR_6);

  if (! FUNC_5 (VAR_2, VAR_5, VAR_7, 0, VAR_6))
    {
      FUNC_8 (FUNC_0("Reading %s section of %s failed: %s"),
   VAR_3, FUNC_3 (VAR_2),
   FUNC_1 (FUNC_2 ()));
      FUNC_7 (VAR_7);
      VAR_1 = 1;
      return ((void*)0);
    }

  *VAR_4 = VAR_6;

  return VAR_7;
}
