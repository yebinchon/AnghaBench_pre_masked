
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {unsigned int size; int * owner; } ;
typedef TYPE_2__ asection ;
struct TYPE_16__ {TYPE_1__* howto; } ;
typedef TYPE_3__ arelent ;
struct TYPE_14__ {int type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,TYPE_2__*,TYPE_3__*,unsigned int,struct bfd_link_info*) ;
 unsigned int FUNC_2 (int *,TYPE_2__*,TYPE_3__*,unsigned int) ;
 long FUNC_3 (int *,TYPE_2__*,TYPE_3__**,int ) ;
 long FUNC_4 (int *,TYPE_2__*) ;
 TYPE_3__** FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__**) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_2,
    asection *VAR_3,
    struct bfd_link_info *VAR_4,
    bfd_boolean *VAR_5)
{

  bfd *VAR_6 = VAR_3->owner;
  asection *VAR_7 = VAR_3;
  unsigned int VAR_8 = 0 ;
  arelent **VAR_9 = ((void*)0);
  long VAR_10 = FUNC_4 (VAR_6, VAR_7);

  if (VAR_10 < 0)
    return VAR_0;



  *VAR_5 = VAR_0;

  if (VAR_10)
    {
      long VAR_11;

      VAR_9 = FUNC_5 ((bfd_size_type) VAR_10);
      if (VAR_9 == ((void*)0) && VAR_10 != 0)
 goto error_return;


      VAR_11 =
 FUNC_3 (VAR_6, VAR_7, VAR_9,
    FUNC_0 (VAR_6));
      if (VAR_11 < 0)
 goto error_return;
      if (VAR_11 > 0)
 {
   arelent **VAR_12;

   for (VAR_12 = VAR_9; *VAR_12; VAR_12++)
     {
       arelent *VAR_13 = *VAR_12;

       switch (VAR_13->howto->type)
  {
  case 128:

    VAR_8 = FUNC_2 (VAR_2, VAR_7, VAR_13, VAR_8);
    break;
  case 130:

    VAR_8 = FUNC_1 (VAR_6, VAR_7, VAR_13, VAR_8,
          VAR_4);
    break;
  case 129:
    VAR_8 += 4;
    break;
  }
     }
 }
    }
  VAR_7->size -= VAR_8;

  if (VAR_9 != ((void*)0))
    FUNC_6 (VAR_9);
  return VAR_1;
 error_return:
  if (VAR_9 != ((void*)0))
    FUNC_6 (VAR_9);
  return VAR_0;
}
