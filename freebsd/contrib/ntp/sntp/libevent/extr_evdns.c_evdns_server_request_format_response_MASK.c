
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int flags; int nquestions; TYPE_1__** questions; } ;
struct server_request {int trans_id; int n_answer; int n_authority; int n_additional; int response_len; unsigned char* response; struct server_reply_item* additional; struct server_reply_item* authority; struct server_reply_item* answer; TYPE_2__ base; } ;
struct server_reply_item {char const* name; int type; int dns_question_class; char const* data; int datalen; struct server_reply_item* next; scalar_t__ is_name; int ttl; } ;
struct dnslabel_table {int dummy; } ;
typedef int off_t ;
typedef int buf ;
struct TYPE_3__ {char* name; int type; int dns_question_class; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dnslabel_table*) ;
 int FUNC_3 (struct dnslabel_table*) ;
 int FUNC_4 (unsigned char*,size_t,int,char const*,int ,struct dnslabel_table*) ;
 int FUNC_5 (short) ;
 int FUNC_6 (unsigned char*,...) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (struct server_request*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int
FUNC_10(struct server_request *VAR_0, int VAR_1)
{
 unsigned char VAR_2[1500];
 size_t VAR_3 = sizeof(VAR_2);
 off_t VAR_4 = 0, VAR_5;
 u16 VAR_6;
 u32 VAR_7;
 int VAR_8;
 u16 VAR_9;
 struct dnslabel_table VAR_10;

 if (VAR_1 < 0 || VAR_1 > 15) return -1;



 VAR_9 = VAR_0->base.flags;
 VAR_9 |= (0x8000 | VAR_1);

 FUNC_3(&VAR_10);
 FUNC_0(VAR_0->trans_id);
 FUNC_0(VAR_9);
 FUNC_0(VAR_0->base.nquestions);
 FUNC_0(VAR_0->n_answer);
 FUNC_0(VAR_0->n_authority);
 FUNC_0(VAR_0->n_additional);


 for (VAR_8=0; VAR_8 < VAR_0->base.nquestions; ++VAR_8) {
  const char *VAR_11 = VAR_0->base.questions[VAR_8]->name;
  VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_11, FUNC_9(VAR_11), &VAR_10);
  if (VAR_4 < 0) {
   FUNC_2(&VAR_10);
   return (int) VAR_4;
  }
  FUNC_0(VAR_0->base.questions[VAR_8]->type);
  FUNC_0(VAR_0->base.questions[VAR_8]->dns_question_class);
 }


 for (VAR_8=0; VAR_8<3; ++VAR_8) {
  struct server_reply_item *VAR_12;
  if (VAR_8==0)
   VAR_12 = VAR_0->answer;
  else if (VAR_8==1)
   VAR_12 = VAR_0->authority;
  else
   VAR_12 = VAR_0->additional;
  while (VAR_12) {
   VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_12->name, FUNC_9(VAR_12->name), &VAR_10);
   if (VAR_5 < 0)
    goto overflow;
   VAR_4 = VAR_5;

   FUNC_0(VAR_12->type);
   FUNC_0(VAR_12->dns_question_class);
   FUNC_1(VAR_12->ttl);
   if (VAR_12->is_name) {
    off_t VAR_13 = VAR_4, VAR_14;
    VAR_4 += 2;
    VAR_14 = VAR_4;
    VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_12->data, FUNC_9(VAR_12->data), &VAR_10);
    if (VAR_5 < 0)
     goto overflow;
    VAR_4 = VAR_5;
    VAR_6 = FUNC_5( (short) (VAR_4-VAR_14) );
    FUNC_6(VAR_2+VAR_13, &VAR_6, 2);
   } else {
    FUNC_0(VAR_12->datalen);
    if (VAR_4+VAR_12->datalen > (off_t)VAR_3)
     goto overflow;
    FUNC_6(VAR_2+VAR_4, VAR_12->data, VAR_12->datalen);
    VAR_4 += VAR_12->datalen;
   }
   VAR_12 = VAR_12->next;
  }
 }

 if (VAR_4 > 512) {
overflow:
  VAR_4 = 512;
  VAR_2[2] |= 0x02;
 }

 VAR_0->response_len = VAR_4;

 if (!(VAR_0->response = FUNC_7(VAR_0->response_len))) {
  FUNC_8(VAR_0);
  FUNC_2(&VAR_10);
  return (-1);
 }
 FUNC_6(VAR_0->response, VAR_2, VAR_0->response_len);
 FUNC_8(VAR_0);
 FUNC_2(&VAR_10);
 return (0);
}
