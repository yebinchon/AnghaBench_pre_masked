
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int value; } ;
struct TYPE_5__ {scalar_t__ length; int value; } ;
struct mg_thread_ctx {int maj_stat; int min_stat; TYPE_2__ min_error; TYPE_1__ maj_error; int mech; } ;
typedef TYPE_3__* gss_buffer_t ;
typedef int * gss_OID ;
struct TYPE_7__ {scalar_t__ length; int * value; } ;
typedef int OM_uint32 ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int * const) ;
 struct mg_thread_ctx VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static OM_uint32
FUNC_3(const gss_OID VAR_3, OM_uint32 VAR_4,
    OM_uint32 VAR_5, gss_buffer_t VAR_6)
{
 struct mg_thread_ctx *VAR_7;

 VAR_7 = &VAR_2;

 if (VAR_3 != ((void*)0) && FUNC_0(VAR_7->mech, VAR_3) == 0)
  return (VAR_0);

 switch (VAR_4) {
 case 129: {
  if (VAR_5 != VAR_7->maj_stat || VAR_7->maj_error.length == 0)
   break;
  VAR_6->value = FUNC_1(VAR_7->maj_error.length);
  VAR_6->length = VAR_7->maj_error.length;
  FUNC_2(VAR_6->value, VAR_7->maj_error.value,
      VAR_7->maj_error.length);
  return (VAR_1);
 }
 case 128: {
  if (VAR_5 != VAR_7->min_stat || VAR_7->min_error.length == 0)
   break;
  VAR_6->value = FUNC_1(VAR_7->min_error.length);
  VAR_6->length = VAR_7->min_error.length;
  FUNC_2(VAR_6->value, VAR_7->min_error.value,
      VAR_7->min_error.length);
  return (VAR_1);
 }
 }
 VAR_6->value = ((void*)0);
 VAR_6->length = 0;
 return (VAR_0);
}
