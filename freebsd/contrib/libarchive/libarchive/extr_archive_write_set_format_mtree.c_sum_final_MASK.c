
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct reg_info {int compute_sum; int buf_sha512; int buf_sha384; int buf_sha256; int buf_sha1; int buf_rmd160; int buf_md5; int crc; } ;
struct mtree_writer {int compute_sum; int crc_len; int sha512ctx; int sha384ctx; int sha256ctx; int sha1ctx; int rmd160ctx; int md5ctx; int crc; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct mtree_writer *VAR_7, struct reg_info *VAR_8)
{

 if (VAR_7->compute_sum & VAR_0) {
  uint64_t VAR_9;

  for (VAR_9 = VAR_7->crc_len; VAR_9 != 0; VAR_9 >>= 8)
   FUNC_0(VAR_7->crc, VAR_9 & 0xff);
  VAR_8->crc = ~VAR_7->crc;
 }
 VAR_8->compute_sum = VAR_7->compute_sum;
}
