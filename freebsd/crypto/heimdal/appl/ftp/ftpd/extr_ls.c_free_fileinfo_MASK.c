
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileinfo {int link; int filename; int date; int minor; int major; int size; int group; int user; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct fileinfo *VAR_0)
{
    FUNC_0(VAR_0->user);
    FUNC_0(VAR_0->group);
    FUNC_0(VAR_0->size);
    FUNC_0(VAR_0->major);
    FUNC_0(VAR_0->minor);
    FUNC_0(VAR_0->date);
    FUNC_0(VAR_0->filename);
    FUNC_0(VAR_0->link);
}
