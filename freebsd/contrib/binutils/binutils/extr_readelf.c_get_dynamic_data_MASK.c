
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,unsigned int) ;
 void* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned char*,unsigned int,unsigned int,int *) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static bfd_vma *
FUNC_6 (FILE *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
  unsigned char *VAR_3;
  bfd_vma *VAR_4;

  VAR_3 = FUNC_2 (VAR_1, VAR_2);

  if (VAR_3 == ((void*)0))
    {
      FUNC_3 (FUNC_0("Out of memory\n"));
      return ((void*)0);
    }

  if (FUNC_4 (VAR_3, VAR_2, VAR_1, VAR_0) != VAR_1)
    {
      FUNC_3 (FUNC_0("Unable to read in dynamic data\n"));
      return ((void*)0);
    }

  VAR_4 = FUNC_2 (VAR_1, sizeof (*VAR_4));

  if (VAR_4 == ((void*)0))
    {
      FUNC_3 (FUNC_0("Out of memory\n"));
      FUNC_5 (VAR_3);
      return ((void*)0);
    }

  while (VAR_1--)
    VAR_4[VAR_1] = FUNC_1 (VAR_3 + VAR_1 * VAR_2, VAR_2);

  FUNC_5 (VAR_3);

  return VAR_4;
}
