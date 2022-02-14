
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct show_state {int flags; } ;
struct ip_fw_rule {int set; int flags; int rulenum; } ;
struct ip_fw_bcounter {scalar_t__ timestamp; int bcnt; int pcnt; } ;
struct format_opts {int set_mask; scalar_t__ pcwidth; scalar_t__ bcwidth; } ;
struct cmdline_opts {scalar_t__ do_time; scalar_t__ comment_only; scalar_t__ do_compact; scalar_t__ show_sets; } ;
struct buf_pr {int dummy; } ;
struct TYPE_4__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int * VAR_11 ;
 int FUNC_1 (struct buf_pr*,char*,...) ;
 int FUNC_2 (int *) ;
 int * VAR_12 ;
 int FUNC_3 (struct show_state*) ;
 scalar_t__ FUNC_4 (struct show_state*,struct ip_fw_rule*) ;
 int * VAR_13 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buf_pr*,int *,scalar_t__) ;
 TYPE_1__* FUNC_7 (struct buf_pr*,struct format_opts*,struct show_state*,int ) ;
 int FUNC_8 (struct buf_pr*,struct format_opts*,struct show_state*,int *,int,int ,int) ;
 TYPE_1__* FUNC_9 (struct buf_pr*,struct format_opts*,struct show_state*,int) ;
 int FUNC_10 (struct buf_pr*,struct format_opts*,struct show_state*) ;
 int * VAR_14 ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(struct cmdline_opts *VAR_15, struct format_opts *VAR_16,
    struct buf_pr *VAR_17, struct ip_fw_rule *VAR_18, struct ip_fw_bcounter *VAR_19)
{
 struct show_state VAR_20;
 ipfw_insn *VAR_21;
 static int VAR_22 = 0;
 int VAR_23;


 if ((VAR_16->set_mask & (1 << VAR_18->set)) == 0) {

  if (!VAR_15->show_sets)
   return;
  else
   FUNC_1(VAR_17, "# DISABLED ");
 }
 if (FUNC_4(&VAR_20, VAR_18) != 0) {
  FUNC_14("init_show_state() failed");
  return;
 }
 FUNC_1(VAR_17, "%05u ", VAR_18->rulenum);


 if (VAR_16->pcwidth > 0 || VAR_16->bcwidth > 0) {
  FUNC_6(VAR_17, &VAR_19->pcnt, VAR_16->pcwidth);
  FUNC_6(VAR_17, &VAR_19->bcnt, VAR_16->bcwidth);
 }


 if (VAR_15->do_time == VAR_9)
  FUNC_1(VAR_17, "%10u ", VAR_19->timestamp);
 else if (VAR_15->do_time == VAR_10) {
  char VAR_24[30];
  time_t VAR_25 = (time_t)0;

  if (VAR_22 == 0) {
   FUNC_12(VAR_24, FUNC_2(&VAR_25));
   *FUNC_11(VAR_24, '\n') = '\0';
   VAR_22 = FUNC_13(VAR_24);
  }
  if (VAR_19->timestamp > 0) {
   VAR_25 = FUNC_0(VAR_19->timestamp);

   FUNC_12(VAR_24, FUNC_2(&VAR_25));
   *FUNC_11(VAR_24, '\n') = '\0';
   FUNC_1(VAR_17, "%s ", VAR_24);
  } else {
   FUNC_1(VAR_17, "%*s", VAR_22, " ");
  }
 }


 if (VAR_15->show_sets)
  FUNC_1(VAR_17, "set %d ", VAR_18->set);


 VAR_21 = FUNC_9(VAR_17, VAR_16, &VAR_20, VAR_8);

 for (VAR_23 = 0; VAR_23 < FUNC_5(VAR_11); VAR_23++) {
  VAR_21 = FUNC_7(VAR_17, VAR_16, &VAR_20, VAR_11[VAR_23]);
  if (VAR_21 == ((void*)0))
   continue;

  switch (VAR_21->opcode) {
  case 130:
   goto end;
  case 129:
  case 128:

   continue;
  }
  break;
 }

 for (VAR_23 = 0; VAR_23 < FUNC_5(VAR_13); VAR_23++)
  FUNC_7(VAR_17, VAR_16, &VAR_20, VAR_13[VAR_23]);



 if (VAR_15->comment_only != 0)
  goto end;

 if (VAR_18->flags & VAR_3) {
  VAR_20.flags |= VAR_1 | VAR_2 | VAR_0;
  goto justopts;
 }

 FUNC_10(VAR_17, VAR_16, &VAR_20);
 if (VAR_15->do_compact != 0 && (VAR_18->flags & VAR_4))
  goto justopts;


 FUNC_1(VAR_17, " from");
 FUNC_8(VAR_17, VAR_16, &VAR_20, VAR_14, FUNC_5(VAR_14),
     VAR_6, VAR_2);


 FUNC_1(VAR_17, " to");
 FUNC_8(VAR_17, VAR_16, &VAR_20, VAR_12, FUNC_5(VAR_12),
     VAR_5, VAR_0);

justopts:

 while (FUNC_9(VAR_17, VAR_16, &VAR_20, -1))
  ;
end:

 VAR_21 = FUNC_9(VAR_17, VAR_16, &VAR_20, VAR_7);
 if (VAR_15->comment_only != 0 && VAR_21 == ((void*)0))
  FUNC_1(VAR_17, " // ...");
 FUNC_1(VAR_17, "\n");
 FUNC_3(&VAR_20);
}
