
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct priv_fw {int * file; } ;
typedef int * linker_file_t ;
struct TYPE_4__ {TYPE_1__* p_fd; } ;
struct TYPE_3__ {int * fd_rdir; } ;


 struct thread* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int **) ;
 int FUNC_1 (char*,int *,int *) ;
 struct priv_fw* FUNC_2 (char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, int VAR_3)
{
 struct thread *VAR_4 = VAR_0;
 char *VAR_5 = VAR_2;
 struct priv_fw *VAR_6;
 linker_file_t VAR_7;
 int VAR_8;


 FUNC_3(&VAR_1);
 FUNC_4(&VAR_1);

 if (VAR_4->td_proc->p_fd->fd_rdir == ((void*)0)) {
  FUNC_5("%s: root not mounted yet, no way to load image\n",
      VAR_5);
  goto done;
 }
 VAR_8 = FUNC_0(VAR_5, ((void*)0), &VAR_7);
 if (VAR_8 != 0) {
  FUNC_5("%s: could not load firmware image, error %d\n",
      VAR_5, VAR_8);
  goto done;
 }

 FUNC_3(&VAR_1);
 VAR_6 = FUNC_2(VAR_5, ((void*)0));
 if (VAR_6 == ((void*)0) || VAR_6->file != ((void*)0)) {
  FUNC_4(&VAR_1);
  if (VAR_6 == ((void*)0))
   FUNC_5("%s: firmware image loaded, "
       "but did not register\n", VAR_5);
  (void) FUNC_1(VAR_5, ((void*)0), ((void*)0));
  goto done;
 }
 VAR_6->file = VAR_7;
 FUNC_4(&VAR_1);
done:
 FUNC_6(VAR_5);
}
