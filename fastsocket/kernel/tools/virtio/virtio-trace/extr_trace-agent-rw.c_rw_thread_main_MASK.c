
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_thread_info {scalar_t__ pipe_size; int cpu_num; int out_fd; int write_pipe; int read_pipe; int in_fd; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int *,scalar_t__,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void *FUNC_10(void *VAR_8)
{
 ssize_t VAR_9, VAR_10;
 ssize_t VAR_11;
 struct rw_thread_info *VAR_12 = (struct rw_thread_info *)VAR_8;

 FUNC_0(VAR_12->cpu_num);

 while (1) {

  if (!VAR_5) {
   FUNC_5(&VAR_7);
   FUNC_4(&VAR_4, &VAR_7);
   FUNC_6(&VAR_7);
  }

  if (VAR_6)
   break;





  VAR_9 = FUNC_8(VAR_12->in_fd, ((void*)0), VAR_12->read_pipe, ((void*)0),
    VAR_12->pipe_size, VAR_3 | VAR_2);

  if (VAR_9 < 0) {
   FUNC_3("Splice_read in rw-thread(%d)\n", VAR_12->cpu_num);
   goto error;
  } else if (VAR_9 == 0) {






   FUNC_9(VAR_1);
   FUNC_2("Read retry(cpu:%d)\n", VAR_12->cpu_num);
   continue;
  }

  VAR_10 = 0;

  do {
   VAR_11 = FUNC_8(VAR_12->write_pipe, ((void*)0), VAR_12->out_fd, ((void*)0),
     VAR_9 - VAR_10,
     VAR_3 | VAR_2);

   if (VAR_11 < 0) {
    FUNC_3("Splice_write in rw-thread(%d)\n",
        VAR_12->cpu_num);
    goto error;
   } else if (VAR_11 == 0)
    FUNC_7(1);
   VAR_10 += VAR_11;
  } while (VAR_10 < VAR_9);
 }

 return ((void*)0);

error:
 FUNC_1(VAR_0);
}
