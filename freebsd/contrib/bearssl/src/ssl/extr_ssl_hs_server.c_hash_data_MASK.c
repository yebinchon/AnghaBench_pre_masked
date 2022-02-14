
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mhash; } ;
struct TYPE_8__ {TYPE_1__ eng; } ;
typedef TYPE_2__ br_ssl_server_context ;
struct TYPE_9__ {int vtable; } ;
typedef TYPE_3__ br_hash_compat_context ;
struct TYPE_10__ {size_t desc; int (* out ) (int *,void*) ;int (* update ) (int *,void const*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_4__ br_hash_class ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (void*,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,unsigned char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void const*,size_t) ;
 int FUNC_7 (int *,unsigned char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void const*,size_t) ;
 int FUNC_10 (int *,void*) ;

__attribute__((used)) static size_t
FUNC_11(br_ssl_server_context *VAR_4,
 void *VAR_5, int VAR_6, const void *VAR_7, size_t VAR_8)
{
 const br_hash_class *VAR_9;
 br_hash_compat_context VAR_10;

 if (VAR_6 == 0) {
  unsigned char VAR_11[36];

  VAR_9 = FUNC_0(&VAR_4->eng.mhash, VAR_2);
  if (VAR_9 == ((void*)0)) {
   return 0;
  }
  VAR_9->init(&VAR_10.vtable);
  VAR_9->update(&VAR_10.vtable, VAR_7, VAR_8);
  VAR_9->out(&VAR_10.vtable, VAR_11);
  VAR_9 = FUNC_0(&VAR_4->eng.mhash, VAR_3);
  if (VAR_9 == ((void*)0)) {
   return 0;
  }
  VAR_9->init(&VAR_10.vtable);
  VAR_9->update(&VAR_10.vtable, VAR_7, VAR_8);
  VAR_9->out(&VAR_10.vtable, VAR_11 + 16);
  FUNC_1(VAR_5, VAR_11, 36);
  return 36;
 } else {
  VAR_9 = FUNC_0(&VAR_4->eng.mhash, VAR_6);
  if (VAR_9 == ((void*)0)) {
   return 0;
  }
  VAR_9->init(&VAR_10.vtable);
  VAR_9->update(&VAR_10.vtable, VAR_7, VAR_8);
  VAR_9->out(&VAR_10.vtable, VAR_5);
  return (VAR_9->desc >> VAR_1) & VAR_0;
 }
}
