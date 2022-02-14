
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dd_fd; scalar_t__ dd_loc; } ;
typedef TYPE_1__ RST_DIR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static RST_DIR *
FUNC_3(const char *VAR_1)
{
 RST_DIR *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, VAR_0)) == -1)
  return (((void*)0));
 if ((VAR_2 = FUNC_1(sizeof(RST_DIR))) == ((void*)0)) {
  (void)FUNC_0(VAR_3);
  return (((void*)0));
 }
 VAR_2->dd_fd = VAR_3;
 VAR_2->dd_loc = 0;
 return (VAR_2);
}
