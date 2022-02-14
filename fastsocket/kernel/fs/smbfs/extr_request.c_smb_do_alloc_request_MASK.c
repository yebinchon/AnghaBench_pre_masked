
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {unsigned char* rq_buffer; int rq_bufsize; int rq_count; int rq_queue; int rq_wait; struct smb_sb_info* rq_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct smb_request*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,struct smb_request*) ;
 struct smb_request* FUNC_6 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct smb_request *FUNC_7(struct smb_sb_info *VAR_3,
      int VAR_4)
{
 struct smb_request *VAR_5;
 unsigned char *VAR_6 = ((void*)0);

 VAR_5 = FUNC_6(VAR_2, VAR_0);
 FUNC_1("allocating request: %p\n", VAR_5);
 if (!VAR_5)
  goto out;

 if (VAR_4 > 0) {
  VAR_6 = FUNC_4(VAR_4, VAR_1);
  if (!VAR_6) {
   FUNC_5(VAR_2, VAR_5);
   return ((void*)0);
  }
 }

 VAR_5->rq_buffer = VAR_6;
 VAR_5->rq_bufsize = VAR_4;
 VAR_5->rq_server = VAR_3;
 FUNC_3(&VAR_5->rq_wait);
 FUNC_0(&VAR_5->rq_queue);
 FUNC_2(&VAR_5->rq_count, 1);

out:
 return VAR_5;
}
