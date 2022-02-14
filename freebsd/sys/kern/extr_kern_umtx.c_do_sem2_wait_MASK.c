
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct umtx_q {int uq_flags; int uq_key; } ;
struct thread {struct umtx_q* td_umtxq; } ;
struct abs_timeout {int cur; int end; } ;
struct _usem2 {int _count; int _flags; } ;
struct _umtx_time {int _flags; int _timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct abs_timeout*,struct _umtx_time*) ;
 int FUNC_3 (struct abs_timeout*) ;
 int FUNC_4 (int *,int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (struct _usem2*,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct thread*,int) ;
 int FUNC_12 (struct umtx_q*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct umtx_q*) ;
 int FUNC_15 (struct umtx_q*,char*,struct abs_timeout*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct thread *VAR_7, struct _usem2 *VAR_8, struct _umtx_time *VAR_9)
{
 struct abs_timeout VAR_10;
 struct umtx_q *VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = VAR_7->td_umtxq;
 VAR_13 = FUNC_6(&VAR_8->_flags);
 if (VAR_9 != ((void*)0))
  FUNC_2(&VAR_10, VAR_9);

again:
 VAR_14 = FUNC_8(VAR_8, VAR_3, FUNC_0(VAR_13), &VAR_11->uq_key);
 if (VAR_14 != 0)
  return (VAR_14);
 FUNC_13(&VAR_11->uq_key);
 FUNC_10(&VAR_11->uq_key);
 FUNC_12(VAR_11);
 FUNC_17(&VAR_11->uq_key);
 VAR_15 = FUNC_5(&VAR_8->_count, &VAR_12);
 if (VAR_15 == -1) {
  FUNC_13(&VAR_11->uq_key);
  FUNC_16(&VAR_11->uq_key);
  FUNC_14(VAR_11);
  FUNC_17(&VAR_11->uq_key);
  FUNC_9(&VAR_11->uq_key);
  return (VAR_0);
 }
 for (;;) {
  if (FUNC_1(VAR_12) != 0) {
   FUNC_13(&VAR_11->uq_key);
   FUNC_16(&VAR_11->uq_key);
   FUNC_14(VAR_11);
   FUNC_17(&VAR_11->uq_key);
   FUNC_9(&VAR_11->uq_key);
   return (0);
  }
  if (VAR_12 == VAR_6)
   break;
  VAR_15 = FUNC_4(&VAR_8->_count, 0, &VAR_12, VAR_6);
  if (VAR_15 == 0)
   break;
  FUNC_13(&VAR_11->uq_key);
  FUNC_16(&VAR_11->uq_key);
  FUNC_14(VAR_11);
  FUNC_17(&VAR_11->uq_key);
  FUNC_9(&VAR_11->uq_key);
  if (VAR_15 == -1)
   return (VAR_0);
  VAR_15 = FUNC_11(VAR_7, 1);
  if (VAR_15 != 0)
   return (VAR_15);
  goto again;
 }
 FUNC_13(&VAR_11->uq_key);
 FUNC_16(&VAR_11->uq_key);

 VAR_14 = FUNC_15(VAR_11, "usem", VAR_9 == ((void*)0) ? ((void*)0) : &VAR_10);

 if ((VAR_11->uq_flags & VAR_5) == 0)
  VAR_14 = 0;
 else {
  FUNC_14(VAR_11);
  if (VAR_9 != ((void*)0) && (VAR_9->_flags & VAR_4) == 0) {

   if (VAR_14 == VAR_2)
    VAR_14 = VAR_1;
   if (VAR_14 == VAR_1) {
    FUNC_3(&VAR_10);
    FUNC_7(&VAR_10.end, &VAR_10.cur,
        &VAR_9->_timeout);
   }
  }
 }
 FUNC_17(&VAR_11->uq_key);
 FUNC_9(&VAR_11->uq_key);
 return (VAR_14);
}
