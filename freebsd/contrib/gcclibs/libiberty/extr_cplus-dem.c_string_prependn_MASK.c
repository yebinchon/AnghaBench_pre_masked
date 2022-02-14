
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* p; char* b; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2 (string *VAR_0, const char *VAR_1, int VAR_2)
{
  char *VAR_3;

  if (VAR_2 != 0)
    {
      FUNC_1 (VAR_0, VAR_2);
      for (VAR_3 = VAR_0->p - 1; VAR_3 >= VAR_0->b; VAR_3--)
 {
   VAR_3[VAR_2] = VAR_3[0];
 }
      FUNC_0 (VAR_0->b, VAR_1, VAR_2);
      VAR_0->p += VAR_2;
    }
}
