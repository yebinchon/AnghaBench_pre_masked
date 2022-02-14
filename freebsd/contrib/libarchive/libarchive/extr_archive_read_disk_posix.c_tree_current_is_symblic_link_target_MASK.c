
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {TYPE_1__* current_filesystem; } ;
struct stat {scalar_t__ st_dev; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ dev; } ;


 struct stat* FUNC_0 (struct tree*) ;
 struct stat* FUNC_1 (struct tree*) ;

__attribute__((used)) static int
FUNC_2(struct tree *VAR_0)
{
 static const struct stat *VAR_1, *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_0);
 return (VAR_2 != ((void*)0) && VAR_1 != ((void*)0) &&
     (int64_t)VAR_2->st_dev == VAR_0->current_filesystem->dev &&
     VAR_2->st_dev != VAR_1->st_dev);
}
