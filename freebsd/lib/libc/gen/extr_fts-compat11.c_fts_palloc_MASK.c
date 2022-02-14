
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t fts_pathlen; int * fts_path; } ;
typedef TYPE_1__ FTS11 ;


 int * FUNC_0 (int *,size_t) ;

__attribute__((used)) static int
FUNC_1(FTS11 *VAR_0, size_t VAR_1)
{

 VAR_0->fts_pathlen += VAR_1 + 256;
 VAR_0->fts_path = FUNC_0(VAR_0->fts_path, VAR_0->fts_pathlen);
 return (VAR_0->fts_path == ((void*)0));
}
