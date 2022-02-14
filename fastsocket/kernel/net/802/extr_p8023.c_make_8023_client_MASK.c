
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink_proto {int request; scalar_t__ header_length; } ;


 int VAR_0 ;
 struct datalink_proto* FUNC_0 (int,int ) ;
 int VAR_1 ;

struct datalink_proto *FUNC_1(void)
{
 struct datalink_proto *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (VAR_2) {
  VAR_2->header_length = 0;
  VAR_2->request = VAR_1;
 }
 return VAR_2;
}
