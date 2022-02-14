
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  const char *VAR_9 = VAR_7[FUNC_2 (VAR_6)];
  int VAR_10;

  FUNC_5 (VAR_8);

  VAR_10 = FUNC_3 (VAR_1 / VAR_0);
  if (VAR_10 > 0)
    FUNC_0 (VAR_2, VAR_10);
  FUNC_1 (VAR_2, VAR_5);
  if (VAR_3)
    FUNC_4 (VAR_2, "\tjmp\t%%o7+8\n\t add\t%%o7, %s, %s\n",
     VAR_9, VAR_9);
  else
    FUNC_4 (VAR_2, "\tadd\t%%o7, %s, %s\n\tjmp\t%%o7+8\n\t nop\n",
     VAR_9, VAR_9);

  VAR_4 = 1;
}
