
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfcopy {int itf; } ;
typedef int Elftc_Bfd_Target ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_3(struct elfcopy *VAR_1, const char *VAR_2)
{
 Elftc_Bfd_Target *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_2)) == ((void*)0))
  FUNC_2(VAR_0, "%s: invalid target name", VAR_2);
 VAR_1->itf = FUNC_1(VAR_3);
}
