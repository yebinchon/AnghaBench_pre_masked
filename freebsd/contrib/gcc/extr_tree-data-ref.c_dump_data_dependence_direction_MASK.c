
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum data_dependence_direction { ____Placeholder_data_dependence_direction } data_dependence_direction ;
typedef int FILE ;
 int FUNC_0 (int *,char*) ;

void
FUNC_1 (FILE *VAR_0,
    enum data_dependence_direction VAR_1)
{
  switch (VAR_1)
    {
    case 131:
      FUNC_0 (VAR_0, "+");
      break;

    case 133:
      FUNC_0 (VAR_0, "-");
      break;

    case 134:
      FUNC_0 (VAR_0, "=");
      break;

    case 129:
      FUNC_0 (VAR_0, "+-");
      break;

    case 130:
      FUNC_0 (VAR_0, "+=");
      break;

    case 132:
      FUNC_0 (VAR_0, "-=");
      break;

    case 128:
      FUNC_0 (VAR_0, "*");
      break;

    default:
      break;
    }
}
