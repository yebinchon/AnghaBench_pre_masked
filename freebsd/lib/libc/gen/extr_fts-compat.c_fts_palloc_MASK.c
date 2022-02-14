
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fts_pathlen; int * fts_path; } ;
typedef TYPE_1__ FTS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(FTS *VAR_3, size_t VAR_4)
{

 VAR_3->fts_pathlen += VAR_4 + 256;





 if (VAR_3->fts_pathlen < 0 || VAR_3->fts_pathlen >= VAR_1) {
  if (VAR_3->fts_path)
   FUNC_0(VAR_3->fts_path);
  VAR_3->fts_path = ((void*)0);
  VAR_2 = VAR_0;
  return (1);
 }
 VAR_3->fts_path = FUNC_1(VAR_3->fts_path, VAR_3->fts_pathlen);
 return (VAR_3->fts_path == ((void*)0));
}
