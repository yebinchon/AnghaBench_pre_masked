
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_msdos {int ** files; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (struct pex_msdos *VAR_2, int VAR_3)
{
  VAR_3 -= VAR_0;
  if (VAR_3 < 0 || VAR_3 >= VAR_1 || VAR_2->files[VAR_3] == ((void*)0))
    FUNC_0 ();
  return VAR_3;
}
