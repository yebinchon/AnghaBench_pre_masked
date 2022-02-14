
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (VAR_3)
    {

      if ((VAR_2 = FUNC_0 (VAR_4, "w")) == ((void*)0))
 FUNC_3 (VAR_4);
    }
  else
    {
      FUNC_2 (VAR_5 ? VAR_1 : VAR_0, 0);
      FUNC_1 ("Downloading from ");
      FUNC_1 (VAR_5 ? "udp" : "tty0");
      FUNC_1 (", ^C to abort\r\n");
    }
}
