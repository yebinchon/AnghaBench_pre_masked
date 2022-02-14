
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct bfd {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (struct bfd*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static int
FUNC_4 (struct bfd *VAR_2, struct stat *VAR_3)
{
  int VAR_4;
  FILE *VAR_5 = FUNC_0 (VAR_2, VAR_0);
  if (VAR_5 == ((void*)0))
    return -1;
  VAR_4 = FUNC_3 (FUNC_2 (VAR_5), VAR_3);
  if (VAR_4 < 0)
    FUNC_1 (VAR_1);
  return VAR_4;
}
