
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10 (char *VAR_7, int VAR_8)
{
  int VAR_9;

  FUNC_9 (VAR_8);

  VAR_9 = FUNC_1 (VAR_7, VAR_2, VAR_1);

  FUNC_4 (&VAR_4);

  VAR_3 = FUNC_6 (VAR_2);

  if (!VAR_3)
    FUNC_2 (VAR_2);

  if (FUNC_8 (VAR_3, VAR_1))
    {
      FUNC_5 (VAR_3);
      FUNC_2 (VAR_2);
    }
  FUNC_7 (VAR_3);




  if (!FUNC_0 (VAR_5, (char *) 0,
       "Couldn't establish connection to remote target\n", VAR_0))
    if (VAR_8)
      FUNC_3 ("Remote target %s connected to %s\n", VAR_6,
         VAR_2);
}
