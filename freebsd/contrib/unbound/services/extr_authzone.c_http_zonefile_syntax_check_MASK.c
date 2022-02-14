
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sldns_file_parse_state {int default_ttl; int origin_len; scalar_t__ prev_rr_len; int * prev_rr; int * origin; } ;
struct auth_xfer {int namelen; scalar_t__ dclass; TYPE_1__* task_transfer; int name; } ;
struct auth_chunk {int dummy; } ;
typedef int sldns_buffer ;
typedef int rr ;
typedef int pstate ;
struct TYPE_2__ {struct auth_chunk* chunks_first; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct auth_chunk**,size_t*,int *,struct sldns_file_parse_state*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sldns_file_parse_state*,int ,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int *,size_t*,size_t*,int,int *,int,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_10(struct auth_xfer* VAR_1, sldns_buffer* VAR_2)
{
 uint8_t VAR_3[VAR_0];
 size_t VAR_4, VAR_5 = 0;
 struct sldns_file_parse_state VAR_6;
 struct auth_chunk* VAR_7;
 size_t VAR_8;
 int VAR_9;
 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.default_ttl = 3600;
 if(VAR_1->namelen < sizeof(VAR_6.origin)) {
  VAR_6.origin_len = VAR_1->namelen;
  FUNC_4(VAR_6.origin, VAR_1->name, VAR_1->namelen);
 }
 VAR_7 = VAR_1->task_transfer->chunks_first;
 VAR_8 = 0;
 if(!FUNC_2(&VAR_7, &VAR_8, VAR_2, &VAR_6)) {
  return 0;
 }
 VAR_4 = sizeof(VAR_3);
 VAR_9=FUNC_8((char*)FUNC_6(VAR_2), VAR_3, &VAR_4,
  &VAR_5, VAR_6.default_ttl,
  VAR_6.origin_len?VAR_6.origin:((void*)0), VAR_6.origin_len,
  VAR_6.prev_rr_len?VAR_6.prev_rr:((void*)0), VAR_6.prev_rr_len);
 if(VAR_9 != 0) {
  FUNC_3("parse failure on first RR[%d]: %s",
   FUNC_1(VAR_9),
   FUNC_7(FUNC_0(VAR_9)));
  return 0;
 }

 if(FUNC_9(VAR_3, VAR_4, VAR_5) != VAR_1->dclass) {
  FUNC_3("parse failure: first record in downloaded zonefile "
   "from wrong RR class");
  return 0;
 }
 return 1;
}
