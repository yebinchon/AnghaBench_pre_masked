
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_module {int im_iser; int im_priority; int (* im_limits ) (struct icl_drv_limits*) ;struct icl_conn* (* im_new_conn ) (char const*,struct mtx*) ;int im_name; } ;
struct TYPE_2__ {int sc_lock; int sc_modules; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct icl_module*,int ) ;
 struct icl_module* FUNC_3 (char const*,int,int) ;
 int VAR_4 ;
 struct icl_module* FUNC_4 (int,int ,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(const char *VAR_6, bool VAR_7, int VAR_8,
    int (*VAR_9)(struct icl_drv_limits *),
    struct icl_conn *(*VAR_10)(const char *, struct mtx *))
{
 struct icl_module *VAR_11;

 FUNC_6(&VAR_5->sc_lock);
 VAR_11 = FUNC_3(VAR_6, VAR_7, 1);
 if (VAR_11 != ((void*)0)) {
  FUNC_1("offload \"%s\" already registered", VAR_6);
  FUNC_7(&VAR_5->sc_lock);
  return (VAR_0);
 }

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1, VAR_3 | VAR_2);
 VAR_11->im_name = FUNC_5(VAR_6, VAR_1);
 VAR_11->im_iser = VAR_7;
 VAR_11->im_priority = VAR_8;
 VAR_11->im_limits = VAR_9;
 VAR_11->im_new_conn = VAR_10;

 FUNC_2(&VAR_5->sc_modules, VAR_11, VAR_4);
 FUNC_7(&VAR_5->sc_lock);

 FUNC_0("offload \"%s\" registered", VAR_6);
 return (0);
}
