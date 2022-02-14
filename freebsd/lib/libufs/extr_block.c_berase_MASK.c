
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct uufsd {int dummy; } ;


 int FUNC_0 (struct uufsd*,char*) ;
 int FUNC_1 (struct uufsd*,int ,int ) ;
 int FUNC_2 (struct uufsd*) ;

int
FUNC_3(struct uufsd *VAR_0, ufs2_daddr_t VAR_1, ufs2_daddr_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, ((void*)0));
 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 == -1) {
  FUNC_0(VAR_0, "failed to open disk for writing");
  return(VAR_3);
 }
 return (FUNC_1(VAR_0, VAR_1, VAR_2));
}
