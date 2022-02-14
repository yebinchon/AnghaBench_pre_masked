
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef unsigned int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int const,unsigned int) ;
 int FUNC_1 (void*,int,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_1,
     unsigned int VAR_2,
     bfd_vma VAR_3,
     const bfd_byte *VAR_4,
     const bfd_byte *VAR_5)
{
  char VAR_6[2 * VAR_0 + 6];
  unsigned int VAR_7 = 0;
  const bfd_byte *VAR_8 = VAR_4;
  char *VAR_9 = VAR_6;
  char *VAR_10;
  bfd_size_type VAR_11;

  *VAR_9++ = 'S';
  *VAR_9++ = '0' + VAR_2;

  VAR_10 = VAR_9;
  VAR_9 += 2;

  switch (VAR_2)
    {
    case 3:
    case 7:
      FUNC_0 (VAR_9, (VAR_3 >> 24), VAR_7);
      VAR_9 += 2;
    case 8:
    case 2:
      FUNC_0 (VAR_9, (VAR_3 >> 16), VAR_7);
      VAR_9 += 2;
    case 9:
    case 1:
    case 0:
      FUNC_0 (VAR_9, (VAR_3 >> 8), VAR_7);
      VAR_9 += 2;
      FUNC_0 (VAR_9, (VAR_3), VAR_7);
      VAR_9 += 2;
      break;

    }
  for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++)
    {
      FUNC_0 (VAR_9, *VAR_8, VAR_7);
      VAR_9 += 2;
    }


  FUNC_0 (VAR_10, (VAR_9 - VAR_10) / 2, VAR_7);
  VAR_7 &= 0xff;
  VAR_7 = 255 - VAR_7;
  FUNC_0 (VAR_9, VAR_7, VAR_7);
  VAR_9 += 2;

  *VAR_9++ = '\r';
  *VAR_9++ = '\n';
  VAR_11 = VAR_9 - VAR_6;

  return FUNC_1 ((void *) VAR_6, VAR_11, VAR_1) == VAR_11;
}
