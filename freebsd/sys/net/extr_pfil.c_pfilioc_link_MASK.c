
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfilioc_link {int pio_flags; int pio_ruleset; int pio_module; int pio_name; } ;
struct pfil_link_args {int pa_flags; int pa_rulname; int pa_modname; int pa_headname; int pa_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pfil_link_args*) ;

__attribute__((used)) static int
FUNC_1(struct pfilioc_link *VAR_6)
{
 struct pfil_link_args VAR_7;

 if (VAR_6->pio_flags & ~(VAR_2 | VAR_3 | VAR_4 | VAR_1))
  return (VAR_0);

 VAR_7.pa_version = VAR_5;
 VAR_7.pa_flags = VAR_6->pio_flags;
 VAR_7.pa_headname = VAR_6->pio_name;
 VAR_7.pa_modname = VAR_6->pio_module;
 VAR_7.pa_rulname = VAR_6->pio_ruleset;

 return (FUNC_0(&VAR_7));
}
