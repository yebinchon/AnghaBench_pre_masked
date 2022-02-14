
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink_proto {unsigned char* type; int header_length; int sap; int request; } ;


 int VAR_0 ;
 int FUNC_0 (struct datalink_proto*) ;
 struct datalink_proto* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char,int (*) (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*)) ;
 int VAR_1 ;

struct datalink_proto *FUNC_3(unsigned char VAR_2,
         int (*VAR_3)(struct sk_buff *VAR_4,
       struct net_device *VAR_5,
       struct packet_type *VAR_6,
       struct net_device *VAR_7))
{
 struct datalink_proto *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (VAR_8) {
  VAR_8->type[0] = VAR_2;
  VAR_8->header_length = 3;
  VAR_8->request = VAR_1;
  VAR_8->sap = FUNC_2(VAR_2, VAR_3);
  if (!VAR_8->sap) {
   FUNC_0(VAR_8);
   VAR_8 = ((void*)0);
  }
 }
 return VAR_8;
}
