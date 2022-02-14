
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int tail; int end; int len; int data_len; struct sk_buff* next; } ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; struct sk_buff* frag_list; } ;
struct TYPE_3__ {int size; int page_offset; int page; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,unsigned char*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 TYPE_2__* FUNC_12 (struct sk_buff*) ;
 unsigned char* FUNC_13 (struct sk_buff*) ;

unsigned char *FUNC_14(struct sk_buff *VAR_1, int VAR_2)
{




 int VAR_3, VAR_4, VAR_5 = (VAR_1->tail + VAR_2) - VAR_1->end;

 if (VAR_5 > 0 || FUNC_7(VAR_1)) {
  if (FUNC_3(VAR_1, 0, VAR_5 > 0 ? VAR_5 + 128 : 0,
         VAR_0))
   return ((void*)0);
 }

 if (FUNC_8(VAR_1, FUNC_10(VAR_1), FUNC_13(VAR_1), VAR_2))
  FUNC_0();




 if (!FUNC_9(VAR_1))
  goto pull_pages;


 VAR_5 = VAR_2;
 for (VAR_3 = 0; VAR_3 < FUNC_12(VAR_1)->nr_frags; VAR_3++) {
  if (FUNC_12(VAR_1)->frags[VAR_3].size >= VAR_5)
   goto pull_pages;
  VAR_5 -= FUNC_12(VAR_1)->frags[VAR_3].size;
 }
 if (VAR_5) {
  struct sk_buff *VAR_6 = FUNC_12(VAR_1)->frag_list;
  struct sk_buff *VAR_7 = ((void*)0);
  struct sk_buff *VAR_8 = ((void*)0);

  do {
   FUNC_1(!VAR_6);

   if (VAR_6->len <= VAR_5) {

    VAR_5 -= VAR_6->len;
    VAR_6 = VAR_6->next;
    VAR_8 = VAR_6;
   } else {


    if (FUNC_11(VAR_6)) {

     VAR_7 = FUNC_6(VAR_6, VAR_0);
     if (!VAR_7)
      return ((void*)0);
     VAR_8 = VAR_6->next;
     VAR_6 = VAR_7;
    } else {


     VAR_8 = VAR_6;
    }
    if (!FUNC_4(VAR_6, VAR_5)) {
     FUNC_2(VAR_7);
     return ((void*)0);
    }
    break;
   }
  } while (VAR_5);


  while ((VAR_6 = FUNC_12(VAR_1)->frag_list) != VAR_8) {
   FUNC_12(VAR_1)->frag_list = VAR_6->next;
   FUNC_2(VAR_6);
  }

  if (VAR_7) {
   VAR_7->next = VAR_6;
   FUNC_12(VAR_1)->frag_list = VAR_7;
  }
 }


pull_pages:
 VAR_5 = VAR_2;
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_12(VAR_1)->nr_frags; VAR_3++) {
  if (FUNC_12(VAR_1)->frags[VAR_3].size <= VAR_5) {
   FUNC_5(FUNC_12(VAR_1)->frags[VAR_3].page);
   VAR_5 -= FUNC_12(VAR_1)->frags[VAR_3].size;
  } else {
   FUNC_12(VAR_1)->frags[VAR_4] = FUNC_12(VAR_1)->frags[VAR_3];
   if (VAR_5) {
    FUNC_12(VAR_1)->frags[VAR_4].page_offset += VAR_5;
    FUNC_12(VAR_1)->frags[VAR_4].size -= VAR_5;
    VAR_5 = 0;
   }
   VAR_4++;
  }
 }
 FUNC_12(VAR_1)->nr_frags = VAR_4;

 VAR_1->tail += VAR_2;
 VAR_1->data_len -= VAR_2;

 return FUNC_13(VAR_1);
}
