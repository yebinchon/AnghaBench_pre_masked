
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (void)
{
  ptid_t VAR_4 = FUNC_4 (VAR_0);
  FUNC_0((" inferior_ptid to procfs: %s => %s",
 FUNC_1 (VAR_0), FUNC_1 (VAR_4)));

  if (FUNC_3 (VAR_4, VAR_2))
    return 0;

  VAR_0 = VAR_4;
  VAR_1 = FUNC_2 (VAR_3, ((void*)0));
  return 1;
}
