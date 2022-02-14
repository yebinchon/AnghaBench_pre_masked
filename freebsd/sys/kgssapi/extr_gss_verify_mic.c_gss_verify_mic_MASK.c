
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_4__ {int value; int length; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const,scalar_t__*,struct mbuf*,struct mbuf*,int *) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct mbuf*,int ,int ) ;
 int FUNC_4 (struct mbuf*) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_4,
    const gss_ctx_id_t VAR_5,
    const gss_buffer_t VAR_6,
    const gss_buffer_t VAR_7,
    gss_qop_t *VAR_8)
{
 OM_uint32 VAR_9;
 struct mbuf *VAR_10, *VAR_11;

 if (!VAR_5) {
  *VAR_4 = 0;
  return (VAR_0);
 }

 FUNC_2(VAR_10, VAR_3, VAR_2);
 if (VAR_6->length > VAR_1)
  FUNC_1(VAR_10, VAR_3);
 FUNC_3(VAR_10, VAR_6->length, VAR_6->value);

 FUNC_2(VAR_11, VAR_3, VAR_2);
 if (VAR_7->length > VAR_1)
  FUNC_1(VAR_11, VAR_3);
 FUNC_3(VAR_11, VAR_7->length, VAR_7->value);

 VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_10, VAR_11, VAR_8);

 FUNC_4(VAR_10);
 FUNC_4(VAR_11);

 return (VAR_9);
}
