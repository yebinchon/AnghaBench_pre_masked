
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef scalar_t__ segT ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (symbolS *VAR_4, segT VAR_5)
{
  bfd_boolean VAR_6 = VAR_0;
  segT VAR_7 = FUNC_0 (VAR_4);

  if (VAR_7 != VAR_5 && !FUNC_1 (VAR_4))
    {
      if ((FUNC_2 (VAR_3, VAR_7) & VAR_1))
 VAR_6 = VAR_2;
    }
  return VAR_6;
}
