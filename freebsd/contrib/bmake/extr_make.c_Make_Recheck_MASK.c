
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_5__ {int type; char* name; void* mtime; int children; int commands; } ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (void*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,char*,char*) ;
 void* VAR_4 ;

time_t
FUNC_6(GNode *VAR_5)
{
    time_t VAR_6 = FUNC_1(VAR_5, 1);
    if (!FUNC_2(VAR_5->commands) || FUNC_2(VAR_5->children)) {
 VAR_5->mtime = VAR_4;
    }
    return VAR_6;
}
