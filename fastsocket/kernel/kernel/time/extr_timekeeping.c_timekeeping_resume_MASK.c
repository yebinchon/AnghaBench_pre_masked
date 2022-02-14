
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct sys_device {int dummy; } ;
struct TYPE_4__ {int (* read ) (TYPE_2__*) ;int cycle_last; } ;
struct TYPE_3__ {int lock; scalar_t__ ntp_error; TYPE_2__* clock; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct timespec*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct timespec*,int *) ;
 struct timespec FUNC_8 (struct timespec,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct sys_device *VAR_4)
{
 unsigned long VAR_5;
 struct timespec VAR_6;

 FUNC_4(&VAR_6);

 FUNC_2();

 FUNC_10(&VAR_1.lock, VAR_5);

 if (FUNC_7(&VAR_6, &VAR_2) > 0) {
  VAR_6 = FUNC_8(VAR_6, VAR_2);
  FUNC_0(&VAR_6);
 }

 VAR_1.clock->cycle_last = VAR_1.clock->read(VAR_1.clock);
 VAR_1.ntp_error = 0;
 VAR_3 = 0;
 FUNC_6(0);
 FUNC_11(&VAR_1.lock, VAR_5);

 FUNC_9();

 FUNC_1(VAR_0, ((void*)0));


 FUNC_3();

 return 0;
}
