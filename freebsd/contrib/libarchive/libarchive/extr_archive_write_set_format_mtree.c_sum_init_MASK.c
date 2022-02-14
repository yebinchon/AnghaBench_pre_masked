
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int compute_sum; int keys; int sha512ctx; int sha384ctx; int sha256ctx; int sha1ctx; int rmd160ctx; int md5ctx; scalar_t__ crc_len; scalar_t__ crc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct mtree_writer *VAR_8)
{

 VAR_8->compute_sum = 0;

 if (VAR_8->keys & VAR_1) {
  VAR_8->compute_sum |= VAR_1;
  VAR_8->crc = 0;
  VAR_8->crc_len = 0;
 }
}
