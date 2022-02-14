
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_construction {void* key; void* authkey; } ;
struct key {int flags; TYPE_1__* type; int serial; } ;
typedef int (* request_key_actor_t ) (struct key_construction*,char*,void*) ;
struct TYPE_2__ {int (* request_key ) (struct key_construction*,char*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_2 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct key_construction*,char*,void*) ;
 int FUNC_4 (char*,int ,void const*,size_t,void*) ;
 void* FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (struct key_construction*) ;
 int FUNC_8 (char*,int) ;
 struct key_construction* FUNC_9 (int,int ) ;
 struct key* FUNC_10 (struct key*,void const*,size_t,struct key*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct key *VAR_3, const void *VAR_4,
    size_t VAR_5, void *VAR_6,
    struct key *VAR_7)
{
 struct key_construction *VAR_8;
 request_key_actor_t VAR_9;
 struct key *VAR_10;
 int VAR_11;

 FUNC_4("%d,%p,%zu,%p", VAR_3->serial, VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_10 = FUNC_10(VAR_3, VAR_4, VAR_5,
           VAR_7);
 if (FUNC_0(VAR_10)) {
  FUNC_7(VAR_8);
  VAR_11 = FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
 } else {
  VAR_8->authkey = FUNC_5(VAR_10);
  VAR_8->key = FUNC_5(VAR_3);


  VAR_9 = FUNC_3;
  if (VAR_3->type->request_key)
   VAR_9 = VAR_3->type->request_key;

  VAR_11 = VAR_9(VAR_8, "create", VAR_6);



  FUNC_2(VAR_11 < 0 &&
   !FUNC_11(VAR_2, &VAR_10->flags));
  FUNC_6(VAR_10);
 }

 FUNC_8(" = %d", VAR_11);
 return VAR_11;
}
