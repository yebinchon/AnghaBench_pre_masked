
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {int size; int vma; int filepos; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_3 (int*,int,int *) ;
 int* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *,scalar_t__*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_4, asection *VAR_5, bfd_byte *VAR_6)
{
  int VAR_7;
  bfd_size_type VAR_8 = 0;
  bfd_boolean VAR_9 = VAR_1;
  bfd_byte *VAR_10 = ((void*)0);
  size_t VAR_11 = 0;

  if (FUNC_5 (VAR_4, VAR_5->filepos, VAR_2) != 0)
    goto error_return;

  while ((VAR_7 = FUNC_7 (VAR_4, &VAR_9)) != VAR_0)
    {
      bfd_byte VAR_12[3];
      unsigned int VAR_13;
      bfd_vma VAR_14;
      bfd_byte *VAR_15;

      if (VAR_7 == '\r' || VAR_7 == '\n')
 continue;



      FUNC_0 (VAR_7 == 'S');

      if (FUNC_3 (VAR_12, (bfd_size_type) 3, VAR_4) != 3)
 goto error_return;

      FUNC_0 (FUNC_2 (VAR_12[1]) && FUNC_2 (VAR_12[2]));

      VAR_13 = FUNC_1 (VAR_12 + 1);

      if (VAR_13 * 2 > VAR_11)
 {
   if (VAR_10 != ((void*)0))
     FUNC_6 (VAR_10);
   VAR_10 = FUNC_4 ((bfd_size_type) VAR_13 * 2);
   if (VAR_10 == ((void*)0))
     goto error_return;
   VAR_11 = VAR_13 * 2;
 }

      if (FUNC_3 (VAR_10, (bfd_size_type) VAR_13 * 2, VAR_4) != VAR_13 * 2)
 goto error_return;

      VAR_14 = 0;
      VAR_15 = VAR_10;
      switch (VAR_12[0])
 {
 default:
   FUNC_0 (VAR_8 == VAR_5->size);
   if (VAR_10 != ((void*)0))
     FUNC_6 (VAR_10);
   return VAR_3;

 case '3':
   VAR_14 = FUNC_1 (VAR_15);
   VAR_15 += 2;
   --VAR_13;

 case '2':
   VAR_14 = (VAR_14 << 8) | FUNC_1 (VAR_15);
   VAR_15 += 2;
   --VAR_13;

 case '1':
   VAR_14 = (VAR_14 << 8) | FUNC_1 (VAR_15);
   VAR_15 += 2;
   VAR_14 = (VAR_14 << 8) | FUNC_1 (VAR_15);
   VAR_15 += 2;
   VAR_13 -= 2;

   if (VAR_14 != VAR_5->vma + VAR_8)
     {

       FUNC_0 (VAR_8 == VAR_5->size);
       if (VAR_10 != ((void*)0))
  FUNC_6 (VAR_10);
       return VAR_3;
     }


   --VAR_13;

   while (VAR_13-- != 0)
     {
       VAR_6[VAR_8] = FUNC_1 (VAR_15);
       VAR_15 += 2;
       ++VAR_8;
     }

   break;
 }
    }

  if (VAR_9)
    goto error_return;

  FUNC_0 (VAR_8 == VAR_5->size);

  if (VAR_10 != ((void*)0))
    FUNC_6 (VAR_10);

  return VAR_3;

 error_return:
  if (VAR_10 != ((void*)0))
    FUNC_6 (VAR_10);
  return VAR_1;
}
