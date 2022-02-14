
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int td_ucred; } ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int id; int userrefs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct thread*) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char const*,int *,int *,TYPE_1__**) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct thread *VAR_2, const char *VAR_3, int *VAR_4)
{
 const char *VAR_5, *VAR_6;
 linker_file_t VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_5(VAR_2->td_ucred, 0)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_4(VAR_2, VAR_0)) != 0)
  return (VAR_8);





 FUNC_1(FUNC_2(VAR_2));






 if (FUNC_6(VAR_3, '/') || FUNC_6(VAR_3, '.')) {
  VAR_5 = VAR_3;
  VAR_6 = ((void*)0);
 } else {
  VAR_5 = ((void*)0);
  VAR_6 = VAR_3;
 }

 FUNC_7(&VAR_1);
 VAR_8 = FUNC_3(VAR_5, VAR_6, ((void*)0), ((void*)0), &VAR_7);
 if (VAR_8) {
  FUNC_8(&VAR_1);
  goto done;
 }
 VAR_7->userrefs++;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_7->id;
 FUNC_8(&VAR_1);

done:
 FUNC_0();
 return (VAR_8);
}
