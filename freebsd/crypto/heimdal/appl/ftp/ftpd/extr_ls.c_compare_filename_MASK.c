
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileinfo {int * filename; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct fileinfo *VAR_0, struct fileinfo *VAR_1)
{
    if(VAR_0->filename == ((void*)0))
 return 1;
    if(VAR_1->filename == ((void*)0))
 return -1;
    return FUNC_0(VAR_0->filename, VAR_1->filename);
}
