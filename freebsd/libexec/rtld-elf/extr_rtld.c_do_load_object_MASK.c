
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct statfs {int f_flags; char* f_mntonname; } ;
struct stat {int dummy; } ;
struct TYPE_10__ {char* path; int mapsize; int dlopened; int mapbase; scalar_t__ textrel; int stack_flags; scalar_t__ z_noopen; int dynsymcount; int valid_hash_gnu; int valid_hash_sysv; } ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int ,TYPE_1__*,int ,int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int,struct statfs*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int,char*,struct stat*) ;
 int VAR_5 ;
 int FUNC_8 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static Obj_Entry *
FUNC_12(int VAR_10, const char *VAR_11, char *VAR_12, struct stat *VAR_13,
  int VAR_14)
{
    Obj_Entry *VAR_15;
    struct statfs VAR_16;





    if (VAR_4) {
 if (FUNC_5(VAR_10, &VAR_16) != 0) {
     FUNC_2("Cannot fstatfs \"%s\"", FUNC_11(VAR_12));
     return ((void*)0);
 }
 if (VAR_16.f_flags & VAR_0) {
     FUNC_2("Cannot execute objects on %s", VAR_16.f_mntonname);
     return ((void*)0);
 }
    }
    FUNC_3("loading \"%s\"", FUNC_11(VAR_12));
    VAR_15 = FUNC_7(VAR_10, FUNC_11(VAR_12), VAR_13);
    if (VAR_15 == ((void*)0))
        return ((void*)0);





    if (VAR_11 != ((void*)0))
 FUNC_10(VAR_15, VAR_11);
    VAR_15->path = VAR_12;
    FUNC_4(VAR_15, 0);
    FUNC_3("%s valid_hash_sysv %d valid_hash_gnu %d dynsymcount %d", VAR_15->path,
 VAR_15->valid_hash_sysv, VAR_15->valid_hash_gnu, VAR_15->dynsymcount);
    if (VAR_15->z_noopen && (VAR_14 & (VAR_1 | VAR_2)) ==
      VAR_1) {
 FUNC_3("refusing to load non-loadable \"%s\"", VAR_15->path);
 FUNC_2("Cannot dlopen non-loadable %s", VAR_15->path);
 FUNC_8(VAR_15->mapbase, VAR_15->mapsize);
 FUNC_9(VAR_15);
 return (((void*)0));
    }

    VAR_15->dlopened = (VAR_14 & VAR_1) != 0;
    FUNC_1(&VAR_8, VAR_15, VAR_6);
    VAR_7++;
    VAR_9++;
    FUNC_6(VAR_15);
    VAR_5 |= VAR_15->stack_flags;

    FUNC_3("  %p .. %p: %s", VAR_15->mapbase,
         VAR_15->mapbase + VAR_15->mapsize - 1, VAR_15->path);
    if (VAR_15->textrel)
 FUNC_3("  WARNING: %s has impure text", VAR_15->path);
    FUNC_0(VAR_3, VAR_15, VAR_15->mapbase, VAR_15->mapsize, 0,
 VAR_15->path);

    return VAR_15;
}
