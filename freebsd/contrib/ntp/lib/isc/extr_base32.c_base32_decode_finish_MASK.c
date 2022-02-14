
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ digits; } ;
typedef TYPE_1__ base32_decode_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline isc_result_t
FUNC_0(base32_decode_ctx_t *VAR_3) {
 if (VAR_3->length > 0)
  return (VAR_2);
 if (VAR_3->digits != 0)
  return (VAR_0);
 return (VAR_1);
}
