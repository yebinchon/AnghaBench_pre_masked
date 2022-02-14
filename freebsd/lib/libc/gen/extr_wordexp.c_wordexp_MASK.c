
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ we_nbytes; int * we_strings; int * we_wordv; scalar_t__ we_wordc; } ;
typedef TYPE_1__ wordexp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,TYPE_1__*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(const char * __restrict VAR_2, wordexp_t * __restrict VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_1)
  FUNC_2(VAR_3);
 if ((VAR_4 & VAR_0) == 0) {
  VAR_3->we_wordc = 0;
  VAR_3->we_wordv = ((void*)0);
  VAR_3->we_strings = ((void*)0);
  VAR_3->we_nbytes = 0;
 }
 if ((VAR_5 = FUNC_1(VAR_2)) != 0) {
  FUNC_2(VAR_3);
  return (VAR_5);
 }
 if ((VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4)) != 0) {
  FUNC_2(VAR_3);
  return (VAR_5);
 }
 return (0);
}
