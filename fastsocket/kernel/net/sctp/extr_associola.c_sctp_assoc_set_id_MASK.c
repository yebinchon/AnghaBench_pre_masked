
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {int assoc_id; } ;
typedef int sctp_assoc_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void*,int,int*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct sctp_association *VAR_6, gfp_t VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;


 if (VAR_6->assoc_id)
  return VAR_9;
retry:
 if (FUNC_4(!FUNC_1(&VAR_4, VAR_7)))
  return -VAR_1;

 FUNC_2(&VAR_5);
 VAR_9 = FUNC_0(&VAR_4, (void *)VAR_6,
        VAR_3, &VAR_8);
 if (!VAR_9) {
  VAR_3 = VAR_8 + 1;
  if (VAR_3 == VAR_2)
   VAR_3 = 1;
 }
 FUNC_3(&VAR_5);
 if (VAR_9 == -VAR_0)
  goto retry;
 else if (VAR_9)
  return VAR_9;

 VAR_6->assoc_id = (sctp_assoc_t) VAR_8;
 return VAR_9;
}
