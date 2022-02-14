
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_ptr ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (char*,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_4, bfd_boolean (*VAR_5) (bfd *, int, char *))
{
  unsigned int VAR_6;
  bfd_boolean VAR_7 = VAR_0;


  if (FUNC_3 (VAR_4, (file_ptr) 0, VAR_2) != 0)
    return VAR_0;
  while (! VAR_7)
    {
      char VAR_8[VAR_1];
      char VAR_9;


      VAR_7 = (bfd_boolean) (FUNC_2 (VAR_8, (bfd_size_type) 1, VAR_4) != 1);
      while (*VAR_8 != '%' && !VAR_7)
 VAR_7 = (bfd_boolean) (FUNC_2 (VAR_8, (bfd_size_type) 1, VAR_4) != 1);

      if (VAR_7)
 break;


      if (FUNC_2 (VAR_8, (bfd_size_type) 5, VAR_4) != 5)
 return VAR_0;

      VAR_9 = VAR_8[2];

      if (!FUNC_1 (VAR_8[0]) || !FUNC_1 (VAR_8[1]))
 break;


      VAR_6 = FUNC_0 (VAR_8) - 5;

      if (VAR_6 >= VAR_1)
 return VAR_0;

      if (FUNC_2 (VAR_8, (bfd_size_type) VAR_6, VAR_4) != VAR_6)
 return VAR_0;


      VAR_8[VAR_6] = 0;

      if (!VAR_5 (VAR_4, VAR_9, VAR_8))
 return VAR_0;
    }

  return VAR_3;
}
