
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_long ;
struct umtx_q {int uq_flags; int uq_key; } ;
struct thread {struct umtx_q* td_umtxq; } ;
struct abs_timeout {int dummy; } ;
struct _umtx_time {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_1 (void*,scalar_t__*) ;
 int FUNC_2 (void*,scalar_t__*) ;
 int FUNC_3 (void*,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct umtx_q*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct umtx_q*) ;
 int FUNC_8 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct thread *VAR_7, void *VAR_8, u_long VAR_9,
    struct _umtx_time *VAR_10, int VAR_11, int VAR_12)
{
 struct abs_timeout VAR_13;
 struct umtx_q *VAR_14;
 u_long VAR_15;
 uint32_t VAR_16;
 int VAR_17 = 0;

 VAR_14 = VAR_7->td_umtxq;
 if ((VAR_17 = FUNC_3(VAR_8, VAR_5,
  VAR_12 ? VAR_4 : VAR_0, &VAR_14->uq_key)) != 0)
  return (VAR_17);

 if (VAR_10 != ((void*)0))
  FUNC_0(&VAR_13, VAR_10);

 FUNC_6(&VAR_14->uq_key);
 FUNC_5(VAR_14);
 FUNC_9(&VAR_14->uq_key);
 if (VAR_11 == 0) {
  VAR_17 = FUNC_1(VAR_8, &VAR_15);
  if (VAR_17 != 0)
   VAR_17 = VAR_1;
 } else {
  VAR_17 = FUNC_2(VAR_8, &VAR_16);
  if (VAR_17 == 0)
   VAR_15 = VAR_16;
  else
   VAR_17 = VAR_1;
 }
 FUNC_6(&VAR_14->uq_key);
 if (VAR_17 == 0) {
  if (VAR_15 == VAR_9)
   VAR_17 = FUNC_8(VAR_14, "uwait", VAR_10 == ((void*)0) ?
       ((void*)0) : &VAR_13);
  if ((VAR_14->uq_flags & VAR_6) == 0)
   VAR_17 = 0;
  else
   FUNC_7(VAR_14);
 } else if ((VAR_14->uq_flags & VAR_6) != 0) {
  FUNC_7(VAR_14);
 }
 FUNC_9(&VAR_14->uq_key);
 FUNC_4(&VAR_14->uq_key);
 if (VAR_17 == VAR_3)
  VAR_17 = VAR_2;
 return (VAR_17);
}
