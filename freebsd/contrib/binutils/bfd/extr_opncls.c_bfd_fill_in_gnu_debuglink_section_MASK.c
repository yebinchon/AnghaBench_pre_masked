
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_section {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct bfd_section*,char*,int ,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (unsigned char*,int,int,int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*) ;
 int * FUNC_9 (char const*,int ) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char const*) ;

bfd_boolean
FUNC_12 (bfd *VAR_6,
       struct bfd_section *VAR_7,
       const char *VAR_8)
{
  bfd_size_type VAR_9;
  unsigned long VAR_10;
  char * VAR_11;
  bfd_size_type VAR_12;
  FILE * VAR_13;
  static unsigned char VAR_14[8 * 1024];
  size_t VAR_15;

  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
    {
      FUNC_2 (VAR_3);
      return VAR_0;
    }







  VAR_13 = FUNC_9 (VAR_8, VAR_1);
  if (VAR_13 == ((void*)0))
    {
      FUNC_2 (VAR_5);
      return VAR_0;
    }

  VAR_10 = 0;
  while ((VAR_15 = FUNC_6 (VAR_14, 1, sizeof VAR_14, VAR_13)) > 0)
    VAR_10 = FUNC_0 (VAR_10, VAR_14, VAR_15);
  FUNC_5 (VAR_13);



  VAR_8 = FUNC_8 (VAR_8);

  VAR_9 = FUNC_11 (VAR_8) + 1;
  VAR_9 += 3;
  VAR_9 &= ~3;
  VAR_9 += 4;

  VAR_11 = FUNC_4 (VAR_9);
  if (VAR_11 == ((void*)0))
    {

      FUNC_2 (VAR_4);
      return VAR_0;
    }

  FUNC_10 (VAR_11, VAR_8);
  VAR_12 = VAR_9 - 4;

  FUNC_1 (VAR_6, VAR_10, VAR_11 + VAR_12);

  if (! FUNC_3 (VAR_6, VAR_7, VAR_11, 0, VAR_9))
    {

      FUNC_7 (VAR_11);
      return VAR_0;
    }

  return VAR_2;
}
