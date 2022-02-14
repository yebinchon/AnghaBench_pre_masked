
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcDisState {int nullifyMode; int instrBuffer; } ;




 char** VAR_0 ;
 char* FUNC_0 (struct arcDisState*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static void
FUNC_3(struct arcDisState * VAR_1,
    const char * VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5,
    int VAR_6,
    int VAR_7,
    int VAR_8)
{
  FUNC_2 (VAR_1->instrBuffer, VAR_2);

  if (VAR_3 > 0)
    {
      const char *VAR_9 = 0;

      if (!VAR_4)
 FUNC_1 (VAR_1->instrBuffer, ".");

      if (VAR_3 < 16)
 VAR_9 = VAR_0[VAR_3];
      else
 VAR_9 = FUNC_0 (VAR_1, VAR_3);

      if (!VAR_9)
 VAR_9 = "???";

      FUNC_1 (VAR_1->instrBuffer, VAR_9);
    }

  if (VAR_5)
    FUNC_1 (VAR_1->instrBuffer, ".f");

  switch (VAR_1->nullifyMode)
    {
    case 129:
      FUNC_1 (VAR_1->instrBuffer, ".d");
      break;
    case 128:
      FUNC_1 (VAR_1->instrBuffer, ".jd");
      break;
    }

  if (VAR_6)
    FUNC_1 (VAR_1->instrBuffer, ".x");

  if (VAR_7)
    FUNC_1 (VAR_1->instrBuffer, ".a");

  if (VAR_8)
    FUNC_1 (VAR_1->instrBuffer, ".di");
}
