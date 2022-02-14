
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct serial*,char const*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char,char const,int ) ;
 int * VAR_0 ;
 int FUNC_2 (struct serial*,char const*,int) ;

int
FUNC_3 (struct serial *VAR_1, const char *VAR_2, int VAR_3)
{
  if (VAR_0 != ((void*)0))
    {
      int VAR_4;

      for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 FUNC_1 (VAR_0, 'w', VAR_2[VAR_4] & 0xff, 0);



      FUNC_0 (VAR_0);
    }

  return (VAR_1->ops->write (VAR_1, VAR_2, VAR_3));
}
