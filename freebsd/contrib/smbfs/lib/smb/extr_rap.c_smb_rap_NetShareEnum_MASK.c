
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {int r_entries; } ;
struct smb_ctx {int dummy; } ;


 int FUNC_0 (int ,char*,char*,struct smb_rap**) ;
 int FUNC_1 (struct smb_rap*) ;
 int FUNC_2 (struct smb_rap*,int) ;
 int FUNC_3 (struct smb_rap*,long*) ;
 int FUNC_4 (struct smb_rap*,struct smb_ctx*) ;
 int FUNC_5 (struct smb_rap*,int) ;
 int FUNC_6 (struct smb_rap*,void*) ;

int
FUNC_7(struct smb_ctx *VAR_0, int VAR_1, void *VAR_2,
 int VAR_3, int *VAR_4, int *VAR_5)
{
 struct smb_rap *VAR_6;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(0, "WrLeh", "B13BWz", &VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_5(VAR_6, VAR_1);
 FUNC_6(VAR_6, VAR_2);
 FUNC_5(VAR_6, VAR_3);
 VAR_8 = FUNC_4(VAR_6, VAR_0);
 if (VAR_8 == 0) {
  *VAR_4 = VAR_6->r_entries;
  VAR_8 = FUNC_3(VAR_6, &VAR_7);
  *VAR_5 = VAR_7;
 }
 VAR_8 = FUNC_2(VAR_6, VAR_8);
 FUNC_1(VAR_6);
 return VAR_8;
}
