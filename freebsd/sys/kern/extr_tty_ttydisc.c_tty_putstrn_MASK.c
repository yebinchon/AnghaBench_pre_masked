
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_inq; int t_column; int t_writepos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,char const,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct tty *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 FUNC_1(VAR_1, VAR_0);

 if (FUNC_0(VAR_1))
  return (-1);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_3(VAR_1, VAR_2[VAR_4], 0);

 VAR_1->t_writepos = VAR_1->t_column;
 FUNC_4(&VAR_1->t_inq);

 FUNC_2(VAR_1);
 return (0);
}
