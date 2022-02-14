
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef size_t u16 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_2__ {scalar_t__ tls_version; } ;
struct tlsv1_client {size_t dh_p_len; int const* dh_p; size_t dh_g_len; int const* dh_g; size_t dh_ys_len; int const* dh_ys; int server_rsa_key; TYPE_1__ rl; int server_random; int client_random; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 scalar_t__ VAR_6 ;
 int const VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*,size_t) ;
 void* FUNC_2 (int const*,size_t) ;
 int FUNC_3 (scalar_t__,int ,int ,int const*,int,int const*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int const*,int,int const*,int,int const*) ;
 int FUNC_5 (scalar_t__,int const,int ,int ,int const*,int,int const*) ;
 int FUNC_6 (struct tlsv1_client*) ;
 int FUNC_7 (int ,char*,int const*,int) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct tlsv1_client *VAR_9,
     const u8 *VAR_10, size_t VAR_11,
     tls_key_exchange VAR_12)
{
 const u8 *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 u8 VAR_17;
 unsigned int VAR_18;
 u16 VAR_19;

 FUNC_6(VAR_9);

 VAR_13 = VAR_10;
 VAR_14 = VAR_10 + VAR_11;

 if (VAR_14 - VAR_13 < 3)
  goto fail;
 VAR_15 = VAR_13;
 VAR_19 = FUNC_0(VAR_13);
 VAR_13 += 2;
 if (VAR_19 == 0 || VAR_19 > (size_t) (VAR_14 - VAR_13)) {
  FUNC_8(VAR_0, "TLSv1: Invalid dh_p length %u", VAR_19);
  goto fail;
 }
 VAR_9->dh_p_len = VAR_19;
 VAR_18 = FUNC_1(VAR_13, VAR_9->dh_p_len);
 if (VAR_18 < 768) {
  FUNC_8(VAR_1, "TLSv1: Reject under 768-bit DH prime (insecure; only %u bits)",
      VAR_18);
  FUNC_7(VAR_0, "TLSv1: Rejected DH prime",
       VAR_13, VAR_9->dh_p_len);
  goto fail;
 }
 VAR_9->dh_p = FUNC_2(VAR_13, VAR_9->dh_p_len);
 if (VAR_9->dh_p == ((void*)0))
  goto fail;
 VAR_13 += VAR_9->dh_p_len;
 FUNC_7(VAR_0, "TLSv1: DH p (prime)",
      VAR_9->dh_p, VAR_9->dh_p_len);

 if (VAR_14 - VAR_13 < 3)
  goto fail;
 VAR_19 = FUNC_0(VAR_13);
 VAR_13 += 2;
 if (VAR_19 == 0 || VAR_19 > (size_t) (VAR_14 - VAR_13))
  goto fail;
 VAR_9->dh_g_len = VAR_19;
 VAR_9->dh_g = FUNC_2(VAR_13, VAR_9->dh_g_len);
 if (VAR_9->dh_g == ((void*)0))
  goto fail;
 VAR_13 += VAR_9->dh_g_len;
 FUNC_7(VAR_0, "TLSv1: DH g (generator)",
      VAR_9->dh_g, VAR_9->dh_g_len);
 if (VAR_9->dh_g_len == 1 && VAR_9->dh_g[0] < 2)
  goto fail;

 if (VAR_14 - VAR_13 < 3)
  goto fail;
 VAR_19 = FUNC_0(VAR_13);
 VAR_13 += 2;
 if (VAR_19 == 0 || VAR_19 > (size_t) (VAR_14 - VAR_13))
  goto fail;
 VAR_9->dh_ys_len = VAR_19;
 VAR_9->dh_ys = FUNC_2(VAR_13, VAR_9->dh_ys_len);
 if (VAR_9->dh_ys == ((void*)0))
  goto fail;
 VAR_13 += VAR_9->dh_ys_len;
 FUNC_7(VAR_0, "TLSv1: DH Ys (server's public value)",
      VAR_9->dh_ys, VAR_9->dh_ys_len);
 VAR_16 = VAR_13;

 if (VAR_12 == VAR_6) {
  u8 VAR_20[64];
  int VAR_21;

  if (VAR_9->rl.tls_version == VAR_8) {
   goto fail;

  } else {
   VAR_21 = FUNC_3(
    VAR_9->rl.tls_version, VAR_9->client_random,
    VAR_9->server_random, VAR_15,
    VAR_16 - VAR_15, VAR_20);
  }

  if (VAR_21 < 0)
   goto fail;
  FUNC_7(VAR_2, "TLSv1: ServerKeyExchange hash",
       VAR_20, VAR_21);

  if (FUNC_4(VAR_9->rl.tls_version,
      VAR_9->server_rsa_key,
      VAR_20, VAR_21, VAR_13, VAR_14 - VAR_13,
      &VAR_17) < 0)
   goto fail;
 }

 return 0;

fail:
 FUNC_8(VAR_0, "TLSv1: Processing DH params failed");
 FUNC_6(VAR_9);
 return -1;
}
