
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef int ptid_t ;


 int VAR_0 ;
 struct cleanup* FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int * FUNC_1 (int) ;

struct cleanup *
FUNC_2 (void)
{
  ptid_t *VAR_2;

  VAR_2 = FUNC_1 (sizeof (ptid_t));
  *VAR_2 = VAR_0;
  return FUNC_0 (VAR_1, VAR_2);
}
