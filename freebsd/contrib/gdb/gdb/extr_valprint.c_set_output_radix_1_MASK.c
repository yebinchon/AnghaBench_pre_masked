
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;
 char VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_2, unsigned VAR_3)
{


  switch (VAR_3)
    {
    case 16:
      VAR_0 = 'x';
      break;
    case 10:
      VAR_0 = 0;
      break;
    case 8:
      VAR_0 = 'o';
      break;
    default:


      FUNC_0 ("Unsupported output radix ``decimal %u''; output radix unchanged.",
      VAR_3);
    }
  VAR_1 = VAR_3;
  if (VAR_2)
    {
      FUNC_1 ("Output radix now set to decimal %u, hex %x, octal %o.\n",
         VAR_3, VAR_3, VAR_3);
    }
}
