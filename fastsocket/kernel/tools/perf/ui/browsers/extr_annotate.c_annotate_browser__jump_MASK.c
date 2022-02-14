
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {TYPE_1__ target; } ;
struct disasm_line {TYPE_2__ ops; int ins; } ;
struct annotate_browser {struct disasm_line* selection; } ;
typedef int s64 ;


 struct disasm_line* FUNC_0 (struct annotate_browser*,int ,int *) ;
 int FUNC_1 (struct annotate_browser*,struct disasm_line*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(struct annotate_browser *VAR_0)
{
 struct disasm_line *VAR_1 = VAR_0->selection;
 s64 VAR_2;

 if (!FUNC_2(VAR_1->ins))
  return 0;

 VAR_1 = FUNC_0(VAR_0, VAR_1->ops.target.offset, &VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_3("Invallid jump offset");
  return 1;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);

 return 1;
}
