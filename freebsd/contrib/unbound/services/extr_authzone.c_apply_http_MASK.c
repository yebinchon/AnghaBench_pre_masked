
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sldns_file_parse_state {int default_ttl; int origin_len; char* origin; int lineno; } ;
struct sldns_buffer {int dummy; } ;
struct auth_zone {int data; } ;
struct auth_xfer {int namelen; TYPE_2__* task_transfer; scalar_t__ serial; scalar_t__ have_zone; int name; } ;
struct auth_chunk {int len; int data; } ;
typedef int pstate ;
typedef int preview ;
struct TYPE_4__ {TYPE_1__* master; struct auth_chunk* chunks_first; } ;
struct TYPE_3__ {int file; int host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct auth_chunk**,size_t*,struct sldns_buffer*) ;
 scalar_t__ FUNC_1 (struct sldns_buffer*) ;
 int FUNC_2 (struct sldns_buffer*) ;
 scalar_t__ FUNC_3 (struct auth_chunk*) ;
 int FUNC_4 (struct auth_xfer*,struct auth_zone*,struct sldns_buffer*,struct sldns_file_parse_state*) ;
 scalar_t__ FUNC_5 (struct sldns_buffer*,struct sldns_file_parse_state*) ;
 scalar_t__ FUNC_6 (struct sldns_buffer*,struct sldns_file_parse_state*) ;
 int FUNC_7 (struct auth_xfer*,struct sldns_buffer*) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (struct sldns_file_parse_state*,int ,int) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct sldns_buffer*) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (scalar_t__,char*,int ,int,...) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_16(struct auth_xfer* VAR_4, struct auth_zone* VAR_5,
 struct sldns_buffer* VAR_6)
{



 struct sldns_file_parse_state VAR_7;
 struct auth_chunk* VAR_8;
 size_t VAR_9;
 FUNC_11(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.default_ttl = 3600;
 if(VAR_4->namelen < sizeof(VAR_7.origin)) {
  VAR_7.origin_len = VAR_4->namelen;
  FUNC_10(VAR_7.origin, VAR_4->name, VAR_4->namelen);
 }

 if(VAR_3 >= VAR_0)
  FUNC_15(VAR_0, "http download %s of size %d",
  VAR_4->task_transfer->master->file,
  (int)FUNC_3(VAR_4->task_transfer->chunks_first));
 if(VAR_4->task_transfer->chunks_first && VAR_3 >= VAR_0) {
  char VAR_10[1024];
  if(VAR_4->task_transfer->chunks_first->len+1 > sizeof(VAR_10)) {
   FUNC_10(VAR_10, VAR_4->task_transfer->chunks_first->data,
    sizeof(VAR_10)-1);
   VAR_10[sizeof(VAR_10)-1]=0;
  } else {
   FUNC_10(VAR_10, VAR_4->task_transfer->chunks_first->data,
    VAR_4->task_transfer->chunks_first->len);
   VAR_10[VAR_4->task_transfer->chunks_first->len]=0;
  }
  FUNC_9("auth zone http downloaded content preview: %s",
   VAR_10);
 }


 if(!FUNC_7(VAR_4, VAR_6)) {
  FUNC_8("http download %s/%s does not contain a zonefile, "
   "but got '%s'", VAR_4->task_transfer->master->host,
   VAR_4->task_transfer->master->file,
   FUNC_13(VAR_6));
  return 0;
 }


 FUNC_14(&VAR_5->data, VAR_2, ((void*)0));
 FUNC_12(&VAR_5->data, &VAR_1);
 VAR_4->have_zone = 0;
 VAR_4->serial = 0;

 VAR_8 = VAR_4->task_transfer->chunks_first;
 VAR_9 = 0;
 VAR_7.lineno = 0;
 while(FUNC_0(&VAR_8, &VAR_9, VAR_6)) {

  VAR_7.lineno++;
  FUNC_2(VAR_6);
  if(FUNC_1(VAR_6)) {
   continue;
  }

  if(FUNC_5(VAR_6, &VAR_7)) {
   continue;
  }
  if(FUNC_6(VAR_6, &VAR_7)) {
   continue;
  }
  if(!FUNC_4(VAR_4, VAR_5, VAR_6, &VAR_7)) {
   FUNC_15(VAR_0, "error parsing line [%s:%d] %s",
    VAR_4->task_transfer->master->file,
    VAR_7.lineno,
    FUNC_13(VAR_6));
   return 0;
  }
 }
 return 1;
}
