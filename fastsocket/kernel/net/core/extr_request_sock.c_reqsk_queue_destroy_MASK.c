
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_queue {int dummy; } ;
struct request_sock {struct request_sock* dl_next; } ;
struct listen_sock {int nr_table_entries; scalar_t__ qlen; struct request_sock** syn_table; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct listen_sock*) ;
 int FUNC_2 (struct request_sock*) ;
 struct listen_sock* FUNC_3 (struct request_sock_queue*) ;
 int FUNC_4 (struct listen_sock*) ;

void FUNC_5(struct request_sock_queue *VAR_1)
{

 struct listen_sock *VAR_2 = FUNC_3(VAR_1);
 size_t VAR_3 = sizeof(struct listen_sock) +
  VAR_2->nr_table_entries * sizeof(struct request_sock *);

 if (VAR_2->qlen != 0) {
  unsigned int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2->nr_table_entries; VAR_4++) {
   struct request_sock *VAR_5;

   while ((VAR_5 = VAR_2->syn_table[VAR_4]) != ((void*)0)) {
    VAR_2->syn_table[VAR_4] = VAR_5->dl_next;
    VAR_2->qlen--;
    FUNC_2(VAR_5);
   }
  }
 }

 FUNC_0(VAR_2->qlen != 0);
 if (VAR_3 > VAR_0)
  FUNC_4(VAR_2);
 else
  FUNC_1(VAR_2);
}
