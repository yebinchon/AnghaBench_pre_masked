
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int mid; int hi; } ;
struct TYPE_4__ {TYPE_1__ x; } ;
struct uuid_private {int * node; int seq; TYPE_2__ time; } ;
struct uuid {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int,int,int) ;

int
FUNC_2(char *VAR_0, size_t VAR_1, struct uuid *VAR_2)
{
 struct uuid_private *VAR_3;
 int VAR_4;

 VAR_3 = (struct uuid_private *)VAR_2;
 VAR_4 = FUNC_1(VAR_0, VAR_1, "%08x-%04x-%04x-%04x-%04x%04x%04x",
     VAR_3->time.x.low, VAR_3->time.x.mid, VAR_3->time.x.hi, FUNC_0(VAR_3->seq),
     FUNC_0(VAR_3->node[0]), FUNC_0(VAR_3->node[1]), FUNC_0(VAR_3->node[2]));
 return (VAR_4);
}
