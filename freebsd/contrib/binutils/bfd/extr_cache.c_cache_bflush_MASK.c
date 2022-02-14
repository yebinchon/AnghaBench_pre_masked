
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (struct bfd*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (struct bfd *VAR_2)
{
  int VAR_3;
  FILE *VAR_4 = FUNC_0 (VAR_2, VAR_0);
  if (VAR_4 == ((void*)0))
    return 0;
  VAR_3 = FUNC_2 (VAR_4);
  if (VAR_3 < 0)
    FUNC_1 (VAR_1);
  return VAR_3;
}
