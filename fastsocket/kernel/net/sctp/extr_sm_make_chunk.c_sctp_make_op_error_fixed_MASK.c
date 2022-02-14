
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {size_t pathmtu; } ;


 size_t VAR_0 ;
 struct sctp_chunk* FUNC_0 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

__attribute__((used)) static inline struct sctp_chunk *FUNC_1(
 const struct sctp_association *VAR_1,
 const struct sctp_chunk *VAR_2)
{
 size_t VAR_3 = VAR_1 ? VAR_1->pathmtu : 0;

 if (!VAR_3)
  VAR_3 = VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
