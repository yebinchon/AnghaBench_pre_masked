
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ dtdv_scope; } ;
struct TYPE_5__ {size_t dtsv_size; int dtsv_data; TYPE_1__ dtsv_var; } ;
typedef TYPE_2__ dtrace_statvar_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,size_t,int ,size_t) ;
 int FUNC_1 (size_t*,int ,int ,size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(uint64_t VAR_4, size_t VAR_5, size_t *VAR_6,
    dtrace_statvar_t **VAR_7, int VAR_8)
{
 int VAR_9;
 size_t VAR_10, VAR_11;

 if (VAR_8 == 0)
  return (0);

 VAR_10 = VAR_3 + sizeof (uint64_t);
 VAR_11 = VAR_10 * VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  dtrace_statvar_t *VAR_12 = VAR_7[VAR_9];
  uint8_t VAR_13;
  size_t VAR_14;

  if (VAR_12 == ((void*)0) || (VAR_14 = VAR_12->dtsv_size) == 0)
   continue;

  VAR_13 = VAR_12->dtsv_var.dtdv_scope;







  FUNC_2((VAR_13 == VAR_0 && VAR_14 <= VAR_10) ||
      (VAR_13 == VAR_1 && VAR_14 <= VAR_11));

  if (FUNC_0(VAR_4, VAR_5, VAR_12->dtsv_data,
      VAR_12->dtsv_size)) {
   FUNC_1(VAR_6, VAR_4, VAR_12->dtsv_data,
       VAR_12->dtsv_size);
   return (1);
  }
 }

 return (0);
}
