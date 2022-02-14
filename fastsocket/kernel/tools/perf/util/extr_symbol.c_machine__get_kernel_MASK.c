
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct dso {int has_build_id; } ;
typedef int bf ;
struct TYPE_2__ {char* vmlinux_name; char* default_guest_vmlinux_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dso* FUNC_0 (struct machine*,char const*,char*,int ) ;
 int FUNC_1 (struct dso*,struct machine*) ;
 scalar_t__ FUNC_2 (struct machine*) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 char* FUNC_4 (struct machine*,char*,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static struct dso *FUNC_5(struct machine *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 struct dso *VAR_6;

 if (FUNC_3(VAR_4)) {
  VAR_5 = VAR_3.vmlinux_name;
  if (!VAR_5)
   VAR_5 = "[kernel.kallsyms]";

  VAR_6 = FUNC_0(VAR_4, VAR_5,
          "[kernel]",
          VAR_1);
 } else {
  char VAR_7[VAR_2];

  if (FUNC_2(VAR_4))
   VAR_5 = VAR_3.default_guest_vmlinux_name;
  if (!VAR_5)
   VAR_5 = FUNC_4(VAR_4, VAR_7,
         sizeof(VAR_7));

  VAR_6 = FUNC_0(VAR_4, VAR_5,
          "[guest.kernel]",
          VAR_0);
 }

 if (VAR_6 != ((void*)0) && (!VAR_6->has_build_id))
  FUNC_1(VAR_6, VAR_4);

 return VAR_6;
}
