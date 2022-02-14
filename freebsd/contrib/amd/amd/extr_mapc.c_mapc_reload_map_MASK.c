
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
typedef scalar_t__ time_t ;
struct TYPE_7__ {int (* mtime ) (TYPE_1__*,int ,scalar_t__*) ;scalar_t__ modify; scalar_t__ reloads; int (* reload ) (TYPE_1__*,int ,int ) ;int * wildcard; int map_name; scalar_t__ kvhash; scalar_t__ nentries; } ;
typedef TYPE_1__ mnt_map ;
typedef int kv ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_1__*,int ,int **) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,char*,scalar_t__,...) ;
 int FUNC_8 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(mnt_map *VAR_7)
{
  int VAR_8, VAR_9 = 0;
  kv *VAR_10[VAR_0];
  time_t VAR_11;

  VAR_8 = (*VAR_7->mtime) (VAR_7, VAR_7->map_name, &VAR_11);
  if (VAR_8) {
    VAR_11 = VAR_7->modify;
  }





  if (VAR_7->reloads != 0 && VAR_4 != 0) {
    if (VAR_11 <= VAR_7->modify) {
      FUNC_7(VAR_3, "reload of map %s is not needed (in sync)", VAR_7->map_name);
      FUNC_1("map %s last load time is %d, last modify time is %d",
    VAR_7->map_name, (int) VAR_7->modify, (int) VAR_11);
      return VAR_9;
    }
  }


  FUNC_5((voidp) VAR_10, (voidp) VAR_7->kvhash, sizeof(VAR_7->kvhash));
  FUNC_6((voidp) VAR_7->kvhash, 0, sizeof(VAR_7->kvhash));

  FUNC_1("calling map reload on %s", VAR_7->map_name);
  VAR_7->nentries = 0;
  VAR_8 = (*VAR_7->reload) (VAR_7, VAR_7->map_name, VAR_5);
  if (VAR_8) {
    if (VAR_7->reloads == 0)
      FUNC_7(VAR_2, "first time load of map %s failed!", VAR_7->map_name);
    else
      FUNC_7(VAR_1, "reload of map %s failed - using old values",
    VAR_7->map_name);
    FUNC_2(VAR_7);
    FUNC_5((voidp) VAR_7->kvhash, (voidp) VAR_10, sizeof(VAR_7->kvhash));
  } else {
    if (VAR_7->reloads++ == 0)
      FUNC_7(VAR_3, "first time load of map %s succeeded", VAR_7->map_name);
    else
      FUNC_7(VAR_3, "reload #%d of map %s succeeded",
    VAR_7->reloads, VAR_7->map_name);
    FUNC_3(VAR_10);
    if (VAR_7->wildcard) {
       FUNC_0(VAR_7->wildcard);
       VAR_7->wildcard = ((void*)0);
    }
    VAR_7->modify = VAR_11;
    VAR_9 = 1;
  }

  FUNC_1("calling mapc_search for wildcard");
  VAR_8 = FUNC_4(VAR_7, VAR_6, &VAR_7->wildcard);
  if (VAR_8)
    VAR_7->wildcard = ((void*)0);
  return VAR_9;
}
