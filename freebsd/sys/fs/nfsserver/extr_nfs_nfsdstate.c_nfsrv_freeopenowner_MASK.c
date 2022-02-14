
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsstate {scalar_t__ ls_op; int ls_open; } ;
struct TYPE_2__ {int srvopenowners; } ;
typedef int NFSPROC_T ;


 struct nfsstate* FUNC_0 (int *) ;
 struct nfsstate* FUNC_1 (int *) ;
 struct nfsstate* FUNC_2 (struct nfsstate*,int ) ;
 int FUNC_3 (struct nfsstate*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct nfsstate*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct nfsstate*,int *,int,int *) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct nfsstate *VAR_4, int VAR_5, NFSPROC_T *VAR_6)
{
 struct nfsstate *VAR_7, *VAR_8;

 FUNC_3(VAR_4, VAR_1);



 VAR_7 = FUNC_1(&VAR_4->ls_open);
 while (VAR_7 != FUNC_0(&VAR_4->ls_open)) {
  VAR_8 = VAR_7;
  VAR_7 = FUNC_2(VAR_7, VAR_1);
  (void) FUNC_5(VAR_8, ((void*)0), VAR_5, VAR_6);
 }
 if (VAR_4->ls_op)
  FUNC_6(VAR_4->ls_op);
 FUNC_4(VAR_4, VAR_0);
 VAR_3--;
 VAR_2--;
}
