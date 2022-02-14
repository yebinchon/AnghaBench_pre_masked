
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_error_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,char***) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int VAR_5 ;
 int * FUNC_7 (char const*,char const*) ;
 int * FUNC_8 (char const*,char const*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,int *,char const*,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char**) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_15 (const char *VAR_7, const char *VAR_8,
    const char *VAR_9, const char *VAR_10)
{
  bfd *VAR_11;
  char **VAR_12;
  char **VAR_13;

  if (FUNC_13 (VAR_7) < 1)
    {
      VAR_6 = 1;
      return;
    }



  VAR_11 = FUNC_7 (VAR_7, VAR_9);
  if (VAR_11 == ((void*)0))
    FUNC_0 (VAR_7);

  if (FUNC_1 (VAR_11, VAR_2))
    {
      bfd_boolean VAR_14;
      bfd *VAR_15;



      if (VAR_10 == ((void*)0))
 {
   VAR_10 = FUNC_5 (VAR_11);
   VAR_14 = VAR_0;
 }
      else
 VAR_14 = VAR_1;

      VAR_15 = FUNC_8 (VAR_8, VAR_10);
      if (VAR_15 == ((void*)0))
 FUNC_0 (VAR_8);

      FUNC_10 (VAR_11, VAR_15, VAR_10, VAR_14);
    }
  else if (FUNC_2 (VAR_11, VAR_5, &VAR_12))
    {
      bfd *VAR_16;
    do_copy:



      if (VAR_10 == ((void*)0))
 VAR_10 = FUNC_5 (VAR_11);

      VAR_16 = FUNC_8 (VAR_8, VAR_10);
      if (VAR_16 == ((void*)0))
 FUNC_0 (VAR_8);

      if (! FUNC_11 (VAR_11, VAR_16))
 VAR_6 = 1;

      if (!FUNC_3 (VAR_16))
 FUNC_0 (VAR_8);

      if (!FUNC_3 (VAR_11))
 FUNC_0 (VAR_7);

    }
  else
    {
      bfd_error_type VAR_17 = FUNC_4 ();
      bfd_error_type VAR_18;

      if (FUNC_2 (VAR_11, VAR_3, &VAR_13))
 {

   if (VAR_17 == VAR_4)
     FUNC_12 (VAR_12);
   goto do_copy;
 }

      VAR_18 = FUNC_4 ();

      if (VAR_17 != VAR_18)
 FUNC_9 (VAR_17);

      FUNC_6 (VAR_7);

      if (VAR_17 == VAR_4)
 {
   FUNC_14 (VAR_12);
   FUNC_12 (VAR_12);
 }
      if (VAR_18 == VAR_4)
 {
   FUNC_14 (VAR_13);
   FUNC_12 (VAR_13);
 }

      VAR_6 = 1;
    }
}
