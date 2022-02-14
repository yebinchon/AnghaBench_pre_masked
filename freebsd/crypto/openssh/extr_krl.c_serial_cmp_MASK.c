
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revoked_serial {scalar_t__ hi; scalar_t__ lo; } ;



__attribute__((used)) static int
FUNC_0(struct revoked_serial *VAR_0, struct revoked_serial *VAR_1)
{
 if (VAR_0->hi >= VAR_1->lo && VAR_0->lo <= VAR_1->hi)
  return 0;
 return VAR_0->lo < VAR_1->lo ? -1 : 1;
}
