
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int dwa_count; int dwa_freelist; } ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline bool
FUNC_1(struct bhndb_resources *VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0->dwa_freelist, VAR_0->dwa_count, &VAR_1);
 return (VAR_1 == -1);
}
