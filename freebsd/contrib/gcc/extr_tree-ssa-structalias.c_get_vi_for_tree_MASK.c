
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varinfo_t ;
typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 void** FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static varinfo_t
FUNC_4 (tree VAR_1)
{
  void **VAR_2 = FUNC_3 (VAR_0, VAR_1);
  if (VAR_2 == ((void*)0))
    return FUNC_2 (FUNC_1 (VAR_1, FUNC_0 (VAR_1)));

  return (varinfo_t) *VAR_2;
}
