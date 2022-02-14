
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*,char*,struct type*) ;
 int VAR_1 ;
 struct type* FUNC_1 (int ,struct type*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct type* FUNC_3 (char*,int ) ;

__attribute__((used)) static struct type *
FUNC_4 (char *VAR_2,
  struct type *VAR_3,
  char *VAR_4,
  int VAR_5)
{
  struct type *VAR_6;
  struct type *VAR_7;

  VAR_6 = FUNC_3 (VAR_2, VAR_0);
  VAR_7 = FUNC_1 (0, VAR_3,
      FUNC_2 (0, VAR_1,
           0, VAR_5-1));
  FUNC_0 (VAR_6, VAR_4, VAR_7);
  return VAR_6;
}
