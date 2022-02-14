
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
struct uufsd {scalar_t__ d_bsize; int d_fd; } ;
typedef int off_t ;


 int FUNC_0 (struct uufsd*,char*) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct uufsd *VAR_0, ufs2_daddr_t VAR_1, ufs2_daddr_t VAR_2)
{
 char *VAR_3;
 off_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_1 * VAR_0->d_bsize;
 VAR_5 = 65536 * VAR_0->d_bsize;
 VAR_3 = FUNC_1(1, VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, "failed to allocate memory");
  return (-1);
 }
 while (VAR_2 > 0) {
  VAR_6 = VAR_2;
  if (VAR_6 > VAR_5)
   VAR_6 = VAR_5;
  VAR_7 = FUNC_3(VAR_0->d_fd, VAR_3, VAR_6, VAR_4);
  if (VAR_7 == -1) {
   FUNC_0(VAR_0, "failed writing to disk");
   break;
  }
  VAR_2 -= VAR_7;
  VAR_4 += VAR_7;
  VAR_7 = 0;
 }
 FUNC_2(VAR_3);
 return (VAR_7);
}
