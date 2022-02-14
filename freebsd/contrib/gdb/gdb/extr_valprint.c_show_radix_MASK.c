
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3)
{
  if (VAR_3)
    {
      if (VAR_0 == VAR_1)
 {
   FUNC_0 ("Input and output radices set to decimal %u, hex %x, octal %o.\n",
      VAR_0, VAR_0, VAR_0);
 }
      else
 {
   FUNC_0 ("Input radix set to decimal %u, hex %x, octal %o.\n",
      VAR_0, VAR_0, VAR_0);
   FUNC_0 ("Output radix set to decimal %u, hex %x, octal %o.\n",
      VAR_1, VAR_1, VAR_1);
 }
    }
}
