
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int flags; TYPE_2__* user; TYPE_1__* type; } ;
struct TYPE_4__ {int nikeys; } ;
struct TYPE_3__ {int (* instantiate ) (struct key*,void const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key*,struct key*,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key*) ;
 int VAR_3 ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct key*,void const*,size_t) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct key *VAR_4,
          const void *VAR_5,
          size_t VAR_6,
          struct key *VAR_7,
          struct key *VAR_8,
          unsigned long *VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_2(VAR_4);
 FUNC_2(VAR_7);

 VAR_11 = 0;
 VAR_10 = -VAR_0;

 FUNC_4(&VAR_3);


 if (!FUNC_9(VAR_1, &VAR_4->flags)) {

  VAR_10 = VAR_4->type->instantiate(VAR_4, VAR_5, VAR_6);

  if (VAR_10 == 0) {

   FUNC_1(&VAR_4->user->nikeys);
   FUNC_6(VAR_1, &VAR_4->flags);

   if (FUNC_8(VAR_2, &VAR_4->flags))
    VAR_11 = 1;


   if (VAR_7)
    FUNC_0(VAR_7, VAR_4, VAR_9);


   if (VAR_8)
    FUNC_3(VAR_8);
  }
 }

 FUNC_5(&VAR_3);


 if (VAR_11)
  FUNC_10(&VAR_4->flags, VAR_2);

 return VAR_10;
}
