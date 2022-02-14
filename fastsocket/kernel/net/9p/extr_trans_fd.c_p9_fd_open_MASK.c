
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_fd {void* wr; void* rd; } ;
struct p9_client {int status; struct p9_trans_fd* trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct p9_trans_fd*) ;
 struct p9_trans_fd* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct p9_client *VAR_4, int VAR_5, int VAR_6)
{
 struct p9_trans_fd *VAR_7 = FUNC_3(sizeof(struct p9_trans_fd),
        VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->rd = FUNC_0(VAR_5);
 VAR_7->wr = FUNC_0(VAR_6);
 if (!VAR_7->rd || !VAR_7->wr) {
  if (VAR_7->rd)
   FUNC_1(VAR_7->rd);
  if (VAR_7->wr)
   FUNC_1(VAR_7->wr);
  FUNC_2(VAR_7);
  return -VAR_1;
 }

 VAR_4->trans = VAR_7;
 VAR_4->status = VAR_0;

 return 0;
}
