
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct dumperinfo {size_t maxiosize; TYPE_1__* kdcomp; } ;
struct TYPE_2__ {int kdc_stream; void* kdc_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dumperinfo*,void*,int ,size_t) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

int
FUNC_3(struct dumperinfo *VAR_1, void *VAR_2, vm_offset_t VAR_3,
    size_t VAR_4)
{
 void *VAR_5;

 if (VAR_1->kdcomp != ((void*)0)) {

  if (VAR_4 > VAR_1->maxiosize)
   return (VAR_0);
  VAR_5 = VAR_1->kdcomp->kdc_buf;
  FUNC_2(VAR_5, VAR_2, VAR_4);
  return (FUNC_1(VAR_1->kdcomp->kdc_stream, VAR_5, VAR_4));
 }
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4));
}
