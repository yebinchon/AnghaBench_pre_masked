
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bulk_read; } ;
struct TYPE_4__ {scalar_t__ buf; } ;
struct ubifs_info {int bulk_read; scalar_t__ max_bu_buf_len; TYPE_1__ mount_opts; TYPE_2__ bu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_3)
{
 FUNC_1(VAR_3->bulk_read == 1);

 if (VAR_3->bu.buf)
  return;

again:
 VAR_3->bu.buf = FUNC_0(VAR_3->max_bu_buf_len, VAR_0 | VAR_2);
 if (!VAR_3->bu.buf) {
  if (VAR_3->max_bu_buf_len > VAR_1) {
   VAR_3->max_bu_buf_len = VAR_1;
   goto again;
  }


  FUNC_2("Cannot allocate %d bytes of memory for bulk-read, "
      "disabling it", VAR_3->max_bu_buf_len);
  VAR_3->mount_opts.bulk_read = 1;
  VAR_3->bulk_read = 0;
  return;
 }
}
