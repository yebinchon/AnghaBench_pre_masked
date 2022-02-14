
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {size_t wsize; int * wbuff; } ;
typedef TYPE_1__ ct_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 size_t FUNC_1 (int *,char const*,size_t) ;

wchar_t *
FUNC_2(const char *VAR_1, ct_buffer_t *VAR_2)
{
 size_t VAR_3;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_1(((void*)0), VAR_1, (size_t)0);
 if (VAR_3 == (size_t)-1)
  return ((void*)0);

 if (VAR_2->wsize < ++VAR_3)
  if (FUNC_0(VAR_2, VAR_3 + VAR_0) == -1)
   return ((void*)0);

 FUNC_1(VAR_2->wbuff, VAR_1, VAR_2->wsize);
 return VAR_2->wbuff;
}
