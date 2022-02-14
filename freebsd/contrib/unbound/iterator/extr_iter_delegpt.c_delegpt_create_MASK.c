
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct delegpt {int dummy; } ;


 int FUNC_0 (struct delegpt*,int ,int) ;
 scalar_t__ FUNC_1 (struct regional*,int) ;

struct delegpt*
FUNC_2(struct regional* VAR_0)
{
 struct delegpt* VAR_1=(struct delegpt*)FUNC_1(
  VAR_0, sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 return VAR_1;
}
