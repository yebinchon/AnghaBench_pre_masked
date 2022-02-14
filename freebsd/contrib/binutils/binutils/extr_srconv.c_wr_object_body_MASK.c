
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_ofile {int nsections; scalar_t__ sections; } ;


 int FUNC_0 (struct coff_ofile*,scalar_t__) ;
 int FUNC_1 (struct coff_ofile*,scalar_t__) ;
 int FUNC_2 (struct coff_ofile*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (struct coff_ofile *VAR_0)
{
  int VAR_1;

  for (VAR_1 = 1; VAR_1 < VAR_0->nsections; VAR_1++)
    {
      FUNC_2 (VAR_0, VAR_0->sections + VAR_1);
      FUNC_0 (VAR_0, VAR_0->sections + VAR_1);
      FUNC_1 (VAR_0, VAR_0->sections + VAR_1);
    }
}
