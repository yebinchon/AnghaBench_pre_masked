
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_thread_fn ;
struct svc_serv {struct module* sv_module; int sv_function; } ;
struct svc_program {int dummy; } ;
struct module {int dummy; } ;


 struct svc_serv* FUNC_0 (struct svc_program*,unsigned int,unsigned int,void (*) (struct svc_serv*)) ;
 unsigned int FUNC_1 () ;

struct svc_serv *
FUNC_2(struct svc_program *VAR_0, unsigned int VAR_1,
    void (*VAR_2)(struct svc_serv *VAR_3),
    svc_thread_fn VAR_4, struct module *VAR_5)
{
 struct svc_serv *VAR_6;
 unsigned int VAR_7 = FUNC_1();

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_7, VAR_2);

 if (VAR_6 != ((void*)0)) {
  VAR_6->sv_function = VAR_4;
  VAR_6->sv_module = VAR_5;
 }

 return VAR_6;
}
