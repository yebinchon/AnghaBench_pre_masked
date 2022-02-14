
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_1, bfd *VAR_2)
{
  const char *VAR_3;



  if (! FUNC_1 (VAR_1, VAR_2))
    {
      VAR_3 = FUNC_0("private header data");
      goto loser;
    }


  return;

loser:
  FUNC_5 (FUNC_0("%s: error in %s: %s"),
      FUNC_4 (VAR_1),
      VAR_3, FUNC_2 (FUNC_3 ()));
  VAR_0 = 1;
}
