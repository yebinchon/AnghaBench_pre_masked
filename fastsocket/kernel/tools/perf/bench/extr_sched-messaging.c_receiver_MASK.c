
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receiver_context {unsigned int num_packets; int * in_fds; int wakefd; int ready_out; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_4(struct receiver_context* VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_1)
  FUNC_1(VAR_2->in_fds[1]);


 FUNC_3(VAR_2->ready_out, VAR_2->wakefd);


 for (VAR_3 = 0; VAR_3 < VAR_2->num_packets; VAR_3++) {
  char VAR_4[VAR_0];
  int VAR_5, VAR_6 = 0;

again:
  VAR_5 = FUNC_2(VAR_2->in_fds[0], VAR_4 + VAR_6, VAR_0 - VAR_6);
  if (VAR_5 < 0)
   FUNC_0("SERVER: read");
  VAR_6 += VAR_5;
  if (VAR_6 < VAR_0)
   goto again;
 }

 return ((void*)0);
}
