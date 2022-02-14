
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ocs_textbuf_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;

int32_t
FUNC_1(ocs_textbuf_t *VAR_0)
{
 uint32_t VAR_1;
 int32_t VAR_2;
 int32_t VAR_3 = 0;

 for (VAR_1 = 0; (VAR_2 = FUNC_0(VAR_0, VAR_1)) >= 0; VAR_1++) {
  VAR_3 += VAR_2;
 }
 return VAR_3;
}
