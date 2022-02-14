
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drsmp {int status; } ;




char *FUNC_0(struct drsmp *VAR_0)
{
 switch (VAR_0->status) {
 case 0:
  return "success";
 case 128:
  return "timeout";
 }
 return "unknown error";
}
