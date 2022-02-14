
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tms ;
struct timespec {int dummy; } ;
struct _usem2 {int dummy; } ;
struct _umtx_time {struct timespec _timeout; int _flags; int _clockid; } ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _usem2*,int ,int ,void*,void*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __inline int
FUNC_1(struct _usem2 *VAR_5, clockid_t VAR_6, int VAR_7,
    const struct timespec *VAR_8, struct timespec *VAR_9)
{
 struct {
  struct _umtx_time timeout;
  struct timespec remain;
 } VAR_10;
 void *VAR_11;
 size_t VAR_12;
 int VAR_13;

 if (VAR_8 == ((void*)0)) {
  VAR_11 = ((void*)0);
  VAR_12 = 0;
 } else {
  VAR_10.timeout._clockid = VAR_6;
  VAR_10.timeout._flags = (VAR_7 & VAR_1) ? VAR_2 : 0;
  VAR_10.timeout._timeout = *VAR_8;
  VAR_11 = &VAR_10;
  VAR_12 = sizeof(VAR_10);
 }
 VAR_13 = FUNC_0(VAR_5, VAR_3, 0, (void *)VAR_12, VAR_11);
 if (VAR_13 == -1 && VAR_4 == VAR_0 && (VAR_7 & VAR_1) == 0 &&
     VAR_8 != ((void*)0) && VAR_9 != ((void*)0)) {
  *VAR_9 = VAR_10.remain;
 }

 return (VAR_13);
}
