
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int h; int (* gh ) (void*,int ,unsigned char*,int) ;int seq; } ;
typedef TYPE_1__ br_sslrec_gcm_context ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int ,unsigned char*,int) ;
 int FUNC_4 (void*,int ,void*,size_t) ;
 int FUNC_5 (void*,int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_6(br_sslrec_gcm_context *VAR_0,
 int VAR_1, unsigned VAR_2,
 void *VAR_3, size_t VAR_4, void *VAR_5)
{
 unsigned char VAR_6[13];
 unsigned char VAR_7[16];
 FUNC_1(VAR_6, VAR_0->seq ++);
 VAR_6[8] = (unsigned char)VAR_1;
 FUNC_0(VAR_6 + 9, VAR_2);
 FUNC_0(VAR_6 + 11, VAR_4);
 FUNC_1(VAR_7, (uint64_t)(sizeof VAR_6) << 3);
 FUNC_1(VAR_7 + 8, (uint64_t)VAR_4 << 3);
 FUNC_2(VAR_5, 0, 16);
 VAR_0->gh(VAR_5, VAR_0->h, VAR_6, sizeof VAR_6);
 VAR_0->gh(VAR_5, VAR_0->h, VAR_3, VAR_4);
 VAR_0->gh(VAR_5, VAR_0->h, VAR_7, sizeof VAR_7);
}
