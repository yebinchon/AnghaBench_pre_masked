
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_attribute {int dummy; } ;
struct mlx4_port {int slave; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct mlx4_port *VAR_0,
     struct port_attribute *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%d\n", VAR_0->slave);
}
