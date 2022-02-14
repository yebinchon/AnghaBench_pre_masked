
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct data_struct {int* chunk_init; char* chunk_data; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_3__ {scalar_t__ vma; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct data_struct* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_1,
         asection *VAR_2,
         const void * VAR_3,
         file_ptr VAR_4,
         bfd_size_type VAR_5,
         bfd_boolean VAR_6)
{
  bfd_vma VAR_7;
  char *VAR_8 = (char *) VAR_3;
  bfd_vma VAR_9 = 1;
  struct data_struct *VAR_10 = ((void*)0);

  FUNC_0 (VAR_4 == 0);
  for (VAR_7 = VAR_2->vma; VAR_5 != 0; VAR_5--, VAR_7++)
    {

      bfd_vma VAR_11 = VAR_7 & ~(bfd_vma) VAR_0;
      bfd_vma VAR_12 = VAR_7 & VAR_0;

      if (VAR_11 != VAR_9)

 VAR_10 = FUNC_1 (VAR_1, VAR_11);

      if (VAR_6)
 {
   if (VAR_10->chunk_init[VAR_12])
     *VAR_8 = VAR_10->chunk_data[VAR_12];
   else
     *VAR_8 = 0;
 }
      else
 {
   VAR_10->chunk_data[VAR_12] = *VAR_8;
   VAR_10->chunk_init[VAR_12] = (*VAR_8 != 0);
 }

      VAR_8++;
    }
}
