
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint32_t ;
typedef int u_long ;
typedef int u_int32_t ;
struct image_params {char* execpath; uintptr_t execpathp; uintptr_t canary; int canarylen; uintptr_t pagesizes; int pagesizeslen; TYPE_5__* args; TYPE_4__* sysent; int * auxargs; TYPE_3__* proc; } ;
struct freebsd32_ps_strings {int ps_argvstr; int ps_nargvstr; int ps_envstr; int ps_nenvstr; } ;
typedef int register_t ;
typedef int pagesizes32 ;
typedef char int32_t ;
typedef int canary ;
struct TYPE_12__ {TYPE_1__* p_sysent; } ;
struct TYPE_11__ {uintptr_t stringspace; int argc; int envc; char* begin_argv; } ;
struct TYPE_10__ {int (* sv_copyout_auxargs ) (struct image_params*,int *) ;int (* sv_stackgap ) (struct image_params*,int *) ;} ;
struct TYPE_9__ {TYPE_2__* p_sysent; } ;
struct TYPE_8__ {scalar_t__ sv_sigcode_base; int* sv_szsigcode; char* sv_sigcode; } ;
struct TYPE_7__ {scalar_t__ sv_psstrings; } ;


 uintptr_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,void*,uintptr_t) ;
 TYPE_6__* VAR_2 ;
 int * VAR_3 ;
 uintptr_t FUNC_2 (uintptr_t,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct image_params*,int *) ;
 int FUNC_5 (struct image_params*,int *) ;
 int FUNC_6 (int*,int) ;

register_t *
FUNC_7(struct image_params *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u_int32_t *VAR_8;
 char *VAR_9;
 uintptr_t VAR_10;
 u_int32_t *VAR_11;
 struct freebsd32_ps_strings *VAR_12;
 char VAR_13[sizeof(long) * 8];
 int32_t VAR_14[VAR_1];
 size_t VAR_15;
 int VAR_16;





 if (VAR_4->execpath != ((void*)0) && VAR_4->auxargs != ((void*)0))
  VAR_15 = FUNC_3(VAR_4->execpath) + 1;
 else
  VAR_15 = 0;
 VAR_12 = (struct freebsd32_ps_strings *)VAR_2->p_sysent->
     sv_psstrings;
 if (VAR_4->proc->p_sysent->sv_sigcode_base == 0)
  VAR_16 = *(VAR_4->proc->p_sysent->sv_szsigcode);
 else
  VAR_16 = 0;
 VAR_10 = (uintptr_t)VAR_12;




 if (VAR_16 != 0) {
  VAR_10 -= VAR_16;
  VAR_10 = FUNC_2(VAR_10, sizeof(uint32_t));
  FUNC_1(VAR_4->proc->p_sysent->sv_sigcode, (void *)VAR_10,
      VAR_16);
 }




 if (VAR_15 != 0) {
  VAR_10 -= VAR_15;
  VAR_4->execpathp = VAR_10;
  FUNC_1(VAR_4->execpath, (void *)VAR_10, VAR_15);
 }




 FUNC_0(VAR_13, sizeof(VAR_13), 0);
 VAR_10 -= sizeof(VAR_13);
 VAR_4->canary = VAR_10;
 FUNC_1(VAR_13, (void *)VAR_10, sizeof(VAR_13));
 VAR_4->canarylen = sizeof(VAR_13);




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_14[VAR_7] = (uint32_t)VAR_3[VAR_7];
 VAR_10 -= sizeof(VAR_14);
 VAR_10 = FUNC_2(VAR_10, sizeof(uint32_t));
 VAR_4->pagesizes = VAR_10;
 FUNC_1(VAR_14, (void *)VAR_10, sizeof(VAR_14));
 VAR_4->pagesizeslen = sizeof(VAR_14);

 VAR_10 -= VAR_0 - VAR_4->args->stringspace;
 VAR_10 = FUNC_2(VAR_10, sizeof(uint32_t));

 VAR_8 = (uint32_t *)VAR_10;
 if (VAR_4->sysent->sv_stackgap != ((void*)0))
  VAR_4->sysent->sv_stackgap(VAR_4, (u_long *)&VAR_8);

 if (VAR_4->auxargs)
  VAR_4->sysent->sv_copyout_auxargs(VAR_4, (u_long *)&VAR_8);





 VAR_8 -= VAR_4->args->argc + 1 + VAR_4->args->envc + 1;




 VAR_11 = VAR_8;

 VAR_9 = VAR_4->args->begin_argv;
 VAR_5 = VAR_4->args->argc;
 VAR_6 = VAR_4->args->envc;



 FUNC_1(VAR_9, (void *)VAR_10, VAR_0 - VAR_4->args->stringspace);




 FUNC_6(&VAR_12->ps_argvstr, (u_int32_t)(intptr_t)VAR_8);
 FUNC_6(&VAR_12->ps_nargvstr, VAR_5);




 for (; VAR_5 > 0; --VAR_5) {
  FUNC_6(VAR_8++, (u_int32_t)(intptr_t)VAR_10);
  while (*VAR_9++ != 0)
   VAR_10++;
  VAR_10++;
 }


 FUNC_6(VAR_8++, 0);

 FUNC_6(&VAR_12->ps_envstr, (u_int32_t)(intptr_t)VAR_8);
 FUNC_6(&VAR_12->ps_nenvstr, VAR_6);




 for (; VAR_6 > 0; --VAR_6) {
  FUNC_6(VAR_8++, (u_int32_t)(intptr_t)VAR_10);
  while (*VAR_9++ != 0)
   VAR_10++;
  VAR_10++;
 }


 FUNC_6(VAR_8, 0);

 return ((register_t *)VAR_11);
}
