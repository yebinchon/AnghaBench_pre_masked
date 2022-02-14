
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct smb_sb_info {TYPE_2__* mnt; TYPE_1__ opt; } ;
struct smb_request {int* rq_header; int rq_iovlen; int* rq_buffer; TYPE_3__* rq_iov; struct smb_sb_info* rq_server; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;
struct TYPE_6__ {int* iov_base; scalar_t__ iov_len; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,char,int) ;
 int* FUNC_2 (int*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__u8 *
FUNC_3(struct smb_request *VAR_9, __u8 VAR_10, __u16 VAR_11, __u16 VAR_12)
{
 __u32 VAR_13 = VAR_4 + VAR_11 * sizeof(__u16) + VAR_12 + 2;
 __u8 *VAR_14 = VAR_9->rq_header;
 struct smb_sb_info *VAR_15 = VAR_9->rq_server;

 VAR_14 = FUNC_2(VAR_14, VAR_13 - 4);

 *VAR_14++ = 0xff;
 *VAR_14++ = 'S';
 *VAR_14++ = 'M';
 *VAR_14++ = 'B';
 *VAR_14++ = VAR_10;

 FUNC_1(VAR_14, '\0', 19);
 VAR_14 += 19;
 VAR_14 += 8;

 if (VAR_15->opt.protocol > VAR_6) {
  int VAR_16 = VAR_3;
  int VAR_17 = VAR_1 |
   VAR_0;

  *(VAR_9->rq_header + VAR_7) = VAR_16;
  if (VAR_15->mnt->flags & VAR_5)
   VAR_17 |= VAR_2;
  FUNC_0(VAR_9->rq_header, VAR_8, VAR_17);
 }
 *VAR_14++ = VAR_11;
 VAR_14 += 2 * VAR_11;
 FUNC_0(VAR_14, 0, VAR_12);


 VAR_9->rq_iovlen = 1;
 VAR_9->rq_iov[0].iov_base = VAR_9->rq_header;
 VAR_9->rq_iov[0].iov_len = VAR_13 - VAR_12;

 return VAR_9->rq_buffer;
}
