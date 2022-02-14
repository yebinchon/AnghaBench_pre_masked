
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ oa_flavor; } ;
struct svc_req {TYPE_1__ rq_cred; } ;
struct TYPE_5__ {int rq_bsize; int rq_bhardlimit; int rq_bsoftlimit; int rq_curblocks; scalar_t__ rq_ftimeleft; scalar_t__ rq_btimeleft; int rq_curfiles; int rq_fsoftlimit; int rq_fhardlimit; int rq_active; } ;
struct TYPE_6__ {TYPE_2__ gqr_rquota; } ;
struct getquota_rslt {TYPE_3__ getquota_rslt_u; int status; } ;
struct getquota_args {int gqa_pathp; int gqa_uid; } ;
struct dqblk {int dqb_bhardlimit; int dqb_bsoftlimit; int dqb_curblocks; scalar_t__ dqb_itime; scalar_t__ dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
typedef int getq_args ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct getquota_args*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,struct dqblk*) ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (int *,int ,struct getquota_args*) ;
 int FUNC_6 (int *,int ,struct getquota_args*) ;
 int FUNC_7 (int *,int ,struct getquota_rslt*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_11(struct svc_req *VAR_10, SVCXPRT *VAR_11)
{
 struct getquota_args VAR_12;
 struct getquota_rslt VAR_13;
 struct dqblk VAR_14;
 struct timeval VAR_15;
 int VAR_16;

 FUNC_0(&VAR_12, sizeof(VAR_12));
 if (!FUNC_6(VAR_11, (xdrproc_t)VAR_8, &VAR_12)) {
  FUNC_8(VAR_11);
  return;
 }
 if (VAR_10->rq_cred.oa_flavor != VAR_0) {

  VAR_13.status = VAR_3;
 } else if (!FUNC_3(VAR_7, VAR_12.gqa_uid, VAR_12.gqa_pathp, &VAR_14)) {

  VAR_13.status = VAR_4;
 } else {
  FUNC_4(&VAR_15, ((void*)0));
  VAR_13.status = VAR_5;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_active = VAR_6;
  VAR_16 = 1 << FUNC_2(VAR_14.dqb_bhardlimit >> 32);
  VAR_13.getquota_rslt_u.gqr_rquota.rq_bsize =
      VAR_1 * VAR_16;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_bhardlimit =
      VAR_14.dqb_bhardlimit / VAR_16;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_bsoftlimit =
      VAR_14.dqb_bsoftlimit / VAR_16;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_curblocks =
      VAR_14.dqb_curblocks / VAR_16;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_fhardlimit =
      VAR_14.dqb_ihardlimit;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_fsoftlimit =
      VAR_14.dqb_isoftlimit;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_curfiles =
      VAR_14.dqb_curinodes;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_btimeleft =
      VAR_14.dqb_btime - VAR_15.tv_sec;
  VAR_13.getquota_rslt_u.gqr_rquota.rq_ftimeleft =
      VAR_14.dqb_itime - VAR_15.tv_sec;
 }
 if (!FUNC_7(VAR_11, (xdrproc_t)VAR_9, &VAR_13))
  FUNC_9(VAR_11);
 if (!FUNC_5(VAR_11, (xdrproc_t)VAR_8, &VAR_12)) {
  FUNC_10(VAR_2, "unable to free arguments");
  FUNC_1(1);
 }
}
