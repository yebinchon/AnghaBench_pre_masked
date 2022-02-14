
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sslrec_chapol_context ;


 int FUNC_0 (int *,int,unsigned int,unsigned char*,size_t,unsigned char*,int ) ;

__attribute__((used)) static unsigned char *
FUNC_1(br_sslrec_chapol_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 unsigned char VAR_8[16];
 unsigned VAR_9;

 VAR_5 = VAR_3;
 VAR_7 = *VAR_4 - 16;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_7, VAR_8, 0);
 VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < 16; VAR_6 ++) {
  VAR_9 |= VAR_8[VAR_6] ^ VAR_5[VAR_7 + VAR_6];
 }
 if (VAR_9) {
  return ((void*)0);
 }
 *VAR_4 = VAR_7;
 return VAR_5;
}
