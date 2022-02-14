
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {size_t* subs; int len; } ;
struct lmodule {int flags; struct lmodule* path; int * handle; TYPE_2__* config; TYPE_1__ index; int section; } ;
struct TYPE_4__ {int (* init ) (struct lmodule*,int,char**) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lmodule*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct lmodule*,int ) ;
 int FUNC_2 (int *,struct lmodule*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * FUNC_5 (struct lmodule*,int) ;
 TYPE_2__* FUNC_6 (int *,char*) ;
 int FUNC_7 (struct lmodule*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct lmodule* FUNC_8 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 int VAR_13 ;
 struct lmodule* FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,int) ;
 size_t FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char*,char const*,size_t) ;
 int FUNC_13 (struct lmodule*,int,char**) ;
 int FUNC_14 (int ,char*,...) ;

struct lmodule *
FUNC_15(const char *VAR_14, const char *VAR_15)
{
 struct lmodule *VAR_16;
 int VAR_17;
 int VAR_18;
 char *VAR_19[VAR_4 + 1];
 int VAR_20;
 u_int VAR_21;

 if ((VAR_16 = FUNC_8(sizeof(*VAR_16))) == ((void*)0)) {
  FUNC_14(VAR_2, "lm_load: %m");
  return (((void*)0));
 }
 VAR_16->handle = ((void*)0);
 VAR_16->flags = 0;
 FUNC_10(VAR_16->section, VAR_15, sizeof(VAR_16->section));

 if ((VAR_16->path = FUNC_9(VAR_14)) == ((void*)0)) {
  FUNC_14(VAR_2, "lm_load: %m");
  goto err;
 }




 VAR_16->index.subs[0] = FUNC_11(VAR_15);
 VAR_16->index.len = VAR_16->index.subs[0] + 1;
 for (VAR_21 = 0; VAR_21 < VAR_16->index.subs[0]; VAR_21++)
  VAR_16->index.subs[VAR_21 + 1] = VAR_15[VAR_21];




 if ((VAR_16->handle = FUNC_5(VAR_16->path, VAR_6|VAR_5)) == ((void*)0)) {
  FUNC_14(VAR_2, "lm_load: open %s", FUNC_4());
  goto err;
 }

 if ((VAR_16->config = FUNC_6(VAR_16->handle, "config")) == ((void*)0)) {
  FUNC_14(VAR_2, "lm_load: no 'config' symbol %s", FUNC_4());
  goto err;
 }




 FUNC_0(VAR_16, &VAR_9);


 if (VAR_7 == VAR_0) {
  VAR_16->flags |= VAR_1;
  FUNC_1(&VAR_10, VAR_16, VAR_13);
 }




 VAR_20 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  if (FUNC_11(VAR_12[VAR_18]) >= FUNC_11(VAR_15) + 1 &&
      FUNC_12(VAR_12[VAR_18], VAR_15, FUNC_11(VAR_15)) == 0 &&
      VAR_12[VAR_18][FUNC_11(VAR_15)] == ':') {
   if (VAR_20 == VAR_4) {
    FUNC_14(VAR_3, "too many arguments for "
        "module '%s", VAR_15);
    break;
   }
   VAR_19[VAR_20++] = &VAR_12[VAR_18][FUNC_11(VAR_15)+1];
  }
 }
 VAR_19[VAR_20] = ((void*)0);




 if ((VAR_17 = (*VAR_16->config->init)(VAR_16, VAR_20, VAR_19)) != 0) {
  FUNC_14(VAR_2, "lm_load: init failed: %d", VAR_17);
  FUNC_2(&VAR_9, VAR_16, VAR_8);
  goto err;
 }

 return (VAR_16);

  err:
 if ((VAR_16->flags & VAR_1) != 0)
  FUNC_2(&VAR_10, VAR_16, VAR_13);
 if (VAR_16->handle)
  FUNC_3(VAR_16->handle);
 FUNC_7(VAR_16->path);
 FUNC_7(VAR_16);
 return (((void*)0));
}
