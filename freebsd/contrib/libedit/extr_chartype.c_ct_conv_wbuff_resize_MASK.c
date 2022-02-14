
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t wsize; int * wbuff; } ;
typedef TYPE_1__ ct_buffer_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(ct_buffer_t *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if (VAR_1 <= VAR_0->wsize)
  return 0;

 VAR_0->wsize = VAR_1;

 VAR_2 = FUNC_1(VAR_0->wbuff, VAR_0->wsize * sizeof(*VAR_0->wbuff));
 if (VAR_2 == ((void*)0)) {
  VAR_0->wsize = 0;
  FUNC_0(VAR_0->wbuff);
  VAR_0->wbuff = ((void*)0);
  return -1;
 }
 VAR_0->wbuff = VAR_2;
 return 0;
}
