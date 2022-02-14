
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* FUNC_0 (char**,struct objfile*) ;
 struct type* FUNC_1 (int,int,int ,char*,struct objfile*) ;
 int FUNC_2 (char**,char,int*) ;

__attribute__((used)) static struct type *
FUNC_3 (char **VAR_5, int VAR_6[2], struct objfile *VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  enum type_code VAR_11 = VAR_2;

  switch (**VAR_5)
    {
    case 's':
      VAR_10 = 1;
      break;
    case 'u':
      VAR_10 = 0;
      break;
    default:
      return FUNC_0 (VAR_5, VAR_7);
    }
  (*VAR_5)++;







  if (**VAR_5 == 'c')
    (*VAR_5)++;
  else if (**VAR_5 == 'b')
    {
      VAR_11 = VAR_1;
      (*VAR_5)++;
    }





  FUNC_2 (VAR_5, ';', &VAR_9);
  if (VAR_9 != 0)
    return FUNC_0 (VAR_5, VAR_7);


  FUNC_2 (VAR_5, ';', &VAR_9);
  if (VAR_9 != 0)
    return FUNC_0 (VAR_5, VAR_7);


  VAR_8 = FUNC_2 (VAR_5, 0, &VAR_9);
  if (VAR_9 != 0)
    return FUNC_0 (VAR_5, VAR_7);






  if (**VAR_5 == ';')
    ++(*VAR_5);

  if (VAR_8 == 0)
    return FUNC_1 (VAR_3, 1,
        VAR_10 ? 0 : VAR_4, (char *) ((void*)0),
        VAR_7);
  else
    return FUNC_1 (VAR_11,
        VAR_8 / VAR_0,
        VAR_10 ? 0 : VAR_4, (char *) ((void*)0),
        VAR_7);
}
