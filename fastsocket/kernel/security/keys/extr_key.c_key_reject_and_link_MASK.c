
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {unsigned int tv_sec; } ;
struct TYPE_4__ {long* x; } ;
struct key {unsigned int expiry; int flags; int type; TYPE_2__ type_data; TYPE_1__* user; int description; } ;
struct TYPE_3__ {int nikeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct key*,struct key*,unsigned long*) ;
 int FUNC_1 (struct key*,int ,int ,unsigned long*) ;
 int FUNC_2 (struct key*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 struct timespec FUNC_4 () ;
 int FUNC_5 (struct key*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,int ) ;

int FUNC_15(struct key *VAR_6,
   unsigned VAR_7,
   unsigned VAR_8,
   struct key *VAR_9,
   struct key *VAR_10)
{
 unsigned long VAR_11;
 struct timespec VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 FUNC_5(VAR_6);
 FUNC_5(VAR_9);

 VAR_14 = 0;
 VAR_13 = -VAR_0;

 if (VAR_9)
  VAR_15 = FUNC_1(VAR_9, VAR_6->type,
         VAR_6->description, &VAR_11);

 FUNC_8(&VAR_4);


 if (!FUNC_13(VAR_1, &VAR_6->flags)) {

  FUNC_3(&VAR_6->user->nikeys);
  VAR_6->type_data.x[0] = -(long)VAR_8;
  FUNC_11();
  FUNC_10(VAR_2, &VAR_6->flags);
  FUNC_10(VAR_1, &VAR_6->flags);
  VAR_12 = FUNC_4();
  VAR_6->expiry = VAR_12.tv_sec + VAR_7;
  FUNC_7(VAR_6->expiry + VAR_5);

  if (FUNC_12(VAR_3, &VAR_6->flags))
   VAR_14 = 1;

  VAR_13 = 0;


  if (VAR_9 && VAR_15 == 0)
   FUNC_0(VAR_9, VAR_6, &VAR_11);


  if (VAR_10)
   FUNC_6(VAR_10);
 }

 FUNC_9(&VAR_4);

 if (VAR_9)
  FUNC_2(VAR_9, VAR_6->type, VAR_11);


 if (VAR_14)
  FUNC_14(&VAR_6->flags, VAR_3);

 return VAR_13 == 0 ? VAR_15 : VAR_13;
}
