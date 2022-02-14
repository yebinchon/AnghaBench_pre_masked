
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sender_context {unsigned int num_fds; int * out_fds; int wakefd; int ready_out; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void *FUNC_3(struct sender_context *VAR_2)
{
 char VAR_3[VAR_0];
 unsigned int VAR_4, VAR_5;

 FUNC_1(VAR_2->ready_out, VAR_2->wakefd);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2->num_fds; VAR_5++) {
   int VAR_6, VAR_7 = 0;

again:
   VAR_6 = FUNC_2(VAR_2->out_fds[VAR_5], VAR_3 + VAR_7,
        sizeof(VAR_3)-VAR_7);
   if (VAR_6 < 0)
    FUNC_0("SENDER: write");
   VAR_7 += VAR_6;
   if (VAR_7 < VAR_0)
    goto again;
  }
 }

 return ((void*)0);
}
