
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateid {int st_access_bmap; int st_file; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static inline void FUNC_4(struct nfs4_stateid *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < 4; VAR_2++) {
  if (FUNC_3(VAR_2, &VAR_0->st_access_bmap)
     && ((VAR_2 & VAR_1) != VAR_2)) {
   FUNC_2(VAR_0->st_file, FUNC_1(VAR_2));
   FUNC_0(VAR_2, &VAR_0->st_access_bmap);
  }
 }
}
