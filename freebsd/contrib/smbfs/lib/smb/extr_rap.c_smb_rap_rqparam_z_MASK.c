
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rap {int r_npbuf; int r_plen; } ;


 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct smb_rap *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1) + 1;

 FUNC_0(VAR_1, VAR_0->r_npbuf, VAR_2);
 VAR_0->r_npbuf += VAR_2;
 VAR_0->r_plen += VAR_2;
 return 0;
}
