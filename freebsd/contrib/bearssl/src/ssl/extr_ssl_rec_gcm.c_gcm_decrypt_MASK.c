
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
typedef int br_sslrec_gcm_context ;


 int FUNC_0 (int *,void*,unsigned char*,size_t,unsigned char*) ;
 int FUNC_1 (int *,int,unsigned int,unsigned char*,size_t,unsigned char*) ;

__attribute__((used)) static unsigned char *
FUNC_2(br_sslrec_gcm_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 uint32_t VAR_8;
 unsigned char VAR_9[16];

 VAR_5 = (unsigned char *)VAR_3 + 8;
 VAR_6 = *VAR_4 - 24;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6, VAR_9);
 FUNC_0(VAR_0, VAR_3, VAR_5, VAR_6, VAR_9);






 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < 16; VAR_7 ++) {
  VAR_8 |= VAR_9[VAR_7] ^ VAR_5[VAR_6 + VAR_7];
 }
 if (VAR_8) {
  return ((void*)0);
 }
 *VAR_4 = VAR_6;
 return VAR_5;
}
