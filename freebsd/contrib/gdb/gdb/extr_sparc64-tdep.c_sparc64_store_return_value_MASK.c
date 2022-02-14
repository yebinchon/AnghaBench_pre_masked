
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,void const*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct regcache*,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*) ;
 int FUNC_8 (struct regcache*,struct type*,char*,int ,int ) ;
 scalar_t__ FUNC_9 (struct type*) ;

__attribute__((used)) static void
FUNC_10 (struct type *VAR_3, struct regcache *VAR_4,
       const void *VAR_5)
{
  int VAR_6 = FUNC_1 (VAR_3);
  char VAR_7[16];
  int VAR_8;

  if (FUNC_9 (VAR_3))
    {

      FUNC_2 (VAR_6 <= 32);




      FUNC_4 (VAR_7, 0, sizeof (VAR_7));
      FUNC_3 (VAR_7, VAR_5, VAR_6);
      for (VAR_8 = 0; VAR_8 < ((VAR_6 + 7) / 8); VAR_8++)
 FUNC_5 (VAR_4, VAR_1 + VAR_8, VAR_7 + VAR_8 * 8);
      if (FUNC_0 (VAR_3) != VAR_2)
 FUNC_8 (VAR_4, VAR_3, VAR_7, 0, 0);
    }
  else if (FUNC_6 (VAR_3))
    {

      FUNC_3 (VAR_7, VAR_5, VAR_6);
      for (VAR_8 = 0; VAR_8 < VAR_6 / 4; VAR_8++)
 FUNC_5 (VAR_4, VAR_0 + VAR_8, VAR_7 + VAR_8 * 4);
    }
  else
    {

      FUNC_2 (FUNC_7 (VAR_3));


      FUNC_4 (VAR_7, 0, 8);
      FUNC_3 (VAR_7 + 8 - VAR_6, VAR_5, VAR_6);
      FUNC_5 (VAR_4, VAR_1, VAR_7);
    }
}
