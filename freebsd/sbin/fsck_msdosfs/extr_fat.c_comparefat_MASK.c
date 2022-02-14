
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fatEntry {scalar_t__ next; } ;
struct bootblock {size_t NumClusters; } ;
typedef size_t cl_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,scalar_t__*,scalar_t__*,int ) ;

int
FUNC_1(struct bootblock *VAR_2, struct fatEntry *VAR_3,
    struct fatEntry *VAR_4, u_int VAR_5)
{
 cl_t VAR_6;
 int VAR_7 = VAR_1;

 for (VAR_6 = VAR_0; VAR_6 < VAR_2->NumClusters; VAR_6++)
  if (VAR_3[VAR_6].next != VAR_4[VAR_6].next)
   VAR_7 |= FUNC_0(VAR_6, &VAR_3[VAR_6].next, &VAR_4[VAR_6].next, VAR_5);
 return VAR_7;
}
