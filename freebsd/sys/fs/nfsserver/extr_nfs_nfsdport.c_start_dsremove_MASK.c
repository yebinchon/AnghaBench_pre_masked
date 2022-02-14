
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsrvdsremove {int done; int err; int p; int tcred; int fname; int dvp; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct nfsrvdsremove *VAR_2;

 VAR_2 = (struct nfsrvdsremove *)VAR_0;
 VAR_2->err = FUNC_1(VAR_2->dvp, VAR_2->fname, VAR_2->tcred,
     VAR_2->p);
 VAR_2->done = 1;
 FUNC_0(4, "start_dsremove: err=%d\n", VAR_2->err);
}
