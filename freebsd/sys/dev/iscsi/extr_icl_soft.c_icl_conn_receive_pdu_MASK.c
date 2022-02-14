
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct iscsi_bhs {int dummy; } ;
struct icl_pdu {int ip_data_len; } ;
struct icl_conn {int ic_receive_state; size_t ic_receive_len; size_t ic_max_data_segment_length; int ic_header_crc32c; int ic_data_crc32c; struct icl_pdu* ic_receive_pdu; struct socket* ic_socket; } ;


 int VAR_0 ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct icl_conn*) ;
 size_t FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (struct icl_pdu*,size_t*) ;
 int FUNC_6 (struct icl_pdu*,size_t*) ;
 size_t FUNC_7 (struct icl_pdu*) ;
 size_t FUNC_8 (struct icl_pdu*) ;
 int FUNC_9 (struct icl_pdu*,size_t*) ;
 int FUNC_10 (struct icl_pdu*,size_t*) ;
 int FUNC_11 (struct icl_pdu*,size_t*,int*) ;
 struct icl_pdu* FUNC_12 (struct icl_conn*,int ) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static struct icl_pdu *
FUNC_14(struct icl_conn *VAR_4, size_t *VAR_5)
{
 struct icl_pdu *VAR_6;
 struct socket *VAR_7;
 size_t VAR_8;
 int VAR_9;
 bool VAR_10;

 VAR_7 = VAR_4->ic_socket;

 if (VAR_4->ic_receive_state == 131) {
  FUNC_2(VAR_4->ic_receive_pdu == ((void*)0),
      ("ic->ic_receive_pdu != NULL"));
  VAR_6 = FUNC_12(VAR_4, VAR_3);
  if (VAR_6 == ((void*)0)) {
   FUNC_0("failed to allocate PDU; "
       "dropping connection");
   FUNC_3(VAR_4);
   return (((void*)0));
  }
  VAR_4->ic_receive_pdu = VAR_6;
 } else {
  FUNC_2(VAR_4->ic_receive_pdu != ((void*)0),
      ("ic->ic_receive_pdu == NULL"));
  VAR_6 = VAR_4->ic_receive_pdu;
 }

 if (*VAR_5 < VAR_4->ic_receive_len) {




  return (((void*)0));
 }

 switch (VAR_4->ic_receive_state) {
 case 131:

  VAR_9 = FUNC_10(VAR_6, VAR_5);
  if (VAR_9 != 0) {
   FUNC_0("failed to receive BHS; "
       "dropping connection");
   break;
  }






  VAR_8 = FUNC_7(VAR_6);
  if (VAR_8 > VAR_4->ic_max_data_segment_length) {
   FUNC_1("received data segment "
       "length %zd is larger than negotiated "
       "MaxDataSegmentLength %zd; "
       "dropping connection",
       VAR_8, VAR_4->ic_max_data_segment_length);
   VAR_9 = VAR_0;
   break;
  }

  VAR_4->ic_receive_state = 132;
  VAR_4->ic_receive_len = FUNC_4(VAR_6);
  break;

 case 132:

  VAR_9 = FUNC_9(VAR_6, VAR_5);
  if (VAR_9 != 0) {
   FUNC_0("failed to receive AHS; "
       "dropping connection");
   break;
  }
  VAR_4->ic_receive_state = 128;
  if (VAR_4->ic_header_crc32c == 0)
   VAR_4->ic_receive_len = 0;
  else
   VAR_4->ic_receive_len = VAR_2;
  break;

 case 128:

  VAR_9 = FUNC_6(VAR_6, VAR_5);
  if (VAR_9 != 0) {
   FUNC_0("header digest failed; "
       "dropping connection");
   break;
  }

  VAR_4->ic_receive_state = 130;
  VAR_4->ic_receive_len =
      FUNC_8(VAR_6);
  break;

 case 130:

  VAR_9 = FUNC_11(VAR_6, VAR_5,
      &VAR_10);
  if (VAR_9 != 0) {
   FUNC_0("failed to receive data segment;"
       "dropping connection");
   break;
  }

  if (VAR_10)
   break;

  VAR_4->ic_receive_state = 129;
  if (VAR_6->ip_data_len == 0 || VAR_4->ic_data_crc32c == 0)
   VAR_4->ic_receive_len = 0;
  else
   VAR_4->ic_receive_len = VAR_1;
  break;

 case 129:

  VAR_9 = FUNC_5(VAR_6, VAR_5);
  if (VAR_9 != 0) {
   FUNC_0("data digest failed; "
       "dropping connection");
   break;
  }





  VAR_4->ic_receive_state = 131;
  VAR_4->ic_receive_len = sizeof(struct iscsi_bhs);
  VAR_4->ic_receive_pdu = ((void*)0);
  return (VAR_6);

 default:
  FUNC_13("invalid ic_receive_state %d\n", VAR_4->ic_receive_state);
 }

 if (VAR_9 != 0) {




  FUNC_3(VAR_4);
 }

 return (((void*)0));
}
