
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (struct sctp_chunk*,size_t,void const*) ;
 int FUNC_1 (struct sctp_chunk*,size_t,int *) ;
 int FUNC_2 (struct sctp_chunk*,int ,size_t) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,struct sctp_chunk const*,size_t) ;

struct sctp_chunk *FUNC_4(const struct sctp_association *VAR_0,
     const struct sctp_chunk *VAR_1,
     __be16 VAR_2, const void *VAR_3,
     size_t VAR_4, size_t VAR_5)
{
 struct sctp_chunk *VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_4 + VAR_5);
 if (!VAR_6)
  goto nodata;

 FUNC_2(VAR_6, VAR_2, VAR_4 + VAR_5);
 FUNC_0(VAR_6, VAR_4, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_6, VAR_5, ((void*)0));

nodata:
 return VAR_6;
}
