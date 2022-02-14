
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {scalar_t__ entsize; } ;
typedef TYPE_1__ asection ;
typedef int CORE_ADDR ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int * FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,char*,int ,int) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_0, char *VAR_1,
        char *VAR_2, CORE_ADDR VAR_3,
        char *VAR_4, int VAR_5)
{
  bfd *VAR_6;
  asection *VAR_7;

  VAR_6 = FUNC_1 (VAR_0, VAR_2, VAR_1);
  VAR_7 = FUNC_0 (VAR_6, ".newsec");
  FUNC_5 (VAR_6, VAR_7, VAR_5);
  FUNC_6 (VAR_6, VAR_7, VAR_3);
  FUNC_2 (VAR_6, VAR_7, 0);
  FUNC_4 (VAR_6, VAR_7, 0x203);
  VAR_7->entsize = 0;
  FUNC_3 (VAR_6, VAR_7, VAR_4, 0, VAR_5);
}
