
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dirent {scalar_t__ d_fileno; int d_name; } ;
struct TYPE_9__ {int refCount; } ;
struct TYPE_8__ {int refCount; int files; scalar_t__ hits; int name; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;
typedef int * Lst ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*,int ) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_11 (int ,char*,...) ;
 int * VAR_5 ;
 int FUNC_12 (char const*) ;
 struct dirent* FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char const*,char*) ;

Path *
FUNC_15(Lst VAR_6, const char *VAR_7)
{
    LstNode VAR_8 = ((void*)0);
    Path *VAR_9 = ((void*)0);
    VAR_0 *VAR_2;
    struct dirent *VAR_10;

    if (FUNC_14(VAR_7, ".DOTLAST") == 0) {
 VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_1);
 if (VAR_8 != ((void*)0))
     return (Path *)FUNC_5(VAR_8);
 else {
     VAR_4->refCount += 1;
     (void)FUNC_4(VAR_6, VAR_4);
 }
    }

    if (VAR_6)
 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_1);
    if (VAR_8 != ((void*)0)) {
 VAR_9 = (Path *)FUNC_5(VAR_8);
 if (VAR_6 && FUNC_7(VAR_6, VAR_9) == ((void*)0)) {
     VAR_9->refCount += 1;
     (void)FUNC_3(VAR_6, VAR_9);
 }
    } else {
 if (FUNC_0(VAR_0)) {
     FUNC_11(VAR_3, "Caching %s ...", VAR_7);
 }

 if ((VAR_2 = FUNC_12(VAR_7)) != ((void*)0)) {
     VAR_9 = FUNC_8(sizeof(Path));
     VAR_9->name = FUNC_9(VAR_7);
     VAR_9->hits = 0;
     VAR_9->refCount = 1;
     FUNC_2(&VAR_9->files, -1);

     while ((VAR_10 = FUNC_13(VAR_2)) != ((void*)0)) {
  (void)FUNC_1(&VAR_9->files, VAR_10->d_name, ((void*)0));
     }
     (void)FUNC_10(VAR_2);
     (void)FUNC_3(VAR_5, VAR_9);
     if (VAR_6 != ((void*)0))
  (void)FUNC_3(VAR_6, VAR_9);
 }
 if (FUNC_0(VAR_0)) {
     FUNC_11(VAR_3, "done\n");
 }
    }
    return VAR_9;
}
