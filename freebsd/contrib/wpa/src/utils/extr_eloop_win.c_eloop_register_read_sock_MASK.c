
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_sock {int sock; scalar_t__ event; int handler; void* user_data; void* eloop_data; } ;
typedef int eloop_sock_handler ;
typedef scalar_t__ WSAEVENT ;
struct TYPE_2__ {int reader_count; int max_sock; int reader_table_changed; struct eloop_sock* readers; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_4 () ;
 struct eloop_sock* FUNC_5 (struct eloop_sock*,int,int) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(int VAR_3, eloop_sock_handler VAR_4,
        void *VAR_5, void *VAR_6)
{
 WSAEVENT VAR_7;
 struct eloop_sock *VAR_8;

 if (FUNC_4())
  return -1;

 VAR_7 = FUNC_1();
 if (VAR_7 == VAR_1) {
  FUNC_6("WSACreateEvent() failed: %d\n", FUNC_3());
  return -1;
 }

 if (FUNC_2(VAR_3, VAR_7, VAR_0)) {
  FUNC_6("WSAEventSelect() failed: %d\n", FUNC_3());
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_8 = FUNC_5(VAR_2.readers, VAR_2.reader_count + 1,
          sizeof(struct eloop_sock));
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_3, VAR_7, 0);
  FUNC_0(VAR_7);
  return -1;
 }

 VAR_8[VAR_2.reader_count].sock = VAR_3;
 VAR_8[VAR_2.reader_count].eloop_data = VAR_5;
 VAR_8[VAR_2.reader_count].user_data = VAR_6;
 VAR_8[VAR_2.reader_count].handler = VAR_4;
 VAR_8[VAR_2.reader_count].event = VAR_7;
 VAR_2.reader_count++;
 VAR_2.readers = VAR_8;
 if (VAR_3 > VAR_2.max_sock)
  VAR_2.max_sock = VAR_3;
 VAR_2.reader_table_changed = 1;

 return 0;
}
