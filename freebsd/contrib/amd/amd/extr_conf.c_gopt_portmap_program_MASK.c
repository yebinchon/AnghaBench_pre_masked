
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ portmap_program; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{
  VAR_1.portmap_program = FUNC_0(VAR_3);




  if (VAR_1.portmap_program < VAR_0 ||
      VAR_1.portmap_program > VAR_0 + 10) {
    VAR_1.portmap_program = VAR_0;
    FUNC_2(VAR_1.portmap_program);
    FUNC_1(VAR_2, "conf: illegal amd program number \"%s\"\n", VAR_3);
    return 1;
  }

  FUNC_2(VAR_1.portmap_program);
  return 0;
}
