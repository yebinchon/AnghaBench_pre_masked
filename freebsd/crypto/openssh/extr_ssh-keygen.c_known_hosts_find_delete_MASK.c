
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct known_hosts_ctx {int found_key; char* host; int invalid; int out; } ;
struct hostkey_foreach_line {scalar_t__ status; scalar_t__ marker; char* line; int linenum; int path; int comment; int key; } ;
typedef enum sshkey_fp_rep { ____Placeholder_sshkey_fp_rep } sshkey_fp_rep ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct hostkey_foreach_line*,struct known_hosts_ctx*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,char*,int ,char*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*,char*,int ,...) ;
 int VAR_14 ;
 char* FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct hostkey_foreach_line *VAR_15, void *VAR_16)
{
 struct known_hosts_ctx *VAR_17 = (struct known_hosts_ctx *)VAR_16;
 enum sshkey_fp_rep VAR_18;
 int VAR_19;
 char *VAR_20;

 VAR_19 = VAR_12 ? VAR_5 : VAR_10;
 VAR_18 = VAR_12 ? VAR_6 : VAR_7;

 if (VAR_15->status == VAR_1) {
  if (VAR_8) {
   if (VAR_15->marker != VAR_3) {

    FUNC_0(VAR_17->out, "%s\n", VAR_15->line);
   } else {





    VAR_17->found_key = 1;
    if (!VAR_14)
     FUNC_5("# Host %s found: line %lu\n",
         VAR_17->host, VAR_15->linenum);
   }
   return 0;
  } else if (VAR_9) {
   VAR_17->found_key = 1;
   if (!VAR_14) {
    FUNC_5("# Host %s found: line %lu %s\n",
        VAR_17->host,
        VAR_15->linenum, VAR_15->marker == VAR_2 ? "CA" :
        (VAR_15->marker == VAR_4 ? "REVOKED" : ""));
   }
   if (VAR_11)
    FUNC_2(VAR_15, VAR_17);
   else if (VAR_13) {
    VAR_20 = FUNC_6(VAR_15->key, VAR_19, VAR_18);
    FUNC_4("%s %s %s %s\n", VAR_17->host,
        FUNC_7(VAR_15->key), VAR_20, VAR_15->comment);
    FUNC_1(VAR_20);
   } else
    FUNC_0(VAR_17->out, "%s\n", VAR_15->line);
   return 0;
  }
 } else if (VAR_8) {

  if (VAR_15->status == VAR_0) {
   VAR_17->invalid = 1;
   FUNC_3("%s:%lu: invalid line", VAR_15->path, VAR_15->linenum);
  }
  FUNC_0(VAR_17->out, "%s\n", VAR_15->line);
 }
 return 0;
}
