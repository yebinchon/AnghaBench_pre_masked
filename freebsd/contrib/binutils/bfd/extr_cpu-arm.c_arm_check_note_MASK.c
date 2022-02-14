
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *,int *) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_4,
  bfd_byte *VAR_5,
  bfd_size_type VAR_6,
  const char *VAR_7,
  char **VAR_8)
{
  unsigned long VAR_9;
  unsigned long VAR_10;
  unsigned long VAR_11;
  char * VAR_12;

  if (VAR_6 < FUNC_1 (VAR_2, VAR_3))
    return VAR_0;



  VAR_9 = FUNC_0 (VAR_4, VAR_5);
  VAR_10 = FUNC_0 (VAR_4, VAR_5 + FUNC_1 (VAR_2, VAR_10));
  VAR_11 = FUNC_0 (VAR_4, VAR_5 + FUNC_1 (VAR_2, VAR_11));
  VAR_12 = (char *) VAR_5 + FUNC_1 (VAR_2, VAR_3);


  if (VAR_9 + VAR_10 + FUNC_1 (VAR_2, VAR_3) > VAR_6)
    return VAR_0;

  if (VAR_7 == ((void*)0))
    {
      if (VAR_9 != 0)
 return VAR_0;
    }
  else
    {
      if (VAR_9 != ((FUNC_3 (VAR_7) + 1 + 3) & ~3))
 return VAR_0;

      if (FUNC_2 (VAR_12, VAR_7) != 0)
 return VAR_0;

      VAR_12 += (VAR_9 + 3) & ~3;
    }



  if (VAR_8 != ((void*)0))
    * VAR_8 = VAR_12;

  return VAR_1;
}
