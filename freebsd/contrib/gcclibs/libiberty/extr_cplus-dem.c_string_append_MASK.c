
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (int,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (string *VAR_0, const char *VAR_1)
{
  int VAR_2;
  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    return;
  VAR_2 = FUNC_2 (VAR_1);
  FUNC_1 (VAR_0, VAR_2);
  FUNC_0 (VAR_0->p, VAR_1, VAR_2);
  VAR_0->p += VAR_2;
}
