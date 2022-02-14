
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
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const,scalar_t__*,int,int ,struct mbuf**,int*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct mbuf*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct mbuf*,int ,int ) ;
 int FUNC_4 (struct mbuf*,int ,int ,int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int *) ;
 int FUNC_7 (int ,int ,int ) ;

OM_uint32
FUNC_8(OM_uint32 *VAR_6,
    const gss_ctx_id_t VAR_7,
    int VAR_8,
    gss_qop_t VAR_9,
    const gss_buffer_t VAR_10,
    int *VAR_11,
    gss_buffer_t VAR_12)
{
 OM_uint32 VAR_13;
 struct mbuf *VAR_14;

 if (!VAR_7) {
  *VAR_6 = 0;
  return (VAR_1);
 }

 FUNC_2(VAR_14, VAR_5, VAR_3);
 if (VAR_10->length > VAR_2)
  FUNC_1(VAR_14, VAR_5);
 FUNC_3(VAR_14, VAR_10->length, VAR_10->value);

 VAR_13 = FUNC_0(VAR_7, VAR_6, VAR_8, VAR_9,
     &VAR_14, VAR_11);





 if (VAR_13 == VAR_0) {
  VAR_12->length = FUNC_6(VAR_14, ((void*)0));
  VAR_12->value =
   FUNC_7(VAR_12->length,
       VAR_4, VAR_5);
  FUNC_4(VAR_14, 0, VAR_12->length,
      VAR_12->value);
  FUNC_5(VAR_14);
 }

 return (VAR_13);
}
