
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* linker_file_t ;
struct TYPE_6__ {int ndeps; int filename; struct TYPE_6__** deps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** FUNC_1 (TYPE_1__**,int,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(linker_file_t VAR_6, linker_file_t VAR_7)
{
 linker_file_t *VAR_8;

 FUNC_2(&VAR_5, VAR_4);
 VAR_6->deps = FUNC_1(VAR_6->deps, (VAR_6->ndeps + 1) * sizeof(*VAR_8),
     VAR_1, VAR_2 | VAR_3);
 VAR_6->deps[VAR_6->ndeps] = VAR_7;
 VAR_6->ndeps++;
 FUNC_0(VAR_0, ("linker_file_add_dependency:"
     " adding %s as dependency for %s\n",
     VAR_7->filename, VAR_6->filename));
 return (0);
}
