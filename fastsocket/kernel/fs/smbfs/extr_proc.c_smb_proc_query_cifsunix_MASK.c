
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_ldata; int rq_lparm; char* rq_parm; int * rq_data; scalar_t__ rq_flags; int rq_trans2_command; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct smb_request*) ;
 struct smb_request* FUNC_6 (struct smb_sb_info*,int) ;
 int FUNC_7 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_8(struct smb_sb_info *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 u64 VAR_7;
 char VAR_8[2];
 struct smb_request *VAR_9;

 VAR_4 = -VAR_0;
 if (! (VAR_9 = FUNC_6(VAR_3, 100)))
  goto out;

 FUNC_3(VAR_8, 0, VAR_1);

 VAR_9->rq_trans2_command = VAR_2;
 VAR_9->rq_ldata = 0;
 VAR_9->rq_data = ((void*)0);
 VAR_9->rq_lparm = 2;
 VAR_9->rq_parm = VAR_8;
 VAR_9->rq_flags = 0;
 VAR_4 = FUNC_5(VAR_9);
 if (VAR_4 < 0)
  goto out_free;

 if (VAR_9->rq_ldata < 12) {
  FUNC_2("Not enough data\n");
  goto out_free;
 }
 VAR_5 = FUNC_4(VAR_9->rq_data, 0);
 VAR_6 = FUNC_4(VAR_9->rq_data, 2);

 FUNC_0("Server implements CIFS Extensions for UNIX systems v%d.%d\n",
        VAR_5, VAR_6);


 VAR_7 = FUNC_1(VAR_9->rq_data, 4);
 FUNC_0("Server capabilities 0x%016llx\n", VAR_7);

out_free:
 FUNC_7(VAR_9);
out:
 return VAR_4;
}
