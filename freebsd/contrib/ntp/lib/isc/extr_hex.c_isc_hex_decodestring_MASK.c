
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_buffer_t ;
typedef int hex_decode_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;

isc_result_t
FUNC_4(const char *VAR_1, isc_buffer_t *VAR_2) {
 hex_decode_ctx_t VAR_3;

 FUNC_3(&VAR_3, -1, VAR_2);
 for (;;) {
  int VAR_4 = *VAR_1++;
  if (VAR_4 == '\0')
   break;
  if (VAR_4 == ' ' || VAR_4 == '\t' || VAR_4 == '\n' || VAR_4== '\r')
   continue;
  FUNC_0(FUNC_1(&VAR_3, VAR_4));
 }
 FUNC_0(FUNC_2(&VAR_3));
 return (VAR_0);
}
