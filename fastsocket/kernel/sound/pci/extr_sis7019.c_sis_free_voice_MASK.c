
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct voice {int flags; TYPE_1__* timing; } ;
struct sis7019 {int voice_lock; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sis7019*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sis7019 *VAR_3, struct voice *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_3->voice_lock, VAR_5);
 if (VAR_4->timing) {
  FUNC_0(VAR_3);
  VAR_4->timing->flags &= ~(VAR_0 | VAR_1 |
      VAR_2);
  VAR_4->timing = ((void*)0);
 }
 VAR_4->flags &= ~(VAR_0 | VAR_1 | VAR_2);
 FUNC_2(&VAR_3->voice_lock, VAR_5);
}
