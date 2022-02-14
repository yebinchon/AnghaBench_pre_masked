
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {TYPE_1__* head; } ;
struct gss_svc_data {scalar_t__* verf_start; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __be32 *
FUNC_3(struct xdr_buf *VAR_1, struct gss_svc_data *VAR_2)
{
 __be32 *VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_2->verf_start;
 VAR_2->verf_start = ((void*)0);


 if (*(VAR_3-1) != VAR_0)
  return ((void*)0);

 VAR_3 += 1;
 VAR_4 = FUNC_2(*VAR_3++);
 VAR_3 += FUNC_0(VAR_4);

 FUNC_1(VAR_3, VAR_3 + 2, 4);

 if (*VAR_3 != VAR_0) {
  VAR_1->head[0].iov_len -= 2 * 4;
  return ((void*)0);
 }
 VAR_3++;
 return VAR_3;
}
