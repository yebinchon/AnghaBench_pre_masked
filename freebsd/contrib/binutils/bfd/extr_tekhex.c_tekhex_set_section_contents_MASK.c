
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int file_ptr ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_3__* sections; int output_has_begun; } ;
typedef TYPE_2__ bfd ;
struct TYPE_11__ {int flags; int vma; int size; struct TYPE_11__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_9__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,void const*,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_5,
        sec_ptr VAR_6,
        const void * VAR_7,
        file_ptr VAR_8,
        bfd_size_type VAR_9)
{
  if (! VAR_5->output_has_begun)
    {

      asection *VAR_10 = VAR_5->sections;
      bfd_vma VAR_11;

      for (VAR_10 = VAR_5->sections; VAR_10; VAR_10 = VAR_10->next)
 {
   if (VAR_10->flags & VAR_3)
     {
       for (VAR_11 = VAR_10->vma & ~(bfd_vma) VAR_0;
     VAR_11 < VAR_10->vma + VAR_10->size;
     VAR_11 += VAR_0)
  FUNC_0 (VAR_5, VAR_11);
     }
 }
    }

  if (VAR_6->flags & (VAR_3 | VAR_2))
    {
      FUNC_1 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_1);
      return VAR_4;
    }

  return VAR_1;
}
