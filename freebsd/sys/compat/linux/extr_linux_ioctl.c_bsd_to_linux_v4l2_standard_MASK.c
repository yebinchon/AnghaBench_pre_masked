
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_standard {int reserved; int framelines; int frameperiod; int name; int id; int index; } ;
struct l_v4l2_standard {int reserved; int framelines; int frameperiod; int name; int id; int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct v4l2_standard *VAR_0, struct l_v4l2_standard *VAR_1)
{
 VAR_1->index = VAR_0->index;
 VAR_1->id = VAR_0->id;
 FUNC_0(sizeof(VAR_0->name) == sizeof(VAR_1->name));
 FUNC_1(VAR_1->name, VAR_0->name, sizeof(VAR_1->name));
 VAR_1->frameperiod = VAR_0->frameperiod;
 VAR_1->framelines = VAR_0->framelines;
 FUNC_0(sizeof(VAR_0->reserved) == sizeof(VAR_1->reserved));
 FUNC_1(VAR_1->reserved, VAR_0->reserved, sizeof(VAR_1->reserved));
 return (0);
}
