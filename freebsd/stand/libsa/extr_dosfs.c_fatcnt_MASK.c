
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_5__ {int fatsz; } ;
typedef TYPE_1__ DOS_FS ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(DOS_FS *VAR_0, u_int VAR_1)
{
   int VAR_2;

   for (VAR_2 = 0; FUNC_2(VAR_0, VAR_1); VAR_2++)
      if (FUNC_1(VAR_0, &VAR_1))
   return (-1);
   return (FUNC_0(VAR_0->fatsz, VAR_1) ? VAR_2 : -1);
}
