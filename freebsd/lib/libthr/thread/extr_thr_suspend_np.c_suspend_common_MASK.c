
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pthread {scalar_t__ state; int flags; scalar_t__ tid; int cycle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pthread*,struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct pthread*,int ) ;
 int FUNC_3 (int *,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct pthread *VAR_5, struct pthread *VAR_6,
 int VAR_7)
{
 uint32_t VAR_8;

 while (VAR_6->state != VAR_0 &&
       !(VAR_6->flags & VAR_3)) {
  VAR_6->flags |= VAR_2;

  if (VAR_6->tid == VAR_4)
   return (1);
  VAR_8 = VAR_6->cycle;
  FUNC_2(VAR_6, VAR_1);
  FUNC_1(VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_3(&VAR_6->cycle, VAR_8, ((void*)0), 0);
   FUNC_0(VAR_5, VAR_6);
  } else {
   FUNC_0(VAR_5, VAR_6);
   return (0);
  }
 }

 return (1);
}
