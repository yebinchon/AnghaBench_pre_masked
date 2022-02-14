
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_1, unsigned VAR_2)
{







  if (VAR_2 < 2)
    {


      FUNC_0 ("Nonsense input radix ``decimal %u''; input radix unchanged.",
      VAR_2);
    }
  VAR_0 = VAR_2;
  if (VAR_1)
    {
      FUNC_1 ("Input radix now set to decimal %u, hex %x, octal %o.\n",
         VAR_2, VAR_2, VAR_2);
    }
}
