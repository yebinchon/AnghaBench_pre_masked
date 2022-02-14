
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_5)
{
  int VAR_6;

  switch (*VAR_5)
    {
    case 'b':
    case 'B':
      VAR_6 = VAR_0;
      break;
    case 'p':
    case 'P':
      VAR_6 = VAR_1;
      break;
    case 's':
    case 'S':
      VAR_6 = VAR_2;
      break;
    default:
      FUNC_1 (FUNC_0("%s: invalid output format"), VAR_5);
    }
  VAR_3 = &VAR_4[VAR_6];
}
