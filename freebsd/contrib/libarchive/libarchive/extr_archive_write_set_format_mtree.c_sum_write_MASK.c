
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct reg_info {int compute_sum; int buf_sha512; int buf_sha384; int buf_sha256; int buf_sha1; int buf_rmd160; int buf_md5; scalar_t__ crc; } ;
struct archive_string {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_string*,char*) ;
 int FUNC_1 (struct archive_string*,char*,int ) ;
 int FUNC_2 (struct archive_string*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct archive_string *VAR_7, struct reg_info *VAR_8)
{

 if (VAR_8->compute_sum & VAR_0) {
  FUNC_1(VAR_7, " cksum=%ju",
      (uintmax_t)VAR_8->crc);
 }
}
