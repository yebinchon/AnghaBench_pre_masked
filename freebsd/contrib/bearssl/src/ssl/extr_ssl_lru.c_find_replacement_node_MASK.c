
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int br_ssl_session_cache_lru ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(br_ssl_session_cache_lru *VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 != VAR_0) {
  VAR_7 = VAR_4 + VAR_1;
  for (;;) {
   uint32_t VAR_8;

   VAR_8 = FUNC_1(VAR_3, VAR_6);
   if (VAR_8 == VAR_0) {
    *VAR_5 = VAR_7;
    return VAR_6;
   }
   VAR_7 = VAR_6 + VAR_2;
   VAR_6 = VAR_8;
  }
 }
 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 != VAR_0) {
  VAR_7 = VAR_4 + VAR_2;
  for (;;) {
   uint32_t VAR_9;

   VAR_9 = FUNC_0(VAR_3, VAR_6);
   if (VAR_9 == VAR_0) {
    *VAR_5 = VAR_7;
    return VAR_6;
   }
   VAR_7 = VAR_6 + VAR_1;
   VAR_6 = VAR_9;
  }
 }
 *VAR_5 = VAR_0;
 return VAR_0;
}
