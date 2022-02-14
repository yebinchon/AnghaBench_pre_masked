
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int pslotfree; struct pbank volatile** pbank; } ;
struct pbank {int dummy; } ;



__attribute__((used)) static volatile struct pbank *
FUNC_0(struct sc_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->pslotfree > 63)
  return ((void*)0);
 VAR_1 = VAR_0->pslotfree++;
 return VAR_0->pbank[VAR_1 * 2];
}
