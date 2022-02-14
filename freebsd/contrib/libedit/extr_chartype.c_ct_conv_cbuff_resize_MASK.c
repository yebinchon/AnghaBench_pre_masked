
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t csize; int * cbuff; } ;
typedef TYPE_1__ ct_buffer_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(ct_buffer_t *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if (VAR_1 <= VAR_0->csize)
  return 0;

 VAR_0->csize = VAR_1;

 VAR_2 = FUNC_1(VAR_0->cbuff, VAR_0->csize * sizeof(*VAR_0->cbuff));
 if (VAR_2 == ((void*)0)) {
  VAR_0->csize = 0;
  FUNC_0(VAR_0->cbuff);
  VAR_0->cbuff = ((void*)0);
  return -1;
 }
 VAR_0->cbuff = VAR_2;
 return 0;
}
