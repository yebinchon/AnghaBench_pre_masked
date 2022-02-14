
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct external_exec {int dummy; } ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_12__ {int output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_13__ {scalar_t__ filepos; } ;
typedef TYPE_2__ asection ;
struct TYPE_15__ {scalar_t__ filepos; } ;
struct TYPE_14__ {int filepos; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 TYPE_5__* FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_3,
       asection *VAR_4,
       const void * VAR_5,
       file_ptr VAR_6,
       bfd_size_type VAR_7)
{
  if (! VAR_3->output_has_begun)
    {

      if (! FUNC_0 (VAR_3))
 return VAR_0;

      FUNC_4 (VAR_3)->filepos = sizeof (struct external_exec);
      FUNC_3 (VAR_3)->filepos = FUNC_4 (VAR_3)->filepos
 + FUNC_4 (VAR_3)->size;
    }


  if (FUNC_2 (VAR_3, VAR_4->filepos + VAR_6, VAR_1) != 0)
    return VAR_0;

  if (VAR_7 == 0)
    return VAR_2;

  return FUNC_1 ((void *) VAR_5, VAR_7, VAR_3) == VAR_7;
}
