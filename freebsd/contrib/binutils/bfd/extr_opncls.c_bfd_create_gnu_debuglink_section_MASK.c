
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flagword ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

asection *
FUNC_6 (bfd *VAR_5, const char *VAR_6)
{
  asection *VAR_7;
  bfd_size_type VAR_8;
  flagword VAR_9;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    {
      FUNC_2 (VAR_4);
      return ((void*)0);
    }


  VAR_6 = FUNC_4 (VAR_6);

  VAR_7 = FUNC_0 (VAR_5, VAR_0);
  if (VAR_7)
    {

      FUNC_2 (VAR_4);
      return ((void*)0);
    }

  VAR_9 = VAR_2 | VAR_3 | VAR_1;
  VAR_7 = FUNC_1 (VAR_5, VAR_0, VAR_9);
  if (VAR_7 == ((void*)0))
    return ((void*)0);

  VAR_8 = FUNC_5 (VAR_6) + 1;
  VAR_8 += 3;
  VAR_8 &= ~3;
  VAR_8 += 4;

  if (! FUNC_3 (VAR_5, VAR_7, VAR_8))

    return ((void*)0);

  return VAR_7;
}
