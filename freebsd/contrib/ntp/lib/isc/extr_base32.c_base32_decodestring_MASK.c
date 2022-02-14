
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_buffer_t ;
typedef int base32_decode_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,char const*,int *) ;

__attribute__((used)) static isc_result_t
FUNC_4(const char *VAR_1, const char VAR_2[], isc_buffer_t *VAR_3) {
 base32_decode_ctx_t VAR_4;

 FUNC_3(&VAR_4, -1, VAR_2, VAR_3);
 for (;;) {
  int VAR_5 = *VAR_1++;
  if (VAR_5 == '\0')
   break;
  if (VAR_5 == ' ' || VAR_5 == '\t' || VAR_5 == '\n' || VAR_5== '\r')
   continue;
  FUNC_0(FUNC_1(&VAR_4, VAR_5));
 }
 FUNC_0(FUNC_2(&VAR_4));
 return (VAR_0);
}
