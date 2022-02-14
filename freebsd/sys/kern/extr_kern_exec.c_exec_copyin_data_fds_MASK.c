
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct image_args {char* begin_argv; char* buf; size_t stringspace; char* endp; int fdp; int argc; } ;
struct filedesc {int fd_lastfile; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,...) ;
 int FUNC_1 (struct image_args*) ;
 int FUNC_2 (struct image_args*) ;
 int FUNC_3 (struct filedesc*,int*,size_t,int *) ;
 int FUNC_4 (int*,int ) ;
 int* FUNC_5 (size_t,int ,int ) ;
 int FUNC_6 (struct image_args*,char,int) ;

int
FUNC_7(struct thread *VAR_4, struct image_args *VAR_5,
    const void *VAR_6, size_t VAR_7, const int *VAR_8, size_t VAR_9)
{
 struct filedesc *VAR_10;
 const char *VAR_11;
 int *VAR_12;
 int VAR_13;

 FUNC_6(VAR_5, '\0', sizeof(*VAR_5));
 VAR_10 = VAR_4->td_proc->p_fd;
 if (VAR_7 >= VAR_0 || VAR_9 > VAR_10->fd_lastfile + 1)
  return (VAR_1);
 VAR_13 = FUNC_1(VAR_5);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_5->begin_argv = VAR_5->buf;
 VAR_5->stringspace = VAR_0;

 if (VAR_7 > 0) {





  VAR_13 = FUNC_0(VAR_6, VAR_5->begin_argv, VAR_7);
  if (VAR_13 != 0)
   goto err_exit;
  VAR_5->begin_argv[VAR_7] = '\0';
  VAR_5->endp = VAR_5->begin_argv + VAR_7 + 1;
  VAR_5->stringspace -= VAR_7 + 1;





  for (VAR_11 = VAR_5->begin_argv; VAR_11 < VAR_5->endp; ++VAR_11)
   if (*VAR_11 == '\0')
    ++VAR_5->argc;
 } else {

  VAR_5->endp = VAR_5->begin_argv;
 }


 VAR_12 = FUNC_5(VAR_9 * sizeof(int), VAR_2, VAR_3);
 VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_9 * sizeof(int));
 if (VAR_13 != 0) {
  FUNC_4(VAR_12, VAR_2);
  goto err_exit;
 }
 VAR_13 = FUNC_3(VAR_10, VAR_12, VAR_9, &VAR_5->fdp);
 FUNC_4(VAR_12, VAR_2);
 if (VAR_13 != 0)
  goto err_exit;

 return (0);
err_exit:
 FUNC_2(VAR_5);
 return (VAR_13);
}
