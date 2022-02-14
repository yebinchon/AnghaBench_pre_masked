
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {size_t mstackpos; TYPE_1__* mstack; } ;
struct TYPE_2__ {int argc; } ;



__attribute__((used)) static int
FUNC_0(const struct roff *VAR_0, const char *VAR_1)
{

 switch (*VAR_1) {
 case '$':
  return VAR_0->mstackpos < 0 ? 0 : VAR_0->mstack[VAR_0->mstackpos].argc;
 case 'A':
  return 0;
 case 'g':
  return 1;
 case 'H':
  return 24;
 case 'j':
  return 0;
 case 'T':
  return 1;
 case 'V':
  return 40;
 default:
  return -1;
 }
}
