
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {struct smb_rap* r_sdata; struct smb_rap* r_sparam; } ;


 int FUNC_0 (struct smb_rap*) ;

void
FUNC_1(struct smb_rap *VAR_0)
{
 if (VAR_0->r_sparam)
  FUNC_0(VAR_0->r_sparam);
 if (VAR_0->r_sdata)
  FUNC_0(VAR_0->r_sdata);
 FUNC_0(VAR_0);
}
