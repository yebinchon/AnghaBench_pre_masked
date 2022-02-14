
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tlist {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct tlist**,struct tlist**,int ) ;
 int FUNC_4 (struct tlist*) ;
 scalar_t__ VAR_3 ;

void
FUNC_5 (tree VAR_4)
{
  struct tlist *VAR_5 = 0, *VAR_6 = 0;

  VAR_3 = 0;
  VAR_0 = 0;
  if (VAR_1 == 0)
    {
      FUNC_0 (&VAR_2);
      VAR_1 = (char *) FUNC_1 (&VAR_2, 0);
    }

  FUNC_3 (VAR_4, &VAR_5, &VAR_6, 0);
  FUNC_4 (VAR_6);
  FUNC_2 (&VAR_2, VAR_1);
}
