
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {scalar_t__* td_retval; int td_ucred; } ;
struct kld_file_stat {int * pathname; int size; int address; int id; int refs; int * name; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int pathname; int size; int address; int id; int refs; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct thread *VAR_2, int VAR_3, struct kld_file_stat *VAR_4)
{
 linker_file_t VAR_5;
 int VAR_6;
 FUNC_4(&VAR_1);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(&VAR_1);
  return (VAR_0);
 }


 VAR_6 = FUNC_3(VAR_5->filename) + 1;
 if (VAR_6 > sizeof(VAR_4->name))
  VAR_6 = sizeof(VAR_4->name);
 FUNC_0(VAR_5->filename, &VAR_4->name[0], VAR_6);
 VAR_4->refs = VAR_5->refs;
 VAR_4->id = VAR_5->id;
 VAR_4->address = VAR_5->address;
 VAR_4->size = VAR_5->size;

 VAR_6 = FUNC_3(VAR_5->pathname) + 1;
 if (VAR_6 > sizeof(VAR_4->pathname))
  VAR_6 = sizeof(VAR_4->pathname);
 FUNC_0(VAR_5->pathname, &VAR_4->pathname[0], VAR_6);
 FUNC_5(&VAR_1);

 VAR_2->td_retval[0] = 0;
 return (0);
}
