
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long ufs2_daddr_t ;
typedef long off_t ;


 int VAR_0 ;
 long FUNC_0 (int ,long) ;
 int VAR_1 ;
 char* FUNC_1 (int ,int) ;
 long VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,long,int ) ;
 int FUNC_4 (char*,long) ;
 long FUNC_5 (int,char*,long) ;

void
FUNC_6(int VAR_3, ufs2_daddr_t VAR_4, long VAR_5)
{
 static char *VAR_6;
 off_t VAR_7, VAR_8;

 if (VAR_3 < 0)
  return;
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_1, 1);
  if (VAR_6 == ((void*)0))
   FUNC_2(VAR_0, "cannot allocate buffer pool");
 }
 VAR_7 = VAR_4 * VAR_2;
 if (FUNC_3(VAR_3, VAR_7, 0) < 0)
  FUNC_4("SEEK BLK", VAR_4);
 while (VAR_5 > 0) {
  VAR_8 = FUNC_0(VAR_1, VAR_5);
  if (FUNC_5(VAR_3, VAR_6, VAR_8) != VAR_8)
   FUNC_4("WRITE BLK", VAR_4);
  VAR_4 += VAR_8 / VAR_2;
  VAR_5 -= VAR_8;
 }
}
