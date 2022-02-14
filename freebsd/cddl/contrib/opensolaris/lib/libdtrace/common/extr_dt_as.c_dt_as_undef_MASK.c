
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {int dts_name; int dts_object; } ;
typedef TYPE_1__ dtrace_syminfo_t ;
struct TYPE_5__ {int di_flags; int di_lineno; TYPE_1__* di_data; } ;
typedef TYPE_2__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ,char const*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(const dt_ident_t *VAR_4, uint_t VAR_5)
{
 const char *VAR_6, *VAR_7 = (VAR_4->di_flags & VAR_1) ? "``" : "`";
 const dtrace_syminfo_t *VAR_8 = VAR_4->di_data;

 if (VAR_4->di_flags & VAR_1)
  VAR_6 = "user";
 else if (VAR_4->di_flags & VAR_0)
  VAR_6 = "primary kernel";
 else
  VAR_6 = "loadable kernel";

 VAR_3 = VAR_4->di_lineno;

 FUNC_0(VAR_2, "relocation remains against %s symbol %s%s%s (offset "
     "0x%x)\n", VAR_6, VAR_8->dts_object, VAR_7, VAR_8->dts_name, VAR_5);
}
