
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int i_len; TYPE_7__* i_addr; } ;
typedef TYPE_5__ xfs_log_iovec_t ;
struct TYPE_11__ {int __u_bits; } ;
struct TYPE_12__ {TYPE_1__ ilfu_uuid; } ;
struct TYPE_16__ {int ilf_boffset; int ilf_len; int ilf_blkno; TYPE_2__ ilf_u; int ilf_ino; int ilf_dsize; int ilf_asize; int ilf_fields; int ilf_size; int ilf_type; } ;
typedef TYPE_6__ xfs_inode_log_format_t ;
struct TYPE_13__ {int __u_bits; } ;
struct TYPE_14__ {TYPE_3__ ilfu_uuid; } ;
struct TYPE_17__ {int ilf_boffset; int ilf_len; int ilf_blkno; TYPE_4__ ilf_u; int ilf_ino; int ilf_dsize; int ilf_asize; int ilf_fields; int ilf_size; int ilf_type; } ;
typedef TYPE_7__ xfs_inode_log_format_64_t ;
typedef TYPE_7__ xfs_inode_log_format_32_t ;
typedef int uuid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(
 xfs_log_iovec_t *VAR_1,
 xfs_inode_log_format_t *VAR_2)
{
 if (VAR_1->i_len == sizeof(xfs_inode_log_format_32_t)) {
  xfs_inode_log_format_32_t *VAR_3 = VAR_1->i_addr;

  VAR_2->ilf_type = VAR_3->ilf_type;
  VAR_2->ilf_size = VAR_3->ilf_size;
  VAR_2->ilf_fields = VAR_3->ilf_fields;
  VAR_2->ilf_asize = VAR_3->ilf_asize;
  VAR_2->ilf_dsize = VAR_3->ilf_dsize;
  VAR_2->ilf_ino = VAR_3->ilf_ino;

  FUNC_0(VAR_2->ilf_u.ilfu_uuid.__u_bits,
         VAR_3->ilf_u.ilfu_uuid.__u_bits,
         sizeof(uuid_t));
  VAR_2->ilf_blkno = VAR_3->ilf_blkno;
  VAR_2->ilf_len = VAR_3->ilf_len;
  VAR_2->ilf_boffset = VAR_3->ilf_boffset;
  return 0;
 } else if (VAR_1->i_len == sizeof(xfs_inode_log_format_64_t)){
  xfs_inode_log_format_64_t *VAR_4 = VAR_1->i_addr;

  VAR_2->ilf_type = VAR_4->ilf_type;
  VAR_2->ilf_size = VAR_4->ilf_size;
  VAR_2->ilf_fields = VAR_4->ilf_fields;
  VAR_2->ilf_asize = VAR_4->ilf_asize;
  VAR_2->ilf_dsize = VAR_4->ilf_dsize;
  VAR_2->ilf_ino = VAR_4->ilf_ino;

  FUNC_0(VAR_2->ilf_u.ilfu_uuid.__u_bits,
         VAR_4->ilf_u.ilfu_uuid.__u_bits,
         sizeof(uuid_t));
  VAR_2->ilf_blkno = VAR_4->ilf_blkno;
  VAR_2->ilf_len = VAR_4->ilf_len;
  VAR_2->ilf_boffset = VAR_4->ilf_boffset;
  return 0;
 }
 return VAR_0;
}
