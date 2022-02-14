
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_long ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int des_block ;
typedef int cryptkeyres ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,void*) ;
 int * FUNC_1 (int ,void*) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,void*,int ,void*,struct timeval) ;
 int FUNC_4 () ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (int ,void*) ;
 int * FUNC_7 (int ,void*) ;
 int * FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(u_long VAR_8, xdrproc_t VAR_9, void *VAR_10, xdrproc_t VAR_11,
    void *VAR_12)
{
 CLIENT *VAR_13;
 struct timeval VAR_14;

 if (VAR_8 == VAR_1 && &FUNC_1) {
  cryptkeyres *VAR_15;
  VAR_15 = FUNC_1)(FUNC_4(), VAR_10);
  *(cryptkeyres*)VAR_12 = *VAR_15;
  return (1);
 } else if (VAR_8 == VAR_0 && &FUNC_0) {
  cryptkeyres *VAR_16;
  VAR_16 = FUNC_0)(FUNC_4(), VAR_10);
  *(cryptkeyres*)VAR_12 = *VAR_16;
  return (1);
 } else if (VAR_8 == VAR_2 && &FUNC_2) {
  des_block *VAR_17;
  VAR_17 = FUNC_2)(FUNC_4(), 0);
  *(des_block*)VAR_12 = *VAR_17;
  return (1);
 }

 if ((VAR_8 == VAR_1) || (VAR_8 == VAR_0) ||
     (VAR_8 == VAR_4) || (VAR_8 == VAR_5) ||
     (VAR_8 == VAR_3))
  VAR_13 = FUNC_5(2);
 else
  VAR_13 = FUNC_5(1);

 if (VAR_13 == ((void*)0)) {
  return (0);
 }

 VAR_14.tv_sec = VAR_7;
 VAR_14.tv_usec = 0;

 if (FUNC_3(VAR_13, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
  VAR_14) == VAR_6) {
  return (1);
 } else {
  return (0);
 }
}
