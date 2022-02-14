
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_child {int consumer; } ;
typedef int device_t ;


 struct ntb_transport_child* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct ntb_transport_child *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3, "consumer=%d", VAR_4->consumer);
 return (0);
}
