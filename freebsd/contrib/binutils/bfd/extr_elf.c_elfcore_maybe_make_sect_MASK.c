
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int alignment_power; int filepos; int size; int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, char *VAR_3, asection *VAR_4)
{
  asection *VAR_5;

  if (FUNC_0 (VAR_2, VAR_3) != ((void*)0))
    return VAR_1;

  VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4->flags);
  if (VAR_5 == ((void*)0))
    return VAR_0;

  VAR_5->size = VAR_4->size;
  VAR_5->filepos = VAR_4->filepos;
  VAR_5->alignment_power = VAR_4->alignment_power;
  return VAR_1;
}
