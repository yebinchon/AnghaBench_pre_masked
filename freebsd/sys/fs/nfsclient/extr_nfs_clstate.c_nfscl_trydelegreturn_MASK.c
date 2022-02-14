
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct nfsmount {int dummy; } ;
struct nfscldeleg {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct nfscldeleg*,struct ucred*,struct nfsmount*,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct nfscldeleg *VAR_4, struct ucred *VAR_5,
    struct nfsmount *VAR_6, NFSPROC_T *VAR_7)
{
 int VAR_8;

 do {
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 0);
  if (VAR_8 == VAR_2)
   (void) FUNC_1(VAR_3, VAR_8, "nfstrydp");
 } while (VAR_8 == VAR_2);
 if (VAR_8 == VAR_1 || VAR_8 == VAR_0) {

  FUNC_0(VAR_5);
  do {
   VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 1);
   if (VAR_8 == VAR_2)
    (void) FUNC_1(VAR_3, VAR_8, "nfstrydp");
  } while (VAR_8 == VAR_2);
 }
 return (VAR_8);
}
