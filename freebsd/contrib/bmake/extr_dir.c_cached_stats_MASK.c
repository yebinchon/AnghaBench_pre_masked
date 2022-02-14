
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mtime; int st_mode; } ;
struct cache_st {int mtime; int mode; } ;
struct TYPE_4__ {struct cache_st* clientPtr; } ;
typedef int Hash_Table ;
typedef TYPE_1__ Hash_Entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,char const*,int *) ;
 TYPE_1__* FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int) ;
 struct cache_st* FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,char*,char const*) ;
 int FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (struct stat*,int ,int) ;
 int FUNC_8 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_9(Hash_Table *VAR_4, const char *VAR_5, struct stat *VAR_6, int VAR_7)
{
    Hash_Entry *VAR_8;
    struct cache_st *VAR_9;
    int VAR_10;

    if (!VAR_5 || !VAR_5[0])
 return -1;

    VAR_8 = FUNC_2(VAR_4, VAR_5);

    if (VAR_8 && (VAR_7 & VAR_1) == 0) {
 VAR_9 = VAR_8->clientPtr;

 FUNC_7(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->st_mtime = VAR_9->mtime;
 VAR_6->st_mode = VAR_9->mode;
        if (FUNC_0(VAR_2)) {
            FUNC_5(VAR_3, "Using cached time %s for %s\n",
  FUNC_3(VAR_6->st_mtime), VAR_5);
 }
 return 0;
    }

    VAR_10 = (VAR_7 & VAR_0) ? FUNC_6(VAR_5, VAR_6) : FUNC_8(VAR_5, VAR_6);
    if (VAR_10 == -1)
 return -1;

    if (VAR_6->st_mtime == 0)
 VAR_6->st_mtime = 1;

    if (!VAR_8)
 VAR_8 = FUNC_1(VAR_4, VAR_5, ((void*)0));
    if (!VAR_8->clientPtr)
 VAR_8->clientPtr = FUNC_4(sizeof(*VAR_9));
    VAR_9 = VAR_8->clientPtr;
    VAR_9->mtime = VAR_6->st_mtime;
    VAR_9->mode = VAR_6->st_mode;
    if (FUNC_0(VAR_2)) {
 FUNC_5(VAR_3, "   Caching %s for %s\n",
     FUNC_3(VAR_6->st_mtime), VAR_5);
    }

    return 0;
}
