
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int compute_sum; size_t crc_len; int sha512ctx; int sha384ctx; int sha256ctx; int sha1ctx; int rmd160ctx; int md5ctx; int crc; } ;


 int FUNC_0 (int ,unsigned char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int FUNC_5 (int *,void const*,size_t) ;
 int FUNC_6 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_7(struct mtree_writer *VAR_7, const void *VAR_8, size_t VAR_9)
{
 if (VAR_7->compute_sum & VAR_0) {



  const unsigned char *VAR_10;
  size_t VAR_11;

  for (VAR_11 = VAR_9, VAR_10 = VAR_8; VAR_11--; ++VAR_10)
   FUNC_0(VAR_7->crc, *VAR_10);
  VAR_7->crc_len += VAR_9;
 }
}
