
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int err; int iomode; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,void*,size_t,unsigned char*,size_t) ;

void
FUNC_1(br_ssl_engine_context *VAR_4,
 void *VAR_5, size_t VAR_6, int VAR_7)
{
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_4, ((void*)0), 0, ((void*)0), 0);
 } else {
  if (VAR_7) {
   size_t VAR_8;

   if (VAR_6 < (512 + VAR_2
    + 512 + VAR_3))
   {
    VAR_4->iomode = VAR_1;
    VAR_4->err = VAR_0;
    return;
   } else if (VAR_6 < (16384 + VAR_2
    + 512 + VAR_3))
   {
    VAR_8 = 512 + VAR_3;
   } else {
    VAR_8 = VAR_6 - (16384 + VAR_2);
   }
   FUNC_0(VAR_4,
    VAR_5, VAR_6 - VAR_8,
    (unsigned char *)VAR_5 + VAR_8, VAR_8);
  } else {
   FUNC_0(VAR_4,
    VAR_5, VAR_6, ((void*)0), 0);
  }
 }
}
