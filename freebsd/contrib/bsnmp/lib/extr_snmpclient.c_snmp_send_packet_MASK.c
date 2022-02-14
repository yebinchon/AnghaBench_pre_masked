
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct snmp_pdu {int request_id; } ;
struct asn_buf {int * asn_ptr; int asn_len; } ;
typedef int ssize_t ;
typedef int int32_t ;
struct TYPE_4__ {int fd; scalar_t__ dump_pdus; int txbuflen; } ;


 int * FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct snmp_pdu*) ;
 scalar_t__ FUNC_6 (struct snmp_pdu*,struct asn_buf*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int32_t
FUNC_8(struct snmp_pdu * VAR_2)
{
 u_char *VAR_3;
 struct asn_buf VAR_4;
 ssize_t VAR_5;

 if ((VAR_3 = FUNC_0(1, VAR_1.txbuflen)) == ((void*)0)) {
  FUNC_3(&VAR_1, "%s", FUNC_7(VAR_0));
  return (-1);
 }

 VAR_2->request_id = FUNC_4(&VAR_1);

 VAR_4.asn_ptr = VAR_3;
 VAR_4.asn_len = VAR_1.txbuflen;
 if (FUNC_6(VAR_2, &VAR_4)) {
  FUNC_3(&VAR_1, "%s", FUNC_7(VAR_0));
  FUNC_1(VAR_3);
  return (-1);
 }

 if (VAR_1.dump_pdus)
  FUNC_5(VAR_2);

 if ((VAR_5 = FUNC_2(VAR_1.fd, VAR_3, VAR_4.asn_ptr - VAR_3, 0)) == -1) {
  FUNC_3(&VAR_1, "%s", FUNC_7(VAR_0));
  FUNC_1(VAR_3);
  return (-1);
 }
 FUNC_1(VAR_3);

 return (VAR_2->request_id);
}
