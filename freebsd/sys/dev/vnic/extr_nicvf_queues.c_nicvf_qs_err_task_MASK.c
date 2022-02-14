
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_set {int cq_cnt; int * sq; } ;
struct nicvf {int ifp; struct queue_set* qs; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nicvf*,struct queue_set*,int,int ) ;
 int FUNC_2 (struct nicvf*,int) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*,int ,int) ;
 int FUNC_5 (struct nicvf*,int ,int) ;
 int FUNC_6 (struct nicvf*,int) ;
 int FUNC_7 (struct nicvf*,int *,int) ;
 int FUNC_8 (struct nicvf*,int *,int) ;

__attribute__((used)) static void
FUNC_9(void *VAR_7, int VAR_8)
{
 struct nicvf *VAR_9;
 struct queue_set *VAR_10;
 int VAR_11;
 uint64_t VAR_12;
 boolean_t VAR_13 = VAR_6;

 VAR_9 = (struct nicvf *)VAR_7;
 VAR_10 = VAR_9->qs;


 FUNC_0(VAR_9->ifp, VAR_1, VAR_2);


 for (VAR_11 = 0; VAR_11 < VAR_10->cq_cnt; VAR_11++) {
  VAR_12 = FUNC_5(VAR_9, VAR_5,
      VAR_11);
  if ((VAR_12 & VAR_0) == 0)
   continue;

  FUNC_3(VAR_9, VAR_3, VAR_11);
  FUNC_6(VAR_9, VAR_11);
  (void)FUNC_2(VAR_9, VAR_11);
  FUNC_1(VAR_9, VAR_10, VAR_11, VAR_13);
  FUNC_8(VAR_9, &VAR_10->sq[VAR_11], VAR_11);
  FUNC_7(VAR_9, &VAR_10->sq[VAR_11], VAR_11);
  FUNC_4(VAR_9, VAR_3, VAR_11);
 }

 FUNC_0(VAR_9->ifp, VAR_2, VAR_1);

 FUNC_4(VAR_9, VAR_4, 0);
}
