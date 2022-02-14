
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink_proto {int (* rcvfunc ) (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;int header_length; int node; int request; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 struct datalink_proto* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

struct datalink_proto *FUNC_7(const unsigned char *VAR_4,
         int (*VAR_5)(struct sk_buff *,
          struct net_device *,
          struct packet_type *,
          struct net_device *))
{
 struct datalink_proto *VAR_6 = ((void*)0);

 FUNC_4(&VAR_2);

 if (FUNC_0(VAR_4))
  goto out;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6) {
  FUNC_3(VAR_6->type, VAR_4, 5);
  VAR_6->rcvfunc = VAR_5;
  VAR_6->header_length = 5 + 3;
  VAR_6->request = VAR_3;
  FUNC_2(&VAR_6->node, &VAR_1);
 }
out:
 FUNC_5(&VAR_2);

 FUNC_6();
 return VAR_6;
}
