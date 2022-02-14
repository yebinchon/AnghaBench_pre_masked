
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct icl_pdu {scalar_t__ ip_data_len; TYPE_2__* ip_bhs_mbuf; TYPE_2__* ip_data_mbuf; struct icl_conn* ip_conn; } ;
struct icl_conn {scalar_t__ ic_data_crc32c; scalar_t__ ic_header_crc32c; } ;
typedef int digest ;
struct TYPE_6__ {size_t len; } ;
struct TYPE_7__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (struct icl_pdu*) ;
 int FUNC_3 (struct icl_pdu*,scalar_t__) ;
 size_t FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (TYPE_2__*,int,void*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(struct icl_pdu *VAR_0)
{
 size_t VAR_1, VAR_2;
 uint32_t VAR_3, VAR_4 = 0;
 int VAR_5;
 struct icl_conn *VAR_6;

 VAR_6 = VAR_0->ip_conn;

 FUNC_3(VAR_0, VAR_0->ip_data_len);

 VAR_2 = FUNC_4(VAR_0);

 if (VAR_6->ic_header_crc32c) {
  VAR_3 = FUNC_1(VAR_0->ip_bhs_mbuf);
  VAR_5 = FUNC_5(VAR_0->ip_bhs_mbuf, sizeof(VAR_3),
      (void *)&VAR_3);
  if (VAR_5 != 1) {
   FUNC_0("failed to append header digest");
   return (1);
  }
 }

 if (VAR_0->ip_data_len != 0) {
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1 > 0) {
   VAR_5 = FUNC_5(VAR_0->ip_data_mbuf, VAR_1,
       (void *)&VAR_4);
   if (VAR_5 != 1) {
    FUNC_0("failed to append padding");
    return (1);
   }
  }

  if (VAR_6->ic_data_crc32c) {
   VAR_3 = FUNC_1(VAR_0->ip_data_mbuf);

   VAR_5 = FUNC_5(VAR_0->ip_data_mbuf, sizeof(VAR_3),
       (void *)&VAR_3);
   if (VAR_5 != 1) {
    FUNC_0("failed to append data digest");
    return (1);
   }
  }

  FUNC_6(VAR_0->ip_bhs_mbuf, VAR_0->ip_data_mbuf);
  VAR_0->ip_data_mbuf = ((void*)0);
 }

 VAR_0->ip_bhs_mbuf->m_pkthdr.len = VAR_2;

 return (0);
}
