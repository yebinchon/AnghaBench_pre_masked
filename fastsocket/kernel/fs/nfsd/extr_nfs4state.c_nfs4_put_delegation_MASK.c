
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {int dl_file; int dl_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct nfs4_delegation*) ;
 int FUNC_2 (int ,struct nfs4_delegation*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct nfs4_delegation *VAR_2)
{
 if (FUNC_0(&VAR_2->dl_count)) {
  FUNC_1("NFSD: freeing dp %p\n",VAR_2);
  FUNC_3(VAR_2->dl_file);
  FUNC_2(VAR_0, VAR_2);
  VAR_1--;
 }
}
