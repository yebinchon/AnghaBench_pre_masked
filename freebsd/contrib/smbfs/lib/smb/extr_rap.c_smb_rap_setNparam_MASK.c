
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {char* r_nparam; long r_rcvbuflen; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char**,int*) ;
 int FUNC_1 (struct smb_rap*,char,int,long) ;

int
FUNC_2(struct smb_rap *VAR_1, long VAR_2)
{
 char *VAR_3 = VAR_1->r_nparam;
 char VAR_4 = *VAR_3;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, &VAR_3, &VAR_6);
 if (VAR_5)
  return VAR_5;
 switch (VAR_4) {
     case 'L':
  VAR_1->r_rcvbuflen = VAR_2;

     case 'W':
     case 'D':
     case 'b':
  VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_6, VAR_2);
  break;
     default:
  return VAR_0;
 }
 VAR_1->r_nparam = VAR_3;
 return 0;
}
