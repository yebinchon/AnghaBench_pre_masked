
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfcopy {char const* otgt; void* oem; int otf; int oed; int oec; } ;
typedef int Elftc_Bfd_Target ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_6(struct elfcopy *VAR_4, const char *VAR_5)
{
 Elftc_Bfd_Target *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5)) == ((void*)0))
  FUNC_5(VAR_3, "%s: invalid target name", VAR_5);
 VAR_4->otf = FUNC_3(VAR_6);
 if (VAR_4->otf == VAR_1) {
  VAR_4->oec = FUNC_2(VAR_6);
  VAR_4->oed = FUNC_1(VAR_6);
  VAR_4->oem = FUNC_4(VAR_6);
 }
 if (VAR_4->otf == VAR_0 || VAR_4->otf == VAR_2)
  VAR_4->oem = FUNC_4(VAR_6);

 VAR_4->otgt = VAR_5;
}
