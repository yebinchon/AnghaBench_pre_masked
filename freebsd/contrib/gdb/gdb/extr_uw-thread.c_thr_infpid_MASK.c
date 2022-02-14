
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (void *VAR_1)
{
  ptid_t VAR_2 = FUNC_2 (VAR_0);
  FUNC_0((" inferior_ptid from procfs: %s => %s",
 FUNC_1 (VAR_0), FUNC_1 (VAR_2)));
  VAR_0 = VAR_2;
}
