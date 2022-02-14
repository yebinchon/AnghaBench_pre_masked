
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct group_flags {int scope_mask; unsigned int sl; int FlowLabel; void* TClass; void* Q_Key; void* rate; void* mtu; } ;
typedef int osm_log_t ;


 int FUNC_0 (int *,int ,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 void* FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_1, osm_log_t * VAR_2,
       struct group_flags *VAR_3,
       char *VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = FUNC_2(VAR_4);
 if (!FUNC_3(VAR_4, "mtu", VAR_7)) {
  VAR_6 = 1;
  if (!VAR_5 || (VAR_3->mtu = FUNC_4(VAR_5, ((void*)0), 0)) == 0)
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'mtu\' requires valid value"
    " - skipped\n", VAR_1);
 } else if (!FUNC_3(VAR_4, "rate", VAR_7)) {
  VAR_6 = 1;
  if (!VAR_5 || (VAR_3->rate = FUNC_4(VAR_5, ((void*)0), 0)) == 0)
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'rate\' requires valid value"
    " - skipped\n", VAR_1);
 } else if (!FUNC_3(VAR_4, "scope", VAR_7)) {
  unsigned int VAR_8;
  VAR_6 = 1;
  if (!VAR_5 || (VAR_8 = FUNC_4(VAR_5, ((void*)0), 0)) == 0 || VAR_8 > 0xF)
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'scope\' requires valid value"
    " - skipped\n", VAR_1);
  else
   VAR_3->scope_mask |= (1<<VAR_8);
 } else if (!FUNC_3(VAR_4, "Q_Key", FUNC_2(VAR_4))) {
  VAR_6 = 1;
  if (!VAR_5 || (VAR_3->Q_Key = FUNC_4(VAR_5, ((void*)0), 0)) == 0)
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'Q_Key\' requires valid value"
    " - using '0'\n", VAR_1);
 } else if (!FUNC_3(VAR_4, "TClass", FUNC_2(VAR_4))) {
  VAR_6 =1;
  if (!VAR_5 || (VAR_3->TClass = FUNC_4(VAR_5, ((void*)0), 0)) == 0)
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'TClass\' requires valid value"
    " - using '0'\n", VAR_1);
 } else if (!FUNC_3(VAR_4, "sl", VAR_7)) {
  unsigned VAR_9;
  char *VAR_10;
  VAR_6 = 1;

  if (!VAR_5 || !*VAR_5 || (VAR_9 = FUNC_4(VAR_5, &VAR_10, 0)) > 15 ||
      (*VAR_10 && !FUNC_1(*VAR_10)))
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'sl\' requires valid value"
    " - skipped\n", VAR_1);
  else
   VAR_3->sl = VAR_9;
 } else if (!FUNC_3(VAR_4, "FlowLabel", VAR_7)) {
  uint32_t VAR_11;
  char *VAR_12;
  VAR_6 = 1;

  if (!VAR_5 || !*VAR_5 ||
      (VAR_11 = FUNC_4(VAR_5, &VAR_12, 0)) > 0xFFFFF ||
      (*VAR_12 && !FUNC_1(*VAR_12)))
   FUNC_0(VAR_2, VAR_0,
    "PARSE WARN: line %d: "
    "flag \'FlowLabel\' requires valid value"
    " - skipped\n", VAR_1);
  else
   VAR_3->FlowLabel = VAR_11;
 }

 return VAR_6;
}
