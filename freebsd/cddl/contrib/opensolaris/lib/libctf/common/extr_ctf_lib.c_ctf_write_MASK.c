
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ ctf_size; int * ctf_base; } ;
typedef TYPE_1__ ctf_file_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int const*,scalar_t__) ;

int
FUNC_2(ctf_file_t *VAR_1, int VAR_2)
{
 const uchar_t *VAR_3 = VAR_1->ctf_base;
 ssize_t VAR_4 = VAR_1->ctf_size;
 ssize_t VAR_5;

 while (VAR_4 != 0) {
  if ((VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4)) <= 0)
   return (FUNC_0(VAR_1, VAR_0));
  VAR_4 -= VAR_5;
  VAR_3 += VAR_5;
 }

 return (0);
}
