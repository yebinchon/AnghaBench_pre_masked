
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_thread_info {int cpu_num; int in_fd; int out_fd; int read_pipe; int write_pipe; unsigned long pipe_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ,unsigned long) ;
 void* FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (int*,int ) ;
 int FUNC_4 (char*,int) ;

void *FUNC_5(int VAR_6, const char *VAR_7, const char *VAR_8,
    bool VAR_9, unsigned long VAR_10,
    struct rw_thread_info *VAR_11)
{
 int VAR_12[2];

 VAR_11->cpu_num = VAR_6;


 VAR_11->in_fd = FUNC_2(VAR_7, VAR_3);
 if (VAR_11->in_fd == -1) {
  FUNC_4("Could not open in_fd (CPU:%d)\n", VAR_6);
  goto error;
 }


 if (!VAR_9) {

  VAR_11->out_fd = FUNC_2(VAR_8, VAR_4);
  if (VAR_11->out_fd == -1) {
   FUNC_4("Could not open out_fd (CPU:%d)\n", VAR_6);
   goto error;
  }
 } else

  VAR_11->out_fd = VAR_5;

 if (FUNC_3(VAR_12, VAR_2) < 0) {
  FUNC_4("Could not create pipe in rw-thread(%d)\n", VAR_6);
  goto error;
 }
 VAR_11->read_pipe = VAR_12[1];
 VAR_11->write_pipe = VAR_12[0];
 VAR_11->pipe_size = VAR_10;

 return ((void*)0);

error:
 FUNC_0(VAR_0);
}
