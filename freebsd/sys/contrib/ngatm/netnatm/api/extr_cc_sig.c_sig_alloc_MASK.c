
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct ccsig {void* arg2; void* arg1; void* sig; void* target; void* has_msg; void* type; } ;
struct ccdata {int free_sigs; } ;


 struct ccsig* FUNC_0 (int) ;
 struct ccsig* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ccsig*,int ) ;
 int FUNC_3 (struct ccdata*,char*,void*,void*) ;
 int VAR_0 ;

__attribute__((used)) static struct ccsig *
FUNC_4(struct ccdata *VAR_1, u_int VAR_2, void *VAR_3, u_int VAR_4,
    u_int VAR_5, void *VAR_6, u_int VAR_7)
{
 struct ccsig *VAR_8;

 if ((VAR_8 = FUNC_1(&VAR_1->free_sigs)) == ((void*)0)) {
  VAR_8 = FUNC_0(sizeof(struct ccsig));
  if (VAR_8 == ((void*)0)) {
   FUNC_3(VAR_1, "signal %u/%u lost - ENOMEM", VAR_2, VAR_5);
   return (((void*)0));
  }
 } else
  FUNC_2(&VAR_1->free_sigs, VAR_8, VAR_0);

 VAR_8->type = VAR_2;
 VAR_8->has_msg = VAR_4;
 VAR_8->target = VAR_3;
 VAR_8->sig = VAR_5;
 VAR_8->arg1 = VAR_6;
 VAR_8->arg2 = VAR_7;

 return (VAR_8);
}
