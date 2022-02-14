
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_11__ {int handle; } ;
struct TYPE_12__ {TYPE_1__ file; } ;
struct TYPE_13__ {TYPE_2__ sources; int name; int bad; scalar_t__ total; TYPE_4__* ent; int type; int magic; } ;
typedef TYPE_3__ isc_entropysource_t ;
struct TYPE_14__ {int lock; int mctx; int nsources; int sources; } ;
typedef TYPE_4__ isc_entropy_t ;
typedef int HCRYPTPROV ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,TYPE_3__*,int) ;
 int VAR_8 ;
 int FUNC_11 (int ,int ,int) ;

isc_result_t
FUNC_12(isc_entropy_t *VAR_9, const char *VAR_10) {
 isc_result_t VAR_11;
 isc_entropysource_t *VAR_12;
 HCRYPTPROV VAR_13;
 DWORD VAR_14;
 BOOL VAR_15;

 FUNC_6(FUNC_8(VAR_9));
 FUNC_6(VAR_10 != ((void*)0));

 FUNC_5(&VAR_9->lock);

 VAR_12 = ((void*)0);




 VAR_15 = FUNC_0(&VAR_13, ((void*)0), ((void*)0), VAR_6,
      VAR_0);
 if (!VAR_15){
  VAR_14 = FUNC_2();
  VAR_11 = VAR_3;
  goto errout;
 }

 VAR_12 = FUNC_9(VAR_9->mctx, sizeof(isc_entropysource_t));
 if (VAR_12 == ((void*)0)) {
  VAR_11 = VAR_4;
  goto closecontext;
 }




 VAR_12->magic = VAR_7;
 VAR_12->type = VAR_1;
 VAR_12->ent = VAR_9;
 VAR_12->total = 0;
 VAR_12->bad = VAR_2;
 FUNC_11(VAR_12->name, 0, sizeof(VAR_12->name));
 FUNC_3(VAR_12, VAR_8);
 VAR_12->sources.file.handle = VAR_13;




 FUNC_4(VAR_9->sources, VAR_12, VAR_8);
 VAR_9->nsources++;

 FUNC_7(&VAR_9->lock);
 return (VAR_5);

 closecontext:
 FUNC_1(VAR_13, 0);

 errout:
 if (VAR_12 != ((void*)0))
  FUNC_10(VAR_9->mctx, VAR_12, sizeof(isc_entropysource_t));

 FUNC_7(&VAR_9->lock);

 return (VAR_11);
}
