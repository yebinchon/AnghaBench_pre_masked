
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (char const*,int ) ;

int
FUNC_3(libbe_handle_t *VAR_6, const char *VAR_7)
{

 if (FUNC_0(VAR_7) >= VAR_4)
  return (VAR_2);

 if (!FUNC_2(VAR_7, VAR_5))
  return (VAR_0);

 if (!FUNC_1(VAR_6->lzh, VAR_7,
     VAR_5))
  return (VAR_1);

 return (VAR_3);
}
