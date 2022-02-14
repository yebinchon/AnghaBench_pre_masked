
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iter_forwards {int dummy; } ;
struct delegpt {int namelabs; int namelen; int name; } ;


 int FUNC_0 (struct iter_forwards*,int ,int ,int ,int ,struct delegpt*) ;

__attribute__((used)) static int
FUNC_1(struct iter_forwards* VAR_0, uint16_t VAR_1, struct delegpt* VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->name, VAR_2->namelen,
  VAR_2->namelabs, VAR_2);
}
