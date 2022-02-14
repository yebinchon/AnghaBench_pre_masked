
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct score_it {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 struct score_it VAR_4 ;
 int FUNC_2 (struct score_it*,struct score_it*,int) ;
 int VAR_5 ;
 int FUNC_3 (char**,int,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_6)
{
  int VAR_7;
  char *VAR_8, *VAR_9;
  char VAR_10[VAR_1];
  char VAR_11[VAR_1];
  struct score_it VAR_12;
  int VAR_13 = 0;

  VAR_13 = VAR_5;
  VAR_5 = 0;
  FUNC_2 (&VAR_12, &VAR_4, sizeof (struct score_it));

  FUNC_7 (VAR_11, VAR_6);
  VAR_8 = VAR_11;
  FUNC_5 (VAR_8);
  if ((VAR_7 = FUNC_3 (&VAR_8, -1, VAR_2)) == (int) VAR_0)
    return;

  VAR_9 = VAR_8;
  if (FUNC_4 (&VAR_8) == (int) VAR_0)
    return;

  VAR_8 = VAR_9;
  FUNC_6 (VAR_10, "li r1  %s", VAR_8);
  FUNC_0 (VAR_10, VAR_3);

  FUNC_2 (&VAR_4, &VAR_12, sizeof (struct score_it));
  FUNC_6 (VAR_10, " r%d, [r1,0]", VAR_7);
  FUNC_1 (VAR_10);

  VAR_5 = VAR_13;
}
