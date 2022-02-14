
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {scalar_t__ state; scalar_t__ rstate; int xmitq; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (struct smb_sb_info*) ;
 int FUNC_4 (struct smb_sb_info*) ;
 int VAR_4 ;
 int FUNC_5 (struct smb_sb_info*) ;
 int FUNC_6 (struct smb_sb_info*) ;

__attribute__((used)) static void FUNC_7(struct smb_sb_info *VAR_5)
{
 int VAR_6;
 int VAR_7 = 7;

 if (VAR_5->state != VAR_1)
  goto out;

 do {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 < 0) {
   VAR_5->state = VAR_0;
   FUNC_6(VAR_5);
   goto out;
  } else if (VAR_5->rstate == VAR_3)
   FUNC_5(VAR_5);
 } while (VAR_6 > 0 && VAR_7-- > 0);




 if (VAR_5->state != VAR_1)
  goto out;
 if (FUNC_2(VAR_5) > 0)
  FUNC_1(VAR_2, &VAR_4);

 do {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 < 0) {
   VAR_5->state = VAR_0;
   FUNC_6(VAR_5);
   goto out;
  }
 } while (VAR_6 > 0);




 if (!FUNC_0(&VAR_5->xmitq))
  FUNC_1(VAR_2, &VAR_4);

out:
 return;
}
