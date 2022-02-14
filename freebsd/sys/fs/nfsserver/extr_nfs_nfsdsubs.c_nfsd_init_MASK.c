
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfssessionhash {int dummy; } ;
struct nfslockhashhead {int dummy; } ;
struct nfsclienthashhead {int dummy; } ;
struct TYPE_2__ {int list; int mtx; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;

void
FUNC_5(void)
{
 int VAR_16;
 static int VAR_17 = 0;

 if (VAR_17)
  return;
 VAR_17 = 1;





 VAR_8 = FUNC_3(sizeof(struct nfsclienthashhead) *
     VAR_10, VAR_1, VAR_4 | VAR_5);
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
  FUNC_0(&VAR_8[VAR_16]);
 VAR_9 = FUNC_3(sizeof(struct nfslockhashhead) *
     VAR_12, VAR_2, VAR_4 | VAR_5);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  FUNC_0(&VAR_9[VAR_16]);
 VAR_15 = FUNC_3(sizeof(struct nfssessionhash) *
     VAR_14, VAR_3, VAR_4 | VAR_5);
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  FUNC_4(&VAR_15[VAR_16].mtx, "nfssm", ((void*)0), VAR_0);
  FUNC_0(&VAR_15[VAR_16].list);
 }
 FUNC_0(&VAR_11);
 FUNC_2(&VAR_13);


 FUNC_1(VAR_7, VAR_6);
}
