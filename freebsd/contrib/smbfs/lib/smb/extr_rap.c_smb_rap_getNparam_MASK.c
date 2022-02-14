
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct smb_rap {char* r_nparam; int r_npbuf; } ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (char*,char**,int*) ;

__attribute__((used)) static int
FUNC_2(struct smb_rap *VAR_1, long *VAR_2)
{
 char *VAR_3 = VAR_1->r_nparam;
 char VAR_4 = *VAR_3;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, &VAR_3, &VAR_6);
 if (VAR_5)
  return VAR_5;
 switch (VAR_4) {
     case 'h':
  *VAR_2 = FUNC_0(*(u_int16_t*)VAR_1->r_npbuf);
  break;
     default:
  return VAR_0;
 }
 VAR_1->r_npbuf += VAR_6;
 VAR_1->r_nparam = VAR_3;
 return 0;
}
