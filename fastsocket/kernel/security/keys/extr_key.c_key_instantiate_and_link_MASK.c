
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int type; int description; } ;


 int FUNC_0 (struct key*,void const*,size_t,struct key*,struct key*,unsigned long*) ;
 int FUNC_1 (struct key*,int ,int ,unsigned long*) ;
 int FUNC_2 (struct key*,int ,unsigned long) ;

int FUNC_3(struct key *VAR_0,
        const void *VAR_1,
        size_t VAR_2,
        struct key *VAR_3,
        struct key *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_3) {
  VAR_6 = FUNC_1(VAR_3, VAR_0->type, VAR_0->description,
           &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      &VAR_5);

 if (VAR_3)
  FUNC_2(VAR_3, VAR_0->type, VAR_5);

 return VAR_6;
}
