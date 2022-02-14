
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_mtime; } ;
struct fileinfo {TYPE_1__ st; int * filename; } ;



__attribute__((used)) static int
FUNC_0(struct fileinfo *VAR_0, struct fileinfo *VAR_1)
{
    if(VAR_0->filename == ((void*)0))
 return 1;
    if(VAR_1->filename == ((void*)0))
 return -1;
    return VAR_1->st.st_mtime - VAR_0->st.st_mtime;
}
