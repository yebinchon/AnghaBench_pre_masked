
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int const max_xmit; } ;
struct smb_sb_info {TYPE_1__ opt; } ;
struct smb_request {int const rq_lparm; unsigned char* rq_data; int const rq_ldata; int rq_bufsize; int* rq_header; int const rq_trans2_command; int rq_iovlen; unsigned char* rq_parm; int rq_slen; int rq_setup_read; TYPE_2__* rq_iov; struct smb_sb_info* rq_server; } ;
struct TYPE_4__ {unsigned char* iov_base; int iov_len; } ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int ,int const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct smb_request*,int ,int const,int const) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_4(struct smb_request *VAR_18)
{
 struct smb_sb_info *VAR_19 = VAR_18->rq_server;
 int VAR_20, VAR_21;
 static unsigned char VAR_22[4];




 const int VAR_23 = 15;
 const int VAR_24 = VAR_1 + 2 * VAR_23 + 2;
 const int VAR_25 = FUNC_0(VAR_24 + 3, sizeof(u32));
 const int VAR_26 = FUNC_0(VAR_25 + VAR_18->rq_lparm, sizeof(u32));
 const int VAR_27 = (VAR_18->rq_data ? VAR_26 + VAR_18->rq_ldata :
     VAR_25 + VAR_18->rq_lparm) - VAR_24;

 if ((VAR_27 + VAR_25) > VAR_19->opt.max_xmit)
  return -VAR_0;
 FUNC_3(VAR_18, VAR_3, VAR_23, VAR_27);
 VAR_20 = VAR_2;
 VAR_21 = VAR_18->rq_bufsize - VAR_20;

 VAR_21 = VAR_19->opt.max_xmit - VAR_20 - 100;
 if (VAR_21 < 1024) {
  VAR_21 = 1024;
  VAR_20 = 20;
 }
 FUNC_2(VAR_18->rq_header, VAR_17, VAR_18->rq_lparm);
 FUNC_2(VAR_18->rq_header, VAR_15, VAR_18->rq_ldata);
 FUNC_2(VAR_18->rq_header, VAR_8, VAR_20);
 FUNC_2(VAR_18->rq_header, VAR_7, VAR_21);
 FUNC_2(VAR_18->rq_header, VAR_9, 0);
 FUNC_2(VAR_18->rq_header, VAR_6, 0);
 FUNC_1(VAR_18->rq_header, VAR_16, 0);
 FUNC_2(VAR_18->rq_header, VAR_10, VAR_18->rq_lparm);
 FUNC_2(VAR_18->rq_header, VAR_11, VAR_25 - 4);
 FUNC_2(VAR_18->rq_header, VAR_4, VAR_18->rq_ldata);
 FUNC_2(VAR_18->rq_header, VAR_5, VAR_18->rq_data ? VAR_26 - 4 : 0);
 *(VAR_18->rq_header + VAR_14) = 0x01;
 *(VAR_18->rq_header + VAR_14 + 1) = 0x00;
 FUNC_2(VAR_18->rq_header, VAR_12, VAR_18->rq_trans2_command);

 VAR_18->rq_iovlen = 2;
 VAR_18->rq_iov[0].iov_base = (void *) VAR_18->rq_header;
 VAR_18->rq_iov[0].iov_len = VAR_25;
 VAR_18->rq_iov[1].iov_base = (VAR_18->rq_parm==((void*)0)) ? VAR_22 : VAR_18->rq_parm;
 VAR_18->rq_iov[1].iov_len = VAR_18->rq_lparm;
 VAR_18->rq_slen = VAR_25 + VAR_18->rq_lparm;

 if (VAR_18->rq_data) {
  VAR_18->rq_iovlen += 2;
  VAR_18->rq_iov[2].iov_base = VAR_22;
  VAR_18->rq_iov[2].iov_len = VAR_26 - VAR_25 - VAR_18->rq_lparm;
  VAR_18->rq_iov[3].iov_base = VAR_18->rq_data;
  VAR_18->rq_iov[3].iov_len = VAR_18->rq_ldata;
  VAR_18->rq_slen = VAR_26 + VAR_18->rq_ldata;
 }


 VAR_18->rq_setup_read = VAR_13;

 return 0;
}
