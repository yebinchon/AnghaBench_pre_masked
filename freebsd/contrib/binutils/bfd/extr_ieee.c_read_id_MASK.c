
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abfd; } ;
typedef TYPE_1__ common_header_type ;
typedef scalar_t__ bfd_size_type ;


 char* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_3 (common_header_type *VAR_0)
{
  size_t VAR_1;
  char *VAR_2;

  VAR_1 = FUNC_2 (VAR_0);
  if (VAR_1 <= 0x7f)

    ;

  else if (VAR_1 == 0xde)

    VAR_1 = FUNC_2 (VAR_0);

  else if (VAR_1 == 0xdf)
    {

      VAR_1 = FUNC_2 (VAR_0);
      VAR_1 = (VAR_1 * 256) + FUNC_2 (VAR_0);
    }


  VAR_2 = FUNC_0 (VAR_0->abfd, (bfd_size_type) VAR_1 + 1);
  if (!VAR_2)
    return ((void*)0);
  FUNC_1 (VAR_0, VAR_2, VAR_1);
  VAR_2[VAR_1] = 0;
  return VAR_2;
}
