
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct icl_pdu {TYPE_1__* ip_bhs_mbuf; int * ip_ahs_mbuf; TYPE_2__* ip_conn; } ;
typedef int received_digest ;
struct TYPE_4__ {int ic_header_crc32c; } ;
struct TYPE_3__ {int * m_next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct icl_pdu *VAR_1, size_t *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 if (VAR_1->ip_conn->ic_header_crc32c == 0)
  return (0);

 FUNC_0(sizeof(VAR_3) == VAR_0);
 if (FUNC_3(VAR_1->ip_conn,
     &VAR_3, VAR_0)) {
  FUNC_1("failed to receive header digest");
  return (-1);
 }
 *VAR_2 -= VAR_0;


 VAR_1->ip_bhs_mbuf->m_next = VAR_1->ip_ahs_mbuf;
 VAR_4 = FUNC_4(VAR_1->ip_bhs_mbuf);
 VAR_1->ip_bhs_mbuf->m_next = ((void*)0);
 if (VAR_3 != VAR_4) {
  FUNC_2("header digest check failed; got 0x%x, "
      "should be 0x%x", VAR_3, VAR_4);
  return (-1);
 }

 return (0);
}
