
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sldns_file_parse_state {size_t prev_rr_len; int * prev_rr; scalar_t__ origin_len; int * origin; int default_ttl; } ;
struct auth_zone {int dummy; } ;
struct auth_xfer {TYPE_2__* task_transfer; } ;
typedef int sldns_buffer ;
typedef int rr ;
struct TYPE_4__ {TYPE_1__* master; } ;
struct TYPE_3__ {int file; int host; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct auth_zone*,int *,size_t,size_t,int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_4 (int *,int *,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,size_t*,size_t*,int ,int *,scalar_t__,int *,size_t) ;

__attribute__((used)) static int
FUNC_8(struct auth_xfer* VAR_1, struct auth_zone* VAR_2,
 sldns_buffer* VAR_3, struct sldns_file_parse_state* VAR_4)
{
 uint8_t VAR_5[VAR_0];
 size_t VAR_6, VAR_7 = 0;
 int VAR_8;
 char* VAR_9 = (char*)FUNC_5(VAR_3);
 VAR_6 = sizeof(VAR_5);
 VAR_8 = FUNC_7(VAR_9, VAR_5, &VAR_6, &VAR_7,
  VAR_4->default_ttl,
  VAR_4->origin_len?VAR_4->origin:((void*)0), VAR_4->origin_len,
  VAR_4->prev_rr_len?VAR_4->prev_rr:((void*)0), VAR_4->prev_rr_len);
 if(VAR_8 != 0) {
  FUNC_3("%s/%s parse failure RR[%d]: %s in '%s'",
   VAR_1->task_transfer->master->host,
   VAR_1->task_transfer->master->file,
   FUNC_1(VAR_8),
   FUNC_6(FUNC_0(VAR_8)),
   VAR_9);
  return 0;
 }
 if(VAR_6 == 0)
  return 1;


 if(VAR_7 < sizeof(VAR_4->prev_rr)) {
  FUNC_4(VAR_4->prev_rr, VAR_5, VAR_7);
  VAR_4->prev_rr_len = VAR_7;
 }

 return FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7, ((void*)0));
}
