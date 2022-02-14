
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_block {int ** ranges; } ;
typedef enum diff_type { ____Placeholder_diff_type } diff_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 char* FUNC_0 (char*,int *) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static enum diff_type
FUNC_2 (char **VAR_6, struct diff_block *VAR_7)
{
  char *VAR_8 = *VAR_6;
  enum diff_type VAR_9;


  VAR_8 = FUNC_0 (FUNC_1 (VAR_8), &VAR_7->ranges[0][VAR_5]);
  if (! VAR_8)
    return VAR_3;


  VAR_8 = FUNC_1 (VAR_8);
  if (*VAR_8 == ',')
    {
      VAR_8 = FUNC_0 (VAR_8 + 1, &VAR_7->ranges[0][VAR_4]);
      if (! VAR_8)
 return VAR_3;
    }
  else
    VAR_7->ranges[0][VAR_4] = VAR_7->ranges[0][VAR_5];


  VAR_8 = FUNC_1 (VAR_8);
  switch (*VAR_8)
    {
    case 'a':
      VAR_9 = VAR_0;
      break;
    case 'c':
      VAR_9 = VAR_1;
      break;
    case 'd':
      VAR_9 = VAR_2;
      break;
    default:
      return VAR_3;
    }
  VAR_8++;


  VAR_8 = FUNC_0 (FUNC_1 (VAR_8), &VAR_7->ranges[1][VAR_5]);
  if (! VAR_8)
    return VAR_3;


  VAR_8 = FUNC_1 (VAR_8);
  if (*VAR_8 == ',')
    {
      VAR_8 = FUNC_0 (VAR_8 + 1, &VAR_7->ranges[1][VAR_4]);
      if (! VAR_8)
 return VAR_3;
      VAR_8 = FUNC_1 (VAR_8);
    }
  else
    VAR_7->ranges[1][VAR_4] = VAR_7->ranges[1][VAR_5];

  *VAR_6 = VAR_8;
  return VAR_9;
}
