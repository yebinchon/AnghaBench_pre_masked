
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rc_uint_type ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ rc_rcdata_item ;
typedef int bfd_byte ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static bfd_byte *
FUNC_2 (const rc_rcdata_item *VAR_0, rc_uint_type *VAR_1)
{
  const rc_rcdata_item *VAR_2;
  bfd_byte *VAR_3 = ((void*)0), *VAR_4;
  rc_uint_type VAR_5 = 0;

  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    VAR_5 += FUNC_0 (VAR_2, ((void*)0));
  if (VAR_5 != 0)
    {
      VAR_3 = VAR_4 = (bfd_byte *) FUNC_1 (VAR_5);
      for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 VAR_4 += FUNC_0 (VAR_2, VAR_4);
    }
  if (VAR_1)
    *VAR_1 = VAR_5;
  return VAR_3;
}
