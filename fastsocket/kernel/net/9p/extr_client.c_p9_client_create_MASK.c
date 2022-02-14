
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_client {scalar_t__ msize; TYPE_1__* trans_mod; int dotu; int * fidpool; int fidlist; int lock; int * trans; } ;
struct TYPE_2__ {int (* create ) (struct p9_client*,char const*,char*) ;scalar_t__ maxsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_client* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 struct p9_client* FUNC_5 (int,int ) ;
 int FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_client*) ;
 int * FUNC_8 () ;
 int FUNC_9 (struct p9_client*) ;
 int FUNC_10 (char*,struct p9_client*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct p9_client*,char const*,char*) ;
 TYPE_1__* FUNC_13 () ;

struct p9_client *FUNC_14(const char *VAR_6, char *VAR_7)
{
 int VAR_8;
 struct p9_client *VAR_9;

 VAR_8 = 0;
 VAR_9 = FUNC_5(sizeof(struct p9_client), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->trans_mod = ((void*)0);
 VAR_9->trans = ((void*)0);
 FUNC_11(&VAR_9->lock);
 FUNC_1(&VAR_9->fidlist);
 VAR_9->fidpool = FUNC_8();
 if (FUNC_2(VAR_9->fidpool)) {
  VAR_8 = FUNC_4(VAR_9->fidpool);
  VAR_9->fidpool = ((void*)0);
  goto error;
 }

 FUNC_9(VAR_9);

 VAR_8 = FUNC_10(VAR_7, VAR_9);
 if (VAR_8 < 0)
  goto error;

 if (!VAR_9->trans_mod)
  VAR_9->trans_mod = FUNC_13();

 if (VAR_9->trans_mod == ((void*)0)) {
  VAR_8 = -VAR_1;
  FUNC_3(VAR_3,
    "No transport defined or default transport\n");
  goto error;
 }

 FUNC_3(VAR_4, "clnt %p trans %p msize %d dotu %d\n",
  VAR_9, VAR_9->trans_mod, VAR_9->msize, VAR_9->dotu);

 VAR_8 = VAR_9->trans_mod->create(VAR_9, VAR_6, VAR_7);
 if (VAR_8)
  goto error;

 if ((VAR_9->msize+VAR_5) > VAR_9->trans_mod->maxsize)
  VAR_9->msize = VAR_9->trans_mod->maxsize-VAR_5;

 VAR_8 = FUNC_7(VAR_9);
 if (VAR_8)
  goto error;

 return VAR_9;

error:
 FUNC_6(VAR_9);
 return FUNC_0(VAR_8);
}
