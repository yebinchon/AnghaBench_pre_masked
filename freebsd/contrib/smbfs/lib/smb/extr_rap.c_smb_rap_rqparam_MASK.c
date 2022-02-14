
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {char* r_npbuf; int r_plen; } ;


 int VAR_0 ;
 int FUNC_0 (char*,long,char) ;
 int FUNC_1 (char*,int ,long) ;
 int FUNC_2 (char*,int ,long) ;

__attribute__((used)) static int
FUNC_3(struct smb_rap *VAR_1, char VAR_2, char VAR_3, long VAR_4)
{
 char *VAR_5 = VAR_1->r_npbuf;
 int VAR_6;

 switch (VAR_2) {
     case 'L':
     case 'W':
  FUNC_2(VAR_5, 0, VAR_4);
  VAR_6 = 2;
  break;
     case 'D':
  FUNC_1(VAR_5, 0, VAR_4);
  VAR_6 = 4;
  break;
     case 'b':
  FUNC_0(VAR_5, VAR_4, VAR_3);
  VAR_6 = VAR_3;
     default:
  return VAR_0;
 }
 VAR_1->r_npbuf += VAR_6;
 VAR_1->r_plen += VAR_6;
 return 0;
}
