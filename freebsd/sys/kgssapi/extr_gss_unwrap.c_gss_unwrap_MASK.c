
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
 scalar_t__ FUNC_0 (int const,scalar_t__*,struct mbuf**,int*,int *) ;
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
    const gss_buffer_t VAR_8,
    gss_buffer_t VAR_9,
    int *VAR_10,
    gss_qop_t *VAR_11)
{
 OM_uint32 VAR_12;
 struct mbuf *VAR_13;

 if (!VAR_7) {
  *VAR_6 = 0;
  return (VAR_1);
 }

 FUNC_2(VAR_13, VAR_5, VAR_3);
 if (VAR_8->length > VAR_2)
  FUNC_1(VAR_13, VAR_5);
 FUNC_3(VAR_13, VAR_8->length, VAR_8->value);

 VAR_12 = FUNC_0(VAR_7, VAR_6, &VAR_13, VAR_10, VAR_11);





 if (VAR_12 == VAR_0) {
  VAR_9->length = FUNC_6(VAR_13, ((void*)0));
  VAR_9->value =
   FUNC_7(VAR_9->length,
       VAR_4, VAR_5);
  FUNC_4(VAR_13, 0, VAR_9->length,
      VAR_9->value);
  FUNC_5(VAR_13);
 }

 return (VAR_12);
}
