
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuidgen_args {int count; int store; } ;
struct uuid {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uuid*,int ,size_t) ;
 int FUNC_1 (struct uuid*,int ) ;
 int FUNC_2 (struct uuid*,size_t) ;
 struct uuid* FUNC_3 (size_t,int ,int ) ;

int
FUNC_4(struct thread *VAR_3, struct uuidgen_args *VAR_4)
{
 struct uuid *VAR_5;
 size_t VAR_6;
 int VAR_7;







 if (VAR_4->count < 1 || VAR_4->count > 2048)
  return (VAR_0);

 VAR_6 = VAR_4->count;
 VAR_5 = FUNC_3(VAR_6 * sizeof(struct uuid), VAR_1, VAR_2);
 FUNC_2(VAR_5, VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_4->store, VAR_6 * sizeof(struct uuid));
 FUNC_1(VAR_5, VAR_1);
 return (VAR_7);
}
