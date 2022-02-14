
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int seq; } ;
typedef TYPE_1__ br_sslrec_gcm_context ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,unsigned char*,size_t,unsigned char*) ;
 int FUNC_3 (TYPE_1__*,int,unsigned int,unsigned char*,size_t,unsigned char*) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static unsigned char *
FUNC_5(br_sslrec_gcm_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 unsigned char VAR_8[16];

 VAR_5 = (unsigned char *)VAR_3;
 VAR_7 = *VAR_4;
 FUNC_4(VAR_8, 0, sizeof VAR_8);
 FUNC_1(VAR_5 - 8, VAR_0->seq);
 FUNC_2(VAR_0, VAR_5 - 8, VAR_5, VAR_7, VAR_8);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5, VAR_7, VAR_5 + VAR_7);
 for (VAR_6 = 0; VAR_6 < 16; VAR_6 ++) {
  VAR_5[VAR_7 + VAR_6] ^= VAR_8[VAR_6];
 }
 VAR_7 += 24;
 VAR_5 -= 13;
 VAR_5[0] = (unsigned char)VAR_1;
 FUNC_0(VAR_5 + 1, VAR_2);
 FUNC_0(VAR_5 + 3, VAR_7);
 *VAR_4 = VAR_7 + 5;
 return VAR_5;
}
