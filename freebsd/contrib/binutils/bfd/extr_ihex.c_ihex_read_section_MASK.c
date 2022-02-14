
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int size; int filepos; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,int,int *) ;
 int VAR_4 ;
 char* FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (bfd *VAR_5, asection *VAR_6, bfd_byte *VAR_7)
{
  int VAR_8;
  bfd_byte *VAR_9;
  bfd_byte *VAR_10 = ((void*)0);
  size_t VAR_11;
  bfd_boolean VAR_12;

  if (FUNC_6 (VAR_5, VAR_6->filepos, VAR_2) != 0)
    goto error_return;

  VAR_9 = VAR_7;
  VAR_11 = 0;
  VAR_12 = VAR_1;
  while ((VAR_8 = FUNC_9 (VAR_5, &VAR_12)) != VAR_0)
    {
      char VAR_13[8];
      unsigned int VAR_14;
      unsigned int VAR_15;
      unsigned int VAR_16;

      if (VAR_8 == '\r' || VAR_8 == '\n')
 continue;



      FUNC_0 (VAR_8 == ':');

      if (FUNC_4 (VAR_13, (bfd_size_type) 8, VAR_5) != 8)
 goto error_return;

      VAR_14 = FUNC_1 (VAR_13);
      VAR_15 = FUNC_1 (VAR_13 + 6);


      if (VAR_15 != 0)
 {
   FUNC_3)
     (FUNC_2("%B: internal error in ihex_read_section"), VAR_5);
   FUNC_7 (VAR_4);
   goto error_return;
 }

      if (VAR_14 * 2 > VAR_11)
 {
   VAR_10 = FUNC_5 (VAR_10, (bfd_size_type) VAR_14 * 2);
   if (VAR_10 == ((void*)0))
     goto error_return;
   VAR_11 = VAR_14 * 2;
 }

      if (FUNC_4 (VAR_10, (bfd_size_type) VAR_14 * 2, VAR_5) != VAR_14 * 2)
 goto error_return;

      for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
 *VAR_9++ = FUNC_1 (VAR_10 + 2 * VAR_16);
      if ((bfd_size_type) (VAR_9 - VAR_7) >= VAR_6->size)
 {

   if (VAR_10 != ((void*)0))
     FUNC_8 (VAR_10);
   return VAR_3;
 }


      if (FUNC_4 (VAR_10, (bfd_size_type) 2, VAR_5) != 2)
 goto error_return;
    }

  if ((bfd_size_type) (VAR_9 - VAR_7) < VAR_6->size)
    {
      FUNC_3)
 (FUNC_2("%B: bad section length in ihex_read_section"), VAR_5);
      FUNC_7 (VAR_4);
      goto error_return;
    }

  if (VAR_10 != ((void*)0))
    FUNC_8 (VAR_10);

  return VAR_3;

 error_return:
  if (VAR_10 != ((void*)0))
    FUNC_8 (VAR_10);
  return VAR_1;
}
