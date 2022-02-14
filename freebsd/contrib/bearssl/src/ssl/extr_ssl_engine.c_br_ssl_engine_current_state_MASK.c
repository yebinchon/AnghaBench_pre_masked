
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_ssl_engine_context ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,size_t*) ;
 int * FUNC_2 (int const*,size_t*) ;
 int * FUNC_3 (int const*,size_t*) ;
 int * FUNC_4 (int const*,size_t*) ;

unsigned
FUNC_5(const br_ssl_engine_context *VAR_5)
{
 unsigned VAR_6;
 size_t VAR_7;

 if (FUNC_0(VAR_5)) {
  return VAR_0;
 }

 VAR_6 = 0;
 if (FUNC_4(VAR_5, &VAR_7) != ((void*)0)) {
  VAR_6 |= VAR_4;
 }
 if (FUNC_2(VAR_5, &VAR_7) != ((void*)0)) {
  VAR_6 |= VAR_2;
 }
 if (FUNC_3(VAR_5, &VAR_7) != ((void*)0)) {
  VAR_6 |= VAR_3;
 }
 if (FUNC_1(VAR_5, &VAR_7) != ((void*)0)) {
  VAR_6 |= VAR_1;
 }
 return VAR_6;
}
