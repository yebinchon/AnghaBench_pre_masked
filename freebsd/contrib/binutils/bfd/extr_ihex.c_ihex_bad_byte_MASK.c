
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,unsigned int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 int FUNC_5 (int ,int *,unsigned int,char*) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_3, unsigned int VAR_4, int VAR_5, bfd_boolean VAR_6)
{
  if (VAR_5 == VAR_0)
    {
      if (! VAR_6)
 FUNC_3 (VAR_2);
    }
  else
    {
      char VAR_7[10];

      if (! FUNC_0 (VAR_5))
 FUNC_4 (VAR_7, "\\%03o", (unsigned int) VAR_5);
      else
 {
   VAR_7[0] = VAR_5;
   VAR_7[1] = '\0';
 }
      FUNC_2)
 (FUNC_1("%B:%d: unexpected character `%s' in Intel Hex file"),
  VAR_3, VAR_4, VAR_7);
      FUNC_3 (VAR_1);
    }
}
