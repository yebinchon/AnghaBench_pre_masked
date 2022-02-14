
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_tls_prf_seed_chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,size_t,int *,unsigned char const*,size_t,char const*,size_t,int const*) ;
 int FUNC_1 (void*,int ,size_t) ;

void
FUNC_2(void *VAR_2, size_t VAR_3,
 const void *VAR_4, size_t VAR_5, const char *VAR_6,
 size_t VAR_7, const br_tls_prf_seed_chunk *VAR_8)
{
 const unsigned char *VAR_9;
 size_t VAR_10;

 VAR_9 = VAR_4;
 VAR_10 = (VAR_5 + 1) >> 1;
 FUNC_1(VAR_2, 0, VAR_3);
 FUNC_0(VAR_2, VAR_3, &VAR_0,
  VAR_9, VAR_10, VAR_6, VAR_7, VAR_8);
 FUNC_0(VAR_2, VAR_3, &VAR_1,
  VAR_9 + VAR_5 - VAR_10, VAR_10, VAR_6, VAR_7, VAR_8);
}
