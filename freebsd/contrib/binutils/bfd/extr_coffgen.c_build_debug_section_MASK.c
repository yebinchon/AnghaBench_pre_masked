
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
struct TYPE_3__ {scalar_t__ size; int filepos; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 char* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static char *
FUNC_6 (bfd *VAR_2)
{
  char *VAR_3;
  file_ptr VAR_4;
  bfd_size_type VAR_5;

  asection *VAR_6 = FUNC_2 (VAR_2, ".debug");

  if (!VAR_6)
    {
      FUNC_4 (VAR_1);
      return ((void*)0);
    }

  VAR_5 = VAR_6->size;
  VAR_3 = FUNC_0 (VAR_2, VAR_5);
  if (VAR_3 == ((void*)0))
    return ((void*)0);





  VAR_4 = FUNC_5 (VAR_2);
  if (FUNC_3 (VAR_2, VAR_6->filepos, VAR_0) != 0
      || FUNC_1 (VAR_3, VAR_5, VAR_2) != VAR_5
      || FUNC_3 (VAR_2, VAR_4, VAR_0) != 0)
    return ((void*)0);
  return VAR_3;
}
