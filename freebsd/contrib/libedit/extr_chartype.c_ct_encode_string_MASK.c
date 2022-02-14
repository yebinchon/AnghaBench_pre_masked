
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ssize_t ;
struct TYPE_4__ {char* cbuff; size_t csize; } ;
typedef TYPE_1__ ct_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char*,size_t,int const) ;

char *
FUNC_3(const wchar_t *VAR_1, ct_buffer_t *VAR_2)
{
 char *VAR_3;
 ssize_t VAR_4;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = VAR_2->cbuff;
 for (;;) {
  VAR_4 = (ssize_t)(VAR_3 - VAR_2->cbuff);
  if ((VAR_2->csize - (size_t)VAR_4) < 5) {
   if (FUNC_1(VAR_2,
       VAR_2->csize + VAR_0) == -1)
    return ((void*)0);
   VAR_3 = VAR_2->cbuff + VAR_4;
  }
  if (!*VAR_1)
   break;
  VAR_4 = FUNC_2(VAR_3, (size_t)5, *VAR_1);
  if (VAR_4 == -1)
   FUNC_0();
  ++VAR_1;
  VAR_3 += VAR_4;
 }
 *VAR_3 = '\0';
 return VAR_2->cbuff;
}
