
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;


 struct serial* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct serial *
FUNC_3 (char *VAR_0)
{
  static int VAR_1 = 0;





  if (!VAR_1 && FUNC_1 (VAR_0, "udp:", 4) == 0)
    {
      FUNC_2 ("The remote protocol may be unreliable over UDP.");
      FUNC_2 ("Some events may be lost, rendering further debugging "
        "impossible.");
      VAR_1 = 1;
    }

  return FUNC_0 (VAR_0);
}
