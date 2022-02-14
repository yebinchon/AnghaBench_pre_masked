
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd {int dummy; } ;
typedef int file_ptr ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct bfd*,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2 (struct bfd *VAR_2, file_ptr VAR_3, int VAR_4)
{
  FILE *VAR_5 = FUNC_0 (VAR_2, VAR_4 != VAR_1 ? VAR_0 : 0);
  if (VAR_5 == ((void*)0))
    return -1;
  return FUNC_1 (VAR_5, VAR_3, VAR_4);
}
