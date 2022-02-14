
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_port {int p_type; } ;
typedef int device_t ;


 struct puc_port* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct puc_port *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_3, "type=%d", VAR_4->p_type);
 return (0);
}
