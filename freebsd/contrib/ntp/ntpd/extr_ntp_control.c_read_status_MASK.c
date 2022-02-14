
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_short ;
typedef scalar_t__ u_char ;
struct recvbuf {int dummy; } ;
struct peer {int associd; struct peer* p_link; scalar_t__ num_events; } ;
typedef int a_st ;
struct TYPE_2__ {void* status; } ;


 int VAR_0 ;
 size_t FUNC_0 (void**) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,size_t,int) ;
 int FUNC_4 (int,struct peer*) ;
 int FUNC_5 (struct peer*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 struct peer* FUNC_7 (int) ;
 void* FUNC_8 (int ) ;
 struct peer* VAR_4 ;
 int FUNC_9 (char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_10(
 struct recvbuf *VAR_8,
 int VAR_9
 )
{
 struct peer *VAR_10;
 const u_char *VAR_11;
 size_t VAR_12;

 u_short VAR_13[VAR_1 / sizeof(u_short)];
 if (VAR_5) {
  VAR_10 = FUNC_7(VAR_5);
  if (((void*)0) == VAR_10) {
   FUNC_1(VAR_0);
   return;
  }
  VAR_7.status = FUNC_8(FUNC_5(VAR_10));
  if (VAR_6)
   VAR_10->num_events = 0;




  for (VAR_11 = VAR_3; *VAR_11 != 0; VAR_11++)
   FUNC_4((int)*VAR_11, VAR_10);
  FUNC_2(0);
  return;
 }
 VAR_12 = 0;
 VAR_7.status = FUNC_8(FUNC_6());
 for (VAR_10 = VAR_4; VAR_10 != ((void*)0); VAR_10 = VAR_10->p_link) {
  VAR_13[VAR_12++] = FUNC_8(VAR_10->associd);
  VAR_13[VAR_12++] = FUNC_8(FUNC_5(VAR_10));

  if (VAR_12 + 1 >= FUNC_0(VAR_13)) {
   FUNC_3((void *)VAR_13, VAR_12 * sizeof(VAR_13[0]),
        1);
   VAR_12 = 0;
  }
 }
 if (VAR_12)
  FUNC_3((void *)VAR_13, VAR_12 * sizeof(VAR_13[0]), 1);
 FUNC_2(0);
}
