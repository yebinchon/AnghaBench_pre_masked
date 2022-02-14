
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {unsigned int length; int base; } ;
typedef TYPE_1__ isc_region_t ;
typedef int isc_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,unsigned int) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static isc_result_t
FUNC_4(const char *VAR_2, isc_buffer_t *VAR_3) {
 unsigned int VAR_4;
 isc_region_t VAR_5;

 FUNC_1(VAR_3, &VAR_5);
 VAR_4 = FUNC_3(VAR_2);

 if (VAR_4 > VAR_5.length)
  return (VAR_0);

 FUNC_2(VAR_5.base, VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_4);
 return (VAR_1);
}
