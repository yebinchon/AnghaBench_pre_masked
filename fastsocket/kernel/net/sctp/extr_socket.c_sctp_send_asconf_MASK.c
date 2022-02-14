
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int list; } ;
struct sctp_association {struct sctp_chunk* addip_last_asconf; int addip_chunk_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int FUNC_2 (struct sctp_chunk*) ;
 int FUNC_3 (struct sctp_association*,struct sctp_chunk*) ;

__attribute__((used)) static int FUNC_4(struct sctp_association *VAR_0,
       struct sctp_chunk *VAR_1)
{
 int VAR_2 = 0;




 if (VAR_0->addip_last_asconf) {
  FUNC_0(&VAR_1->list, &VAR_0->addip_chunk_list);
  goto out;
 }


 FUNC_2(VAR_1);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1);
 else
  VAR_0->addip_last_asconf = VAR_1;

out:
 return VAR_2;
}
