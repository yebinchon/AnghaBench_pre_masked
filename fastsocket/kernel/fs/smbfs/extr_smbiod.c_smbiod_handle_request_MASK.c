
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int rstate; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct smb_sb_info *VAR_1)
{
 FUNC_0("smbiod got a request ... and we don't implement oplocks!\n");
 VAR_1->rstate = VAR_0;
}
