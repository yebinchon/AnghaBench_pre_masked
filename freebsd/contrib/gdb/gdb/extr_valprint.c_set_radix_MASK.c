
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{
  unsigned VAR_2;

  VAR_2 = (VAR_0 == ((void*)0)) ? 10 : FUNC_0 (VAR_0);
  FUNC_3 (0, VAR_2);
  FUNC_2 (0, VAR_2);
  if (VAR_1)
    {
      FUNC_1 ("Input and output radices now set to decimal %u, hex %x, octal %o.\n",
         VAR_2, VAR_2, VAR_2);
    }
}
