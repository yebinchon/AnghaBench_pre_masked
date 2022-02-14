
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sslrec_out_clear_context ;


 int FUNC_0 (unsigned char*,size_t) ;

__attribute__((used)) static unsigned char *
FUNC_1(br_sslrec_out_clear_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;

 (void)VAR_0;
 VAR_5 = (unsigned char *)VAR_3 - 5;
 VAR_5[0] = VAR_1;
 FUNC_0(VAR_5 + 1, VAR_2);
 FUNC_0(VAR_5 + 3, *VAR_4);
 *VAR_4 += 5;
 return VAR_5;
}
