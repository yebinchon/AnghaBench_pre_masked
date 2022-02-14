
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_parse_state {int lasterr_pos; size_t lasterr; } ;
struct event_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct event_filter*,char*) ;
 char** VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct filter_parse_state *VAR_3,
         struct event_filter *VAR_4)
{
 int VAR_5 = VAR_3->lasterr_pos;
 char *VAR_6, *VAR_7;

 VAR_6 = (char *)FUNC_0(VAR_0);
 if (!VAR_6)
  return;

 FUNC_1(VAR_4, "\n");
 FUNC_3(VAR_6, ' ', VAR_1);
 if (VAR_5 > VAR_1 - 128)
  VAR_5 = 0;
 VAR_6[VAR_5] = '^';
 VAR_7 = &VAR_6[VAR_5] + 1;

 FUNC_4(VAR_7, "\nparse_error: %s\n", VAR_2[VAR_3->lasterr]);
 FUNC_1(VAR_4, VAR_6);
 FUNC_2((unsigned long) VAR_6);
}
