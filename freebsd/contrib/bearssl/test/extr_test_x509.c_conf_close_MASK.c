
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (VAR_1 != ((void*)0)) {
  if (FUNC_3(VAR_1)) {
   FUNC_4(VAR_3, "read error on configuration file\n");
   FUNC_1(VAR_0);
  }
  FUNC_2(VAR_1);
  VAR_1 = ((void*)0);
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }
}
