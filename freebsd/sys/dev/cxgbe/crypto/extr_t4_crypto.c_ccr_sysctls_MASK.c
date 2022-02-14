
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ccr_softc {int stats_sw_fallback; int stats_process_error; int stats_sglist_error; int stats_bad_session; int stats_pad_error; int stats_mac_error; int stats_inflight; int stats_wr_nomem; int stats_ccm_decrypt; int stats_ccm_encrypt; int stats_gcm_decrypt; int stats_gcm_encrypt; int stats_authenc_decrypt; int stats_authenc_encrypt; int stats_blkcipher_decrypt; int stats_blkcipher_encrypt; int stats_hmac; int stats_hash; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ccr_softc *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid *VAR_4;
 struct sysctl_oid_list *VAR_5;

 VAR_3 = FUNC_3(VAR_2->dev);




 VAR_4 = FUNC_4(VAR_2->dev);
 VAR_5 = FUNC_2(VAR_4);




 VAR_4 = FUNC_0(VAR_3, VAR_5, VAR_1, "stats", VAR_0,
     ((void*)0), "statistics");
 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_3, VAR_5, VAR_1, "hash", VAR_0,
     &VAR_2->stats_hash, 0, "Hash requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "hmac", VAR_0,
     &VAR_2->stats_hmac, 0, "HMAC requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "cipher_encrypt", VAR_0,
     &VAR_2->stats_blkcipher_encrypt, 0,
     "Cipher encryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "cipher_decrypt", VAR_0,
     &VAR_2->stats_blkcipher_decrypt, 0,
     "Cipher decryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "authenc_encrypt", VAR_0,
     &VAR_2->stats_authenc_encrypt, 0,
     "Combined AES+HMAC encryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "authenc_decrypt", VAR_0,
     &VAR_2->stats_authenc_decrypt, 0,
     "Combined AES+HMAC decryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "gcm_encrypt", VAR_0,
     &VAR_2->stats_gcm_encrypt, 0, "AES-GCM encryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "gcm_decrypt", VAR_0,
     &VAR_2->stats_gcm_decrypt, 0, "AES-GCM decryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "ccm_encrypt", VAR_0,
     &VAR_2->stats_ccm_encrypt, 0, "AES-CCM encryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "ccm_decrypt", VAR_0,
     &VAR_2->stats_ccm_decrypt, 0, "AES-CCM decryption requests submitted");
 FUNC_1(VAR_3, VAR_5, VAR_1, "wr_nomem", VAR_0,
     &VAR_2->stats_wr_nomem, 0, "Work request memory allocation failures");
 FUNC_1(VAR_3, VAR_5, VAR_1, "inflight", VAR_0,
     &VAR_2->stats_inflight, 0, "Requests currently pending");
 FUNC_1(VAR_3, VAR_5, VAR_1, "mac_error", VAR_0,
     &VAR_2->stats_mac_error, 0, "MAC errors");
 FUNC_1(VAR_3, VAR_5, VAR_1, "pad_error", VAR_0,
     &VAR_2->stats_pad_error, 0, "Padding errors");
 FUNC_1(VAR_3, VAR_5, VAR_1, "bad_session", VAR_0,
     &VAR_2->stats_bad_session, 0, "Requests with invalid session ID");
 FUNC_1(VAR_3, VAR_5, VAR_1, "sglist_error", VAR_0,
     &VAR_2->stats_sglist_error, 0,
     "Requests for which DMA mapping failed");
 FUNC_1(VAR_3, VAR_5, VAR_1, "process_error", VAR_0,
     &VAR_2->stats_process_error, 0, "Requests failed during queueing");
 FUNC_1(VAR_3, VAR_5, VAR_1, "sw_fallback", VAR_0,
     &VAR_2->stats_sw_fallback, 0,
     "Requests processed by falling back to software");
}
