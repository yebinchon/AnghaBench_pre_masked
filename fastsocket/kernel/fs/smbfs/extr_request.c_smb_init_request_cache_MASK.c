
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int,int ,int,int *) ;
 int * VAR_3 ;

int FUNC_1(void)
{
 VAR_3 = FUNC_0("smb_request",
           sizeof(struct smb_request), 0,
           VAR_2 | VAR_1,
           ((void*)0));
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 return 0;
}
