
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_2__ {scalar_t__ tls_version; int hash_size; int key_material_len; int iv_size; int const* write_iv; int const* read_iv; int const* read_key; int const* write_key; int const* read_mac_secret; int const* write_mac_secret; } ;
struct tlsv1_client {TYPE_1__ rl; int const* master_secret; int const* client_random; int const* server_random; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int const*,size_t,char*,int const*,int,int const*,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct tlsv1_client *VAR_6,
      const u8 *VAR_7, size_t VAR_8)
{
 u8 VAR_9[2 * VAR_4];
 u8 VAR_10[VAR_3];
 u8 *VAR_11;
 size_t VAR_12;

 if (VAR_7) {
  FUNC_3(VAR_1, "TLSv1: pre_master_secret",
    VAR_7, VAR_8);
  FUNC_0(VAR_9, VAR_6->client_random, VAR_4);
  FUNC_0(VAR_9 + VAR_4, VAR_6->server_random,
     VAR_4);
  if (FUNC_2(VAR_6->rl.tls_version,
       VAR_7, VAR_8,
       "master secret", VAR_9, 2 * VAR_4,
       VAR_6->master_secret, VAR_2)) {
   FUNC_4(VAR_0, "TLSv1: Failed to derive "
       "master_secret");
   return -1;
  }
  FUNC_3(VAR_1, "TLSv1: master_secret",
    VAR_6->master_secret, VAR_2);
 }

 FUNC_0(VAR_9, VAR_6->server_random, VAR_4);
 FUNC_0(VAR_9 + VAR_4, VAR_6->client_random, VAR_4);
 VAR_12 = 2 * (VAR_6->rl.hash_size + VAR_6->rl.key_material_len);
 if (VAR_6->rl.tls_version == VAR_5)
  VAR_12 += 2 * VAR_6->rl.iv_size;
 if (FUNC_2(VAR_6->rl.tls_version,
      VAR_6->master_secret, VAR_2,
      "key expansion", VAR_9, 2 * VAR_4,
      VAR_10, VAR_12)) {
  FUNC_4(VAR_0, "TLSv1: Failed to derive key_block");
  return -1;
 }
 FUNC_3(VAR_1, "TLSv1: key_block",
   VAR_10, VAR_12);

 VAR_11 = VAR_10;


 FUNC_0(VAR_6->rl.write_mac_secret, VAR_11, VAR_6->rl.hash_size);
 VAR_11 += VAR_6->rl.hash_size;

 FUNC_0(VAR_6->rl.read_mac_secret, VAR_11, VAR_6->rl.hash_size);
 VAR_11 += VAR_6->rl.hash_size;


 FUNC_0(VAR_6->rl.write_key, VAR_11, VAR_6->rl.key_material_len);
 VAR_11 += VAR_6->rl.key_material_len;

 FUNC_0(VAR_6->rl.read_key, VAR_11, VAR_6->rl.key_material_len);
 VAR_11 += VAR_6->rl.key_material_len;

 if (VAR_6->rl.tls_version == VAR_5) {

  FUNC_0(VAR_6->rl.write_iv, VAR_11, VAR_6->rl.iv_size);
  VAR_11 += VAR_6->rl.iv_size;

  FUNC_0(VAR_6->rl.read_iv, VAR_11, VAR_6->rl.iv_size);
 } else {





  FUNC_1(VAR_6->rl.write_iv, 0, VAR_6->rl.iv_size);
 }

 return 0;
}
