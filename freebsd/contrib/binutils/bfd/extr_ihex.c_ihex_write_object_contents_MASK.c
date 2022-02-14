
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ihex_data_list {scalar_t__ where; int* data; scalar_t__ size; struct ihex_data_list* next; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_8__ {TYPE_1__* ihex_data; } ;
struct TYPE_9__ {scalar_t__ start_address; TYPE_2__ tdata; } ;
typedef TYPE_3__ bfd ;
struct TYPE_7__ {struct ihex_data_list* head; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int,unsigned int,int,int*) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_4)
{
  bfd_vma VAR_5;
  bfd_vma VAR_6;
  struct ihex_data_list *VAR_7;

  VAR_5 = 0;
  VAR_6 = 0;
  for (VAR_7 = VAR_4->tdata.ihex_data->head; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      bfd_vma VAR_8;
      bfd_byte *VAR_9;
      bfd_size_type VAR_10;

      VAR_8 = VAR_7->where;
      VAR_9 = VAR_7->data;
      VAR_10 = VAR_7->size;

      while (VAR_10 > 0)
 {
   size_t VAR_11;
   unsigned int VAR_12;

   VAR_11 = VAR_10;
   if (VAR_10 > VAR_0)
     VAR_11 = VAR_0;

   if (VAR_8 > VAR_5 + VAR_6 + 0xffff)
     {
       bfd_byte VAR_13[2];


       if (VAR_8 <= 0xfffff)
  {

    FUNC_0 (VAR_6 == 0);

    VAR_5 = VAR_8 & 0xf0000;
    VAR_13[0] = (bfd_byte)(VAR_5 >> 12) & 0xff;
    VAR_13[1] = (bfd_byte)(VAR_5 >> 4) & 0xff;
    if (! FUNC_5 (VAR_4, 2, 0, 2, VAR_13))
      return VAR_1;
  }
       else
  {






    if (VAR_5 != 0)
      {
        VAR_13[0] = 0;
        VAR_13[1] = 0;
        if (! FUNC_5 (VAR_4, 2, 0, 2, VAR_13))
   return VAR_1;
        VAR_5 = 0;
      }

    VAR_6 = VAR_8 & 0xffff0000;
    if (VAR_8 > VAR_6 + 0xffff)
      {
        char VAR_14[20];

        FUNC_6 (VAR_14, VAR_8);
        FUNC_2)
   (FUNC_1("%s: address 0x%s out of range for Intel Hex file"),
    FUNC_3 (VAR_4), VAR_14);
        FUNC_4 (VAR_3);
        return VAR_1;
      }
    VAR_13[0] = (bfd_byte)(VAR_6 >> 24) & 0xff;
    VAR_13[1] = (bfd_byte)(VAR_6 >> 16) & 0xff;
    if (! FUNC_5 (VAR_4, 2, 0, 4, VAR_13))
      return VAR_1;
  }
     }

   VAR_12 = VAR_8 - (VAR_6 + VAR_5);


          if (VAR_12 + VAR_11 > 0xffff)
            VAR_11 = 0x10000 - VAR_12;

   if (! FUNC_5 (VAR_4, VAR_11, VAR_12, 0, VAR_9))
     return VAR_1;

   VAR_8 += VAR_11;
   VAR_9 += VAR_11;
   VAR_10 -= VAR_11;
 }
    }

  if (VAR_4->start_address != 0)
    {
      bfd_vma VAR_15;
      bfd_byte VAR_16[4];

      VAR_15 = VAR_4->start_address;

      if (VAR_15 <= 0xfffff)
 {
   VAR_16[0] = (bfd_byte)((VAR_15 & 0xf0000) >> 12) & 0xff;
   VAR_16[1] = 0;
   VAR_16[2] = (bfd_byte)(VAR_15 >> 8) & 0xff;
   VAR_16[3] = (bfd_byte)VAR_15 & 0xff;
   if (! FUNC_5 (VAR_4, 4, 0, 3, VAR_16))
     return VAR_1;
 }
      else
 {
   VAR_16[0] = (bfd_byte)(VAR_15 >> 24) & 0xff;
   VAR_16[1] = (bfd_byte)(VAR_15 >> 16) & 0xff;
   VAR_16[2] = (bfd_byte)(VAR_15 >> 8) & 0xff;
   VAR_16[3] = (bfd_byte)VAR_15 & 0xff;
   if (! FUNC_5 (VAR_4, 4, 0, 5, VAR_16))
     return VAR_1;
 }
    }

  if (! FUNC_5 (VAR_4, 0, 0, 1, ((void*)0)))
    return VAR_1;

  return VAR_2;
}
