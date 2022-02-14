
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sslrec_chapol_context ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int *,int,unsigned int,unsigned char*,size_t,unsigned char*,int) ;

__attribute__((used)) static unsigned char *
FUNC_2(br_sslrec_chapol_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_3;
 VAR_6 = *VAR_4;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6, VAR_5 + VAR_6, 1);
 VAR_5 -= 5;
 VAR_5[0] = (unsigned char)VAR_1;
 FUNC_0(VAR_5 + 1, VAR_2);
 FUNC_0(VAR_5 + 3, VAR_6 + 16);
 *VAR_4 = VAR_6 + 21;
 return VAR_5;
}
