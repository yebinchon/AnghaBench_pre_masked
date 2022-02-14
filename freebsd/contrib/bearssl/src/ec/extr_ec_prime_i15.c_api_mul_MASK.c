
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int jacobian ;
struct TYPE_6__ {size_t point_len; } ;
typedef TYPE_1__ curve_params ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char*,size_t,TYPE_1__ const*) ;
 int FUNC_2 (unsigned char*,int *,TYPE_1__ const*) ;
 int FUNC_3 (int *,unsigned char const*,size_t,TYPE_1__ const*) ;

__attribute__((used)) static uint32_t
FUNC_4(unsigned char *VAR_0, size_t VAR_1,
 const unsigned char *VAR_2, size_t VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 const curve_params *VAR_6;
 jacobian VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_5 = FUNC_1(&VAR_7, VAR_0, VAR_1, VAR_6);
 FUNC_3(&VAR_7, VAR_2, VAR_3, VAR_6);
 if (VAR_1 == VAR_6->point_len) {
  FUNC_2(VAR_0, &VAR_7, VAR_6);
 }
 return VAR_5;
}
