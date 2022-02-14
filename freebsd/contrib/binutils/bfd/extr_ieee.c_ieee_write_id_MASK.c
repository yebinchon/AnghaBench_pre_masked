
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,size_t) ;
 size_t FUNC_2 (void*,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (int ,int ,size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_5, const char *VAR_6)
{
  size_t VAR_7 = FUNC_7 (VAR_6);

  if (VAR_7 <= 127)
    {
      if (! FUNC_6 (VAR_5, (bfd_byte) VAR_7))
 return VAR_0;
    }
  else if (VAR_7 < 255)
    {
      if (! FUNC_6 (VAR_5, VAR_3)
   || ! FUNC_6 (VAR_5, (bfd_byte) VAR_7))
 return VAR_0;
    }
  else if (VAR_7 < 65535)
    {
      if (! FUNC_6 (VAR_5, VAR_4)
   || ! FUNC_5 (VAR_5, (int) VAR_7))
 return VAR_0;
    }
  else
    {
      FUNC_1)
 (FUNC_0("%s: string too long (%d chars, max 65535)"),
  FUNC_3 (VAR_5), VAR_7);
      FUNC_4 (VAR_2);
      return VAR_0;
    }

  if (FUNC_2 ((void *) VAR_6, (bfd_size_type) VAR_7, VAR_5) != VAR_7)
    return VAR_0;
  return VAR_1;
}
