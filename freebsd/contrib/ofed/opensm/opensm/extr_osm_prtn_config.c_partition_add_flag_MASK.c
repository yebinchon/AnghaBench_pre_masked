
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct part_conf {int is_ipoib; int p_log; int indx0; int membership; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,unsigned int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned int,int ,int *,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_5, struct part_conf *VAR_6,
         char *VAR_7, char *VAR_8)
{
 int VAR_9 = FUNC_3(VAR_7);


 if (FUNC_1(VAR_5, VAR_6->p_log, &VAR_6->flags, VAR_7, VAR_8))
  return 0;


 if (!FUNC_4(VAR_7, "ipoib", VAR_9)) {
  VAR_6->is_ipoib = 1;
 } else if (!FUNC_4(VAR_7, "defmember", VAR_9)) {
  if (!VAR_8 || (FUNC_4(VAR_8, "limited", FUNC_3(VAR_8))
        && FUNC_4(VAR_8, "both", FUNC_3(VAR_8))
        && FUNC_4(VAR_8, "full", FUNC_3(VAR_8))))
   FUNC_0(VAR_6->p_log, VAR_3,
    "PARSE WARN: line %d: "
    "flag \'defmember\' requires valid value (limited or full or both)"
    " - skipped\n", VAR_5);
  else {
   if (!FUNC_4(VAR_8, "full", FUNC_3(VAR_8)))
    VAR_6->membership = VAR_1;
   else if (!FUNC_4(VAR_8, "both", FUNC_3(VAR_8)))
    VAR_6->membership = VAR_0;
   else
    VAR_6->membership = VAR_2;
  }
 } else if (!FUNC_2(VAR_7, "indx0"))
  VAR_6->indx0 = VAR_4;
 else {
  FUNC_0(VAR_6->p_log, VAR_3,
   "PARSE WARN: line %d: "
   "unrecognized partition flag \'%s\'"
   " - ignored\n", VAR_5, VAR_7);
 }
 return 0;
}
