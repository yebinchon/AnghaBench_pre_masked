
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
typedef int kind ;
struct TYPE_3__ {int dtdt_kind; int dtdt_ckind; int dtdt_flags; scalar_t__ dtdt_size; } ;
typedef TYPE_1__ dtrace_diftype_t ;
typedef int ckind ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,size_t,char*,...) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2(const dtrace_diftype_t *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[16], VAR_6[16];

 switch (VAR_2->dtdt_kind) {
 case 129:
  (void) FUNC_1(VAR_5, "D type");
  break;
 case 128:
  (void) FUNC_1(VAR_5, "string");
  break;
 default:
  (void) FUNC_0(VAR_5, sizeof (VAR_5), "0x%x", VAR_2->dtdt_kind);
 }

 switch (VAR_2->dtdt_ckind) {
 case 131:
  (void) FUNC_1(VAR_6, "unknown");
  break;
 case 137:
  (void) FUNC_1(VAR_6, "integer");
  break;
 case 140:
  (void) FUNC_1(VAR_6, "float");
  break;
 case 136:
  (void) FUNC_1(VAR_6, "pointer");
  break;
 case 143:
  (void) FUNC_1(VAR_6, "array");
  break;
 case 138:
  (void) FUNC_1(VAR_6, "function");
  break;
 case 134:
  (void) FUNC_1(VAR_6, "struct");
  break;
 case 132:
  (void) FUNC_1(VAR_6, "union");
  break;
 case 141:
  (void) FUNC_1(VAR_6, "enum");
  break;
 case 139:
  (void) FUNC_1(VAR_6, "forward");
  break;
 case 133:
  (void) FUNC_1(VAR_6, "typedef");
  break;
 case 130:
  (void) FUNC_1(VAR_6, "volatile");
  break;
 case 142:
  (void) FUNC_1(VAR_6, "const");
  break;
 case 135:
  (void) FUNC_1(VAR_6, "restrict");
  break;
 default:
  (void) FUNC_0(VAR_6, sizeof (VAR_6), "0x%x", VAR_2->dtdt_ckind);
 }

 if (VAR_2->dtdt_flags & (VAR_0 | VAR_1)) {
  (void) FUNC_0(VAR_3, VAR_4, "%s (%s) by %sref (size %lu)",
      VAR_5, VAR_6, (VAR_2->dtdt_flags & VAR_1) ? "user " : "",
      (ulong_t)VAR_2->dtdt_size);
 } else {
  (void) FUNC_0(VAR_3, VAR_4, "%s (%s) (size %lu)",
      VAR_5, VAR_6, (ulong_t)VAR_2->dtdt_size);
 }

 return (VAR_3);
}
