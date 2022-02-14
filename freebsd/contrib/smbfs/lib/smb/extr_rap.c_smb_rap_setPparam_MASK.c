
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {char* r_nparam; void* r_rcvbuf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char**,int*) ;

int
FUNC_1(struct smb_rap *VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_1->r_nparam;
 char VAR_4 = *VAR_3;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, &VAR_3, &VAR_6);
 if (VAR_5)
  return VAR_5;
 switch (VAR_4) {
     case 'r':
  VAR_1->r_rcvbuf = VAR_2;
  break;
     default:
  return VAR_0;
 }
 VAR_1->r_nparam = VAR_3;
 return 0;
}
