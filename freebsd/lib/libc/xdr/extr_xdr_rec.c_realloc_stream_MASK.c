
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int bool_t ;
struct TYPE_3__ {int recvsize; char* in_base; int in_finger; char* in_boundry; int in_size; } ;
typedef TYPE_1__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static bool_t
FUNC_1(RECSTREAM *VAR_2, int VAR_3)
{
 ptrdiff_t VAR_4;
 char *VAR_5;

 if (VAR_3 > VAR_2->recvsize) {
  VAR_5 = FUNC_0(VAR_2->in_base, (size_t)VAR_3);
  if (VAR_5 == ((void*)0))
   return VAR_0;
  VAR_4 = VAR_5 - VAR_2->in_base;
  VAR_2->in_finger += VAR_4;
  VAR_2->in_base = VAR_5;
  VAR_2->in_boundry = VAR_5 + VAR_3;
  VAR_2->recvsize = VAR_3;
  VAR_2->in_size = VAR_3;
 }

 return VAR_1;
}
