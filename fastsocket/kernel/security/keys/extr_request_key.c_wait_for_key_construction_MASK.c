
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* x; } ;
struct key {TYPE_1__ type_data; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct key*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

int FUNC_4(struct key *VAR_6, bool VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_6->flags, VAR_1,
     VAR_7 ? VAR_5 : VAR_4,
     VAR_7 ? VAR_2 : VAR_3);
 if (VAR_8 < 0)
  return VAR_8;
 if (FUNC_2(VAR_0, &VAR_6->flags)) {
  FUNC_1();
  return (long)VAR_6->type_data.x[0];
 }
 return FUNC_0(VAR_6);
}
