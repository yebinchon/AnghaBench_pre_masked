
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raw; } ;
struct disasm_line {int offset; struct disasm_line* line; TYPE_1__ ops; int name; } ;
typedef int s64 ;


 int FUNC_0 (struct disasm_line*) ;
 scalar_t__ FUNC_1 (struct disasm_line*,int *,int *) ;
 int FUNC_2 (struct disasm_line*) ;
 struct disasm_line* FUNC_3 (char*) ;
 struct disasm_line* FUNC_4 (int) ;

__attribute__((used)) static struct disasm_line *FUNC_5(s64 VAR_0, char *VAR_1, size_t VAR_2)
{
 struct disasm_line *VAR_3 = FUNC_4(sizeof(*VAR_3) + VAR_2);

 if (VAR_3 != ((void*)0)) {
  VAR_3->offset = VAR_0;
  VAR_3->line = FUNC_3(VAR_1);
  if (VAR_3->line == ((void*)0))
   goto out_delete;

  if (VAR_0 != -1) {
   if (FUNC_1(VAR_3->line, &VAR_3->name, &VAR_3->ops.raw) < 0)
    goto out_free_line;

   FUNC_0(VAR_3);
  }
 }

 return VAR_3;

out_free_line:
 FUNC_2(VAR_3->line);
out_delete:
 FUNC_2(VAR_3);
 return ((void*)0);
}
