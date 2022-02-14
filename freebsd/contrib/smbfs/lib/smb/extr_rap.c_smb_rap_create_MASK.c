
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {char* r_sparam; char* r_nparam; char* r_sdata; char* r_ndata; void* r_npbuf; void* r_pbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_rap*,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char**,int*) ;
 int FUNC_3 (struct smb_rap*,char,int,int) ;
 int FUNC_4 (struct smb_rap*,char*) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(int VAR_1, const char *VAR_2, const char *VAR_3,
 struct smb_rap **VAR_4)
{
 struct smb_rap *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return VAR_0;
 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_6 = VAR_5->r_sparam = VAR_5->r_nparam = FUNC_5(VAR_2);
 VAR_5->r_sdata = VAR_5->r_ndata = FUNC_5(VAR_3);



 VAR_8 = 2 + FUNC_6(VAR_2) + 1 + FUNC_6(VAR_3) + 1;

 while (*VAR_6) {
  if (FUNC_2(VAR_6, &VAR_6, &VAR_7) != 0)
   break;
  VAR_8 += VAR_7;
 }
 VAR_5->r_pbuf = VAR_5->r_npbuf = FUNC_1(VAR_8);
 FUNC_3(VAR_5, 'W', 1, VAR_1);
 FUNC_4(VAR_5, VAR_5->r_sparam);
 FUNC_4(VAR_5, VAR_5->r_sdata);
 *VAR_4 = VAR_5;
 return 0;
}
