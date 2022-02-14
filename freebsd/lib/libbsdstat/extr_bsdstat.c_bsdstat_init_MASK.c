
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int dummy; } ;
struct bsdstat {char const* name; int nstats; int print_fields; int print_verbose; int print_total; int print_current; int print_header; void* get_totstat; void* get_curstat; int update_tot; void* collect_tot; void* collect_cur; int setfmt; struct fmt const* stats; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_0(struct bsdstat *VAR_9, const char *VAR_10, const struct fmt *VAR_11, int VAR_12)
{
 VAR_9->name = VAR_10;
 VAR_9->stats = VAR_11;
 VAR_9->nstats = VAR_12;
 VAR_9->setfmt = VAR_7;
 VAR_9->collect_cur = VAR_0;
 VAR_9->collect_tot = VAR_0;
 VAR_9->update_tot = VAR_8;
 VAR_9->get_curstat = VAR_1;
 VAR_9->get_totstat = VAR_1;
 VAR_9->print_header = VAR_4;
 VAR_9->print_current = VAR_2;
 VAR_9->print_total = VAR_5;
 VAR_9->print_verbose = VAR_6;
 VAR_9->print_fields = VAR_3;
}
