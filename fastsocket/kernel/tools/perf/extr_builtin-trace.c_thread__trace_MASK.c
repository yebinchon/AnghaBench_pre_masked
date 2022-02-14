
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_trace {int nr_events; } ;
struct thread {struct thread_trace* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 struct thread_trace* FUNC_1 () ;

__attribute__((used)) static struct thread_trace *FUNC_2(struct thread *VAR_2)
{
 struct thread_trace *VAR_3;

 if (VAR_2 == ((void*)0))
  goto fail;

 if (VAR_2->priv == ((void*)0))
  VAR_2->priv = FUNC_1();

 if (VAR_2->priv == ((void*)0))
  goto fail;

 VAR_3 = VAR_2->priv;
 ++VAR_3->nr_events;

 return VAR_3;
fail:
 FUNC_0(VAR_1, VAR_0,
        "WARNING: not enough memory, dropping samples!\n");
 return ((void*)0);
}
