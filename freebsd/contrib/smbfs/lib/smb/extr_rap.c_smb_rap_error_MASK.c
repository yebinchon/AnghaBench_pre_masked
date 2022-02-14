
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {int r_result; } ;


 int VAR_0 ;

int
FUNC_0(struct smb_rap *VAR_1, int VAR_2)
{
 if (VAR_2)
  return VAR_2;
 if (VAR_1->r_result == 0)
  return 0;
 return VAR_1->r_result | VAR_0;
}
