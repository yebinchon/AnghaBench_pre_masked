
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; char* path; char* name; scalar_t__ made; scalar_t__ mtime; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 char* FUNC_1 (int ,TYPE_1__*,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_3(void *VAR_12, void *VAR_13)
{
    GNode *VAR_14 = (GNode *)VAR_12;
    GNode *VAR_15 = (GNode *)VAR_13;

    if (VAR_14->type & VAR_8)
 return (0);
    VAR_14->type |= VAR_8;

    if ((VAR_14->type & (VAR_5|VAR_9|VAR_10|VAR_6)) == 0) {
 char *VAR_16, *VAR_17;
 char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

 if (VAR_14->type & VAR_4)
     VAR_16 = FUNC_1(VAR_2, VAR_14, &VAR_18);
 else
     VAR_16 = VAR_14->path ? VAR_14->path : VAR_14->name;
 if (VAR_14->type & VAR_7) {
     VAR_17 = FUNC_1(VAR_0, VAR_14, &VAR_19);
 } else {
     VAR_17 = VAR_16;
 }
 if (VAR_17 != ((void*)0))
  FUNC_0(VAR_0, VAR_17, VAR_15);
 FUNC_2(VAR_19);
 if (VAR_15->type & VAR_7) {
     if (VAR_14->made == VAR_1) {
  FUNC_0(VAR_3, VAR_16, VAR_15);
     }
 } else if ((VAR_15->mtime < VAR_14->mtime) ||
     (VAR_14->mtime >= VAR_11 && VAR_14->made == VAR_1))
 {
     FUNC_0(VAR_3, VAR_16, VAR_15);
 }
 FUNC_2(VAR_18);
    }
    return (0);
}
