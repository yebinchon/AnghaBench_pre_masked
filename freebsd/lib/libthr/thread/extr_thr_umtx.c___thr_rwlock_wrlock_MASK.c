
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout ;
struct urwlock {int dummy; } ;
struct timespec {int dummy; } ;
struct _umtx_time {int _clockid; int _flags; struct timespec _timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct urwlock*,int ,int ,void*,struct _umtx_time*) ;

int
FUNC_1(struct urwlock *VAR_3, const struct timespec *VAR_4)
{
 struct _umtx_time VAR_5, *VAR_6;
 size_t VAR_7;

 if (VAR_4 == ((void*)0)) {
  VAR_6 = ((void*)0);
  VAR_7 = 0;
 } else {
  VAR_5._timeout = *VAR_4;
  VAR_5._flags = VAR_1;
  VAR_5._clockid = VAR_0;
  VAR_6 = &VAR_5;
  VAR_7 = sizeof(VAR_5);
 }
 return (FUNC_0(VAR_3, VAR_2, 0, (void *)VAR_7,
     VAR_6));
}
