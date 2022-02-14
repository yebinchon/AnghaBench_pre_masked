
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; size_t len; } ;
typedef TYPE_1__ br_tls_prf_seed_chunk ;
typedef int (* br_tls_prf_impl ) (unsigned char*,size_t,unsigned char*,size_t,char const*,int,TYPE_1__*) ;


 int FUNC_0 (char*,unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_1 (unsigned char*,char const*) ;

__attribute__((used)) static void
FUNC_2(br_tls_prf_impl VAR_0,
 const char *VAR_1, const char *VAR_2, const char *VAR_3,
 const char *VAR_4)
{
 unsigned char VAR_5[100], VAR_6[100], VAR_7[500], VAR_8[500];
 size_t VAR_9, VAR_10, VAR_11;
 br_tls_prf_seed_chunk VAR_12[2];

 VAR_9 = FUNC_1(VAR_5, VAR_1);
 VAR_10 = FUNC_1(VAR_6, VAR_3);
 VAR_11 = FUNC_1(VAR_7, VAR_4);

 VAR_12[0].data = VAR_6;
 VAR_12[0].len = VAR_10;
 VAR_0(VAR_8, VAR_11, VAR_5, VAR_9, VAR_2, 1, VAR_12);
 FUNC_0("TLS PRF KAT 1", VAR_8, VAR_7, VAR_11);

 VAR_12[0].data = VAR_6;
 VAR_12[0].len = VAR_10;
 VAR_12[1].data = ((void*)0);
 VAR_12[1].len = 0;
 VAR_0(VAR_8, VAR_11, VAR_5, VAR_9, VAR_2, 2, VAR_12);
 FUNC_0("TLS PRF KAT 2", VAR_8, VAR_7, VAR_11);

 VAR_12[0].data = ((void*)0);
 VAR_12[0].len = 0;
 VAR_12[1].data = VAR_6;
 VAR_12[1].len = VAR_10;
 VAR_0(VAR_8, VAR_11, VAR_5, VAR_9, VAR_2, 2, VAR_12);
 FUNC_0("TLS PRF KAT 3", VAR_8, VAR_7, VAR_11);

 VAR_12[0].data = VAR_6;
 VAR_12[0].len = VAR_10 >> 1;
 VAR_12[1].data = VAR_6 + VAR_12[0].len;
 VAR_12[1].len = VAR_10 - VAR_12[0].len;
 VAR_0(VAR_8, VAR_11, VAR_5, VAR_9, VAR_2, 2, VAR_12);
 FUNC_0("TLS PRF KAT 4", VAR_8, VAR_7, VAR_11);
}
