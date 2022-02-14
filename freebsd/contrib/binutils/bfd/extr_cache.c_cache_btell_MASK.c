
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd {int where; } ;
typedef int file_ptr ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (struct bfd*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static file_ptr
FUNC_2 (struct bfd *VAR_1)
{
  FILE *VAR_2 = FUNC_0 (VAR_1, VAR_0);
  if (VAR_2 == ((void*)0))
    return VAR_1->where;
  return FUNC_1 (VAR_2);
}
