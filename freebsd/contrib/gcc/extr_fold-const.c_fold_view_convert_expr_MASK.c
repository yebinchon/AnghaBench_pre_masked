
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static tree
FUNC_2 (tree VAR_3, tree VAR_4)
{

  unsigned char VAR_5[64];
  int VAR_6;


  if (VAR_1 != 8 || VAR_0 != 8)
    return VAR_2;

  VAR_6 = FUNC_0 (VAR_4, VAR_5, sizeof (VAR_5));
  if (VAR_6 == 0)
    return VAR_2;

  return FUNC_1 (VAR_3, VAR_5, VAR_6);
}
