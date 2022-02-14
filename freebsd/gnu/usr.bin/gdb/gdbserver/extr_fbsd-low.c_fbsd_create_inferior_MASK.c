
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,void*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11 (char *VAR_3, char **VAR_4)
{
  void *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_10 ();
  if (VAR_6 < 0)
    FUNC_6 ("vfork");

  if (VAR_6 == 0)
    {
      FUNC_7 (VAR_0, 0, 0, 0);

      FUNC_8 (0, 0);

      FUNC_3 (VAR_3, VAR_4);

      FUNC_5 (VAR_2, "Cannot exec %s: %s.\n", VAR_3,
        FUNC_9 (VAR_1));
      FUNC_4 (VAR_2);
      FUNC_0 (0177);
    }

  VAR_5 = FUNC_1 (VAR_6);
  FUNC_2 (VAR_6, VAR_5);

  return VAR_6;
}
