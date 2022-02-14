
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
 int FUNC_0 (struct urwlock*,int ,int,void*,struct _umtx_time*) ;

int
FUNC_1(struct urwlock *VAR_3, int VAR_4,
 const struct timespec *VAR_5)
{
 struct _umtx_time VAR_6, *VAR_7;
 size_t VAR_8;

 if (VAR_5 == ((void*)0)) {
  VAR_7 = ((void*)0);
  VAR_8 = 0;
 } else {
  VAR_6._timeout = *VAR_5;
  VAR_6._flags = VAR_1;
  VAR_6._clockid = VAR_0;
  VAR_7 = &VAR_6;
  VAR_8 = sizeof(VAR_6);
 }
 return (FUNC_0(VAR_3, VAR_2, VAR_4,
     (void *)VAR_8, VAR_7));
}
