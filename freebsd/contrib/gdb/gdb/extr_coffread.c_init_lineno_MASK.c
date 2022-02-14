
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (int *,long,int ) ;
 int FUNC_2 () ;
 char* VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5 (bfd *VAR_4, long VAR_5, int VAR_6)
{
  int VAR_7;

  VAR_1 = VAR_5;
  VAR_2 = VAR_6;

  FUNC_2 ();

  if (VAR_6 == 0)
    return 0;

  if (FUNC_1 (VAR_4, VAR_5, 0) < 0)
    return -1;


  VAR_0 = (char *) FUNC_4 (VAR_6 + VAR_3);

  VAR_7 = FUNC_0 (VAR_0, VAR_6, VAR_4);
  if (VAR_7 != VAR_6)
    return -1;


  FUNC_3 (VAR_0 + VAR_6, 0, VAR_3);

  return 0;
}
