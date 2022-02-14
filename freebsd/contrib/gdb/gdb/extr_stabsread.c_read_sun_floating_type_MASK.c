
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
typedef struct type* TYPE_TARGET_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct type* FUNC_0 (char**,struct objfile*) ;
 struct type* FUNC_1 (int ,int,int ,int *,struct objfile*) ;
 int FUNC_2 (char**,char,int*) ;

__attribute__((used)) static struct type *
FUNC_3 (char **VAR_5, int VAR_6[2], struct objfile *VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  struct type *VAR_11;



  VAR_9 = FUNC_2 (VAR_5, ';', &VAR_8);
  if (VAR_8 != 0)
    return FUNC_0 (VAR_5, VAR_7);


  VAR_10 = FUNC_2 (VAR_5, ';', &VAR_8);
  if (VAR_8 != 0)
    return FUNC_0 (VAR_5, VAR_7);

  if (VAR_9 == VAR_0 || VAR_9 == VAR_1
      || VAR_9 == VAR_2)
    {
      VAR_11 = FUNC_1 (VAR_3, VAR_10, 0, ((void*)0), VAR_7);
      TYPE_TARGET_TYPE (VAR_12)
 = FUNC_1 (VAR_4, VAR_10 / 2, 0, ((void*)0), VAR_7);
      return VAR_12;
    }

  return FUNC_1 (VAR_4, VAR_10, 0, ((void*)0), VAR_7);
}
