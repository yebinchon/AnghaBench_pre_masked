
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd {int dummy; } ;
typedef scalar_t__ file_ptr ;
typedef int FILE ;


 int * FUNC_0 (struct bfd*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void const*,int,scalar_t__,int *) ;

__attribute__((used)) static file_ptr
FUNC_4 (struct bfd *VAR_1, const void *VAR_2, file_ptr VAR_3)
{
  file_ptr VAR_4;
  FILE *VAR_5 = FUNC_0 (VAR_1, 0);
  if (VAR_5 == ((void*)0))
    return 0;
  VAR_4 = FUNC_3 (VAR_2, 1, VAR_3, VAR_5);
  if (VAR_4 < VAR_3 && FUNC_2 (VAR_5))
    {
      FUNC_1 (VAR_0);
      return -1;
    }
  return VAR_4;
}
