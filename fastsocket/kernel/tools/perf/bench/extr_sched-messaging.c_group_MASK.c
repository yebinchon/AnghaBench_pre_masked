
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sender_context {unsigned int num_packets; int* in_fds; int ready_out; int wakefd; int* out_fds; unsigned int num_fds; } ;
struct receiver_context {unsigned int num_packets; int* in_fds; int ready_out; int wakefd; int* out_fds; unsigned int num_fds; } ;
typedef int pthread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sender_context*,void*) ;
 int FUNC_3 (int*) ;
 unsigned int VAR_0 ;
 struct sender_context* FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_5(pthread_t *VAR_4,
  unsigned int VAR_5,
  int VAR_6,
  int VAR_7)
{
 unsigned int VAR_8;
 struct sender_context *VAR_9 = FUNC_4(sizeof(struct sender_context)
   + VAR_5 * sizeof(int));

 if (!VAR_9)
  FUNC_0("malloc()");

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  int VAR_10[2];
  struct receiver_context *VAR_11 = FUNC_4(sizeof(*VAR_11));

  if (!VAR_11)
   FUNC_0("malloc()");



  FUNC_3(VAR_10);

  VAR_11->num_packets = VAR_5 * VAR_0;
  VAR_11->in_fds[0] = VAR_10[0];
  VAR_11->in_fds[1] = VAR_10[1];
  VAR_11->ready_out = VAR_6;
  VAR_11->wakefd = VAR_7;

  VAR_4[VAR_8] = FUNC_2(VAR_11, (void *)VAR_1);

  VAR_9->out_fds[VAR_8] = VAR_10[1];
  if (!VAR_3)
   FUNC_1(VAR_10[0]);
 }


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9->ready_out = VAR_6;
  VAR_9->wakefd = VAR_7;
  VAR_9->num_fds = VAR_5;

  VAR_4[VAR_5+VAR_8] = FUNC_2(VAR_9, (void *)VAR_2);
 }


 if (!VAR_3)
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
   FUNC_1(VAR_9->out_fds[VAR_8]);


 return VAR_5 * 2;
}
